#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
//
// AHIR release utilities
//
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>

// These will wait.
#ifndef COMPILE_TEST_ONLY
#ifndef AA2C
	#include "vhdlCStubs.h"
#else
	#include "aa_c_model.h"
#endif
#endif

// includes the header.
#define MAX_PACKET_LENGTH_IN_WORDS  64
#define NUMBER_OF_PORTS		     4

typedef struct _TbConfig {

	// if [i] = 1, input port i will be fed by data
	//   else input port 1 will be unused.
	int active_flag[NUMBER_OF_PORTS];

	// if random_dest_flag[i] is set, then
	// input port i can send data to any
	// one of the output ports.
	int random_dest_flag[NUMBER_OF_PORTS];

	// if random_dest_flag[i] is 0, then
	// input port i writes only to
	// this destination port (provided
	// it is either 1 or 2).
	int destination_port[NUMBER_OF_PORTS];

} TbConfig;
TbConfig tb_config;

int __err_flag__ = 0;

void input_port_core(int port_id)
{

	if(!tb_config.active_flag[port_id-1])
	{
		fprintf(stderr,"Info: input port %d marked as inactive.\n", port_id);
		return;
	}

	uint32_t send_buffer[MAX_PACKET_LENGTH_IN_WORDS];	
	int packet_length = rand() % MAX_PACKET_LENGTH_IN_WORDS;

	int i;
	for(i = 0; i < packet_length; i++)
	{
		send_buffer[i] = i;
	}

	// odd sequence id means from port 1 even sequence id means from port 2.
	uint8_t seq_id = port_id;
	while(1)
	{
		int dest_port =  -1;
		dest_port = 	
			(tb_config.random_dest_flag[port_id-1] ? ((rand() & (NUMBER_OF_PORTS-1))+1) :  
				tb_config.destination_port[port_id-1]);

		if(dest_port > 0)
		{
			send_buffer[0] = (dest_port << 24) | (packet_length << 8) | seq_id;

			char pipe_to_send[16];
			sprintf(pipe_to_send,"in_data_%d", port_id);

			write_uint32_n (pipe_to_send, send_buffer, packet_length);

			// increment by number of ports.
			seq_id += NUMBER_OF_PORTS;
		}
	}
}

void input_port_1_sender ()
{
	input_port_core(1);
}
DEFINE_THREAD(input_port_1_sender);

void input_port_2_sender ()
{
	input_port_core(2);
}
DEFINE_THREAD(input_port_2_sender);

void input_port_3_sender ()
{
	input_port_core(3);
}
DEFINE_THREAD(input_port_3_sender);

void input_port_4_sender ()
{
	input_port_core(4);
}
DEFINE_THREAD(input_port_4_sender);

void output_port_core(int port_id)
{
	int PCOUNT = 0;
	int err = 0;
			
	char pipe_to_recv[16];
	sprintf(pipe_to_recv,"out_data_%d", port_id);

	while(1)
	{
		uint32_t packet[MAX_PACKET_LENGTH_IN_WORDS];
		

		// read the header.
		packet[0] = read_uint32(pipe_to_recv);
		int packet_length = (packet[0] >> 8) & 0xff;

		//
		// read the rest of the packet if needed.
		//
		if(packet_length > 1)
		{
			read_uint32_n (pipe_to_recv, &(packet[1]), packet_length-1);
		}
		
		PCOUNT++;

		int dest = (packet[0] >> 24);

		// input port is coded into the sequence id.
		int input_port = (packet[0] % NUMBER_OF_PORTS) + 1;

		//
		// check the destination?
		//
		if(dest != port_id)
		{
			fprintf(stderr,"Error: at port %d, packet number %d from input port %d,"
					" destination mismatch!\n", 	port_id, PCOUNT, input_port);
			err = 1;
		}
		else
		{
			fprintf(stderr,"\nRx[%d] at output port %d from input port %d\n", 
					PCOUNT, port_id, input_port);
		}


		// check integrity of the packet.
		int I; 
		for(I=1; I < packet_length; I++)
		{
			if (packet[I] != I)
			{
				fprintf(stderr,"\nError: packet[%d]=%d, expected %d.\n",
					I, packet[I], I);
				err = 1;
			}
		}

		if(err)
		{
			__err_flag__ = 1;
			break;
		}
	}

}

void output_port_1_receiver ()
{
	output_port_core(1);
}
DEFINE_THREAD(output_port_1_receiver);

void output_port_2_receiver ()
{
	output_port_core(2);
}
DEFINE_THREAD(output_port_2_receiver);

void output_port_3_receiver ()
{
	output_port_core(3);
}
DEFINE_THREAD(output_port_3_receiver);

void output_port_4_receiver ()
{
	output_port_core(4);
}
DEFINE_THREAD(output_port_4_receiver);

int main(int argc, char* argv[])
{

	if(argc < 2)
	{
		fprintf(stderr,"Usage: %s [trace-file] \n trace-file=null for no trace, stdout for stdout\n", 
				argv[0]);
		return(1);
	}

	FILE* fp = NULL;
	if(strcmp(argv[1],"stdout") == 0)
	{
		fp = stdout;
	}
	else if(strcmp(argv[1], "null") != 0)
	{
		fp = fopen(argv[1],"w");
		if(fp == NULL)
		{
			fprintf(stderr,"Error: could not open trace file %s\n", argv[1]);
			return(1);
		}
	}

#ifndef COMPILE_TEST_ONLY
#ifdef AA2C
	init_pipe_handler();
	start_daemons (fp,0);
#endif
#endif

	// test configuration setup.
	//  both input ports active, send
	//  randomly to output ports.
	int I;
	for(I = 0; I < NUMBER_OF_PORTS; I++)
	{
		tb_config.active_flag[I] = 1;
		tb_config.random_dest_flag[I] = 1;
		tb_config.destination_port[I] = -1;
	}
	
	// 
	// start the receivers
	// 
	PTHREAD_DECL(output_port_1_receiver);
	PTHREAD_CREATE(output_port_1_receiver);

	PTHREAD_DECL(output_port_2_receiver);
	PTHREAD_CREATE(output_port_2_receiver);

	PTHREAD_DECL(output_port_3_receiver);
	PTHREAD_CREATE(output_port_3_receiver);

	PTHREAD_DECL(output_port_4_receiver);
	PTHREAD_CREATE(output_port_4_receiver);

	// start the senders.
	PTHREAD_DECL(input_port_1_sender);
	PTHREAD_CREATE(input_port_1_sender);

	PTHREAD_DECL(input_port_2_sender);
	PTHREAD_CREATE(input_port_2_sender);
	
	PTHREAD_DECL(input_port_3_sender);
	PTHREAD_CREATE(input_port_3_sender);

	PTHREAD_DECL(input_port_4_sender);
	PTHREAD_CREATE(input_port_4_sender);

	// wait on the output threads
	PTHREAD_JOIN(output_port_1_receiver);
	PTHREAD_JOIN(output_port_2_receiver);
	PTHREAD_JOIN(output_port_3_receiver);
	PTHREAD_JOIN(output_port_4_receiver);

	if(__err_flag__)
	{
		fprintf(stderr,"\nFAILURE.. there were errors\n");
	}
	return(0);
}
