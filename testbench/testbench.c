#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
//
// AHIR release utilities
//
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>

// These will wait.
#ifndef AA2C
#include "vhdlCStubs.h"
#else
#include "aa_c_model.h"
#endif

// includes the header.
#define PACKET_LENGTH_IN_WORDS 64

typedef struct _TbConfig
{

	// if 1, input port 1 will be fed by data
	//   else input port 1 will be unused.
	int input_port_1_active;

	// if random dest is set, then
	// input port 1 can send data to either
	// output port 1 or output port 2.
	int input_port_1_random_dest_flag;

	// if random_dest_flag is 0, then
	// input port 1 writes only to
	// this destination port (provided
	// it is either 1 or 2).
	int input_port_1_destination_port;

	int input_port_2_active;
	// see comments above.
	int input_port_2_random_dest_flag;
	int input_port_2_destination_port;

	int input_port_3_active;
	// see comments above.
	int input_port_3_random_dest_flag;
	int input_port_3_destination_port;

	int input_port_4_active;
	// see comments above.
	int input_port_4_random_dest_flag;
	int input_port_4_destination_port;

} TbConfig;
TbConfig tb_config;

void input_port_core(int port_id)
{
	uint32_t send_buffer[PACKET_LENGTH_IN_WORDS];

	uint8_t seq_id;
	if (port_id == 1)
		seq_id = 0;
	else if (port_id == 2)
		seq_id = 1;
	else if (port_id == 3)
		seq_id = 2;
	else if(port_id==4)
		seq_id = 3;
	while (1)
	{
		int dest_port = -1;
		uint32_t length = (rand() % (64 - 1 + 1)) + 1;
		//fprintf(stderr,"Packet of Length %d Selected for Input Port %d\n",length,port_id);
		int i;
		for (i = 0; i < length; i++)
		{
			send_buffer[i] = i;
		}

		if (port_id == 1)
		{
			dest_port = (tb_config.input_port_1_random_dest_flag ? ((rand() % (4 - 1 + 1)) + 1) : tb_config.input_port_1_destination_port);
		}
		else if (port_id == 2)
		{
			dest_port = (tb_config.input_port_2_random_dest_flag ? ((rand() % (4 - 1 + 1)) + 1) : tb_config.input_port_2_destination_port);
		}
		else if (port_id == 3)
		{
			dest_port = (tb_config.input_port_3_random_dest_flag ? ((rand() % (4 - 1 + 1)) + 1) : tb_config.input_port_3_destination_port);
		}
		else if (port_id == 4)
		{
			dest_port = (tb_config.input_port_4_random_dest_flag ? ((rand() % (4 - 1 + 1)) + 1) : tb_config.input_port_4_destination_port);
		}

		if ((dest_port == 1) || (dest_port == 2) || (dest_port == 3) || (dest_port == 4))
		{
			send_buffer[0] = (dest_port << 24) | (length << 8) | seq_id;
			if (port_id == 1)
			{
				//fprintf(stderr, "\nSending Packet(%d) from Port %d to Port %d \n", length, port_id,dest_port);
				write_uint32_n("in_data_1", send_buffer, length);
			}
			else if (port_id == 2)
			{
				//fprintf(stderr, "\nSending Packet(%d) from Port %d to Port %d \n", length, port_id,dest_port);
				write_uint32_n("in_data_2", send_buffer, length);
			}
			else if (port_id == 3)
			{
				//fprintf(stderr, "\nSending Packet(%d) from Port %d to Port %d \n", length, port_id,dest_port);
				write_uint32_n("in_data_3", send_buffer, length);
			}
			else if(port_id==4)
			{
				//fprintf(stderr, "\nSending Packet(%d) from Port %d to Port %d \n", length, port_id,dest_port);
				write_uint32_n("in_data_4", send_buffer, length);
			}
			seq_id += 4;
		}
	}
}

void input_port_1_sender()
{
	input_port_core(1);
}
DEFINE_THREAD(input_port_1_sender);

