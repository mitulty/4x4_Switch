#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
void _set_trace_file(FILE* fp);
void __init_aa_globals__(); 
void global_storage_initializer_();
void _global_storage_initializer__();
void inputPort_1_Daemon();
void _inputPort_1_Daemon_();
void inputPort_2_Daemon();
void _inputPort_2_Daemon_();
void inputPort_3_Daemon();
void _inputPort_3_Daemon_();
void inputPort_4_Daemon();
void _inputPort_4_Daemon_();
void outputPort_1_Daemon();
void _outputPort_1_Daemon_();
void outputPort_2_Daemon();
void _outputPort_2_Daemon_();
void outputPort_3_Daemon();
void _outputPort_3_Daemon_();
void outputPort_4_Daemon();
void _outputPort_4_Daemon_();
void _prioritySelect_(bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector*, bit_vector* , bit_vector* );
void start_daemons(FILE* fp, int trace_on);
void stop_daemons();
