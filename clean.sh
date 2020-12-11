#!/bin/bash
rm -rf *.o* *.cf *.*vhdl vhdlCStubs.* ahir_system_test_bench  *.ghw obj_vhdl obj_aa2c
cd ./hw
./remove.sh