void input_port_2_sender()
{
	input_port_core(2);
}
DEFINE_THREAD(input_port_2_sender);
void input_port_3_sender()
{
	input_port_core(3);
}
DEFINE_THREAD(input_port_3_sender);
void input_port_4_sender()
{
	input_port_core(4);
}
DEFINE_THREAD(input_port_4_sender);

void output_port_core(int port_id)
{
	uint32_t packet[PACKET_LENGTH_IN_WORDS], header[1];
	int PACKET_COUNT=0;
	while (1)
	{
		if (port_id == 1)
			read_uint32_n("out_data_1", header, 1);
		else if (port_id == 2)
			read_uint32_n("out_data_2", header, 1);
		else if (port_id == 3)
			read_uint32_n("out_data_3", header, 1);
		else if(port_id==4)
			read_uint32_n("out_data_4", header, 1);
		int length = header[0] >> 8 & 65535;
		uint8_t seq_id = header[0] & 255;
		int destination = header[0] >> 24 & 255;
		int input_port;
		if (seq_id % 4 == 0)
			input_port = 1;
		else if (seq_id % 2 == 0)
			input_port = 3;
		else if ((seq_id - 1) % 4 == 0)
			input_port = 2;
		else
			input_port = 4;

		if (port_id == 1)
			read_uint32_n("out_data_1", packet, length - 1);
		else if (port_id == 2)
			read_uint32_n("out_data_2", packet, length - 1);
		else if (port_id == 3)
			read_uint32_n("out_data_3", packet, length - 1);
		else if (port_id==4)
			read_uint32_n("out_data_4", packet, length - 1);
		
		PACKET_COUNT++;
		fprintf(stdout, "\nRx[%d] at output port %d from input port %d of length %d\n",PACKET_COUNT,port_id, input_port, length);

		// check integrity of the packet.
		//
		// check the destination?
		if (port_id != destination)
			fprintf(stderr, "\nData Received at the Wrong Port\n");
		;

		//
		int I;
		int err = 0;

		for (I = 0; I < length-1; I++)
		{

			if (packet[I] != (I+1))
			{
				fprintf(stderr, "\nError: packet[%d]=%d, expected %d.\n", I, packet[I], I);
				err = 1;
			}
		}

		if (err)
			break;
	}
}

void output_port_1_receiver()
{
	output_port_core(1);
}
DEFINE_THREAD(output_port_1_receiver);

void output_port_2_receiver()
{
	output_port_core(2);
}
DEFINE_THREAD(output_port_2_receiver);

void output_port_3_receiver()
{
	output_port_core(3);
}
DEFINE_THREAD(output_port_3_receiver);

void output_port_4_receiver()
{
	output_port_core(4);
}
DEFINE_THREAD(output_port_4_receiver);

