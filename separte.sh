rm -rf debug_files
mkdir debug_files
less $1 | grep outputPort_1_Daemon > ./debug_files/OP1D$1
less $1 | grep outputPort_2_Daemon > ./debug_files/OP2D$1
less $1 | grep outputPort_3_Daemon > ./debug_files/OP3D$1
less $1 | grep outputPort_4_Daemon > ./debug_files/OP4D$1
less $1 | grep inputPort_1_Daemon >  ./debug_files/IP1D$1
less $1 | grep inputPort_2_Daemon >  ./debug_files/IP2D$1
less $1 | grep inputPort_3_Daemon >  ./debug_files/IP3D$1
less $1 | grep inputPort_4_Daemon >  ./debug_files/IP4D$1