int main(int argc, char *argv[])
{

	if (argc < 3)
	{
		fprintf(stderr, "Usage: %s [trace-file] [test_type] \n trace-file=null for no trace, stdout for stdout\n"
						"test_type = 1to1/1to2/1to3/1to4/1toall/2to1/2to2/2to3/2to4/2toall/3to1/3to2/3to3/3to4/3toall/4to1/4to2/4to3/4to4/4toall/allto1/allto2/allto3/allto4/alltoall\n",
				argv[0]);
		return (1);
	}

	FILE *fp = NULL;
	if (strcmp(argv[1], "stdout") == 0)
	{
		fp = stdout;
	}
	else if (strcmp(argv[1], "null") != 0)
	{
		fp = fopen(argv[1], "w");
		if (fp == NULL)
		{
			fprintf(stderr, "Error: could not open trace file %s\n", argv[1]);
			return (1);
		}
	}

	int __1to1 = (strcmp(argv[2], "1to1") == 0);
	int __1to2 = (strcmp(argv[2], "1to2") == 0);
	int __1to3 = (strcmp(argv[2], "1to3") == 0);
	int __1to4 = (strcmp(argv[2], "1to4") == 0);
	int __1toall = (strcmp(argv[2], "1toall") == 0);

	int __2to1 = (strcmp(argv[2], "2to1") == 0);
	int __2to2 = (strcmp(argv[2], "2to2") == 0);
	int __2to3 = (strcmp(argv[2], "2to3") == 0);
	int __2to4 = (strcmp(argv[2], "2to4") == 0);
	int __2toall = (strcmp(argv[2], "2toall") == 0);

	int __3to1 = (strcmp(argv[2], "3to1") == 0);
	int __3to2 = (strcmp(argv[2], "3to2") == 0);
	int __3to3 = (strcmp(argv[2], "3to3") == 0);
	int __3to4 = (strcmp(argv[2], "3to4") == 0);
	int __3toall = (strcmp(argv[2], "3toall") == 0);

	int __4to1 = (strcmp(argv[2], "4to1") == 0);
	int __4to2 = (strcmp(argv[2], "4to2") == 0);
	int __4to3 = (strcmp(argv[2], "4to3") == 0);
	int __4to4 = (strcmp(argv[2], "4to4") == 0);
	int __4toall = (strcmp(argv[2], "4toall") == 0);

	int __allto1 = (strcmp(argv[2], "allto1") == 0);
	int __allto2 = (strcmp(argv[2], "allto2") == 0);
	int __allto3 = (strcmp(argv[2], "allto3") == 0);
	int __allto4 = (strcmp(argv[2], "allto4") == 0);
	int __alltoall = (strcmp(argv[2], "alltoall") == 0);

#ifdef AA2C
	init_pipe_handler();
	start_daemons(fp, 0);
#endif
	// test configuration setup.
	//  both input ports active, send
	//  randomly to output ports.
	tb_config.input_port_1_active = (__1to1 || __1to2 || __1to3 || __1to4 || __1toall || __allto1 || __allto2 || __allto3 || __allto4 || __alltoall);
	tb_config.input_port_1_random_dest_flag = (__1toall || __alltoall);
	tb_config.input_port_1_destination_port = (__1to1 ? 1 : (__1to2 ? 2 : (__1to3 ? 3 : (__1to4 ? 4 : (__allto1 ? 1 : (__allto2 ? 2 : (__allto3 ? 3 : (__allto4 ? 4 : -1))))))));

	tb_config.input_port_2_active = (__2to1 || __2to2 || __2to3 || __2to4 || __2toall || __allto1 || __allto2 || __allto3 || __allto4 || __alltoall);
	tb_config.input_port_2_random_dest_flag = (__2toall || __alltoall);
	tb_config.input_port_2_destination_port = (__2to1 ? 1 : (__2to2 ? 2 : (__2to3 ? 3 : (__2to4 ? 4 : (__allto1 ? 1 : (__allto2 ? 2 : (__allto3 ? 3 : (__allto4 ? 4 : -1))))))));

	tb_config.input_port_3_active = (__3to1 || __3to2 || __3to3 || __3to4 || __3toall || __allto1 || __allto2 || __allto3 || __allto4 || __alltoall);
	tb_config.input_port_3_random_dest_flag = (__3toall || __alltoall);
	tb_config.input_port_3_destination_port = (__3to1 ? 1 : (__3to2 ? 2 : (__3to3 ? 3 : (__3to4 ? 4 : (__allto1 ? 1 : (__allto2 ? 2 : (__allto3 ? 3 : (__allto4 ? 4 : -1))))))));

	tb_config.input_port_4_active = (__4to1 || __4to2 || __4to3 || __4to4 || __4toall || __allto1 || __allto2 || __allto3 || __allto4 || __alltoall);
	tb_config.input_port_4_random_dest_flag = (__4toall || __alltoall);
	tb_config.input_port_4_destination_port = (__4to1 ? 1 : (__4to2 ? 2 : (__4to3 ? 3 : (__4to4 ? 4 : (__allto1 ? 1 : (__allto2 ? 2 : (__allto3 ? 3 : (__allto4 ? 4 : -1))))))));

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

	// wait on the two output threads
	PTHREAD_JOIN(output_port_1_receiver);
	PTHREAD_JOIN(output_port_2_receiver);
	PTHREAD_JOIN(output_port_3_receiver);
	PTHREAD_JOIN(output_port_4_receiver);

	return (0);
}
