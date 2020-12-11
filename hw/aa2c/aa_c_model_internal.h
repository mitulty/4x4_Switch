#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
// object initialization 

#define _global_storage_initializer__inner_inarg_prep_macro__ 
#define _global_storage_initializer__inner_outarg_prep_macro__ ;

#define _global_storage_initializer__outer_arg_decl_macro__ ;

#define _global_storage_initializer__outer_op_xfer_macro__ ;

#define _inputPort_1_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_1_Daemon_branch_block_stmt_71_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_1_Daemon_merge_stmt_73_c_preamble_macro_ uint8_t merge_stmt_73_entry_flag;\
merge_stmt_73_entry_flag = do_while_entry_flag;\
goto merge_stmt_73_run;\
merge_stmt_73_run: ;\

#define _inputPort_1_Daemon_phi_stmt_74_c_macro_ __declare_static_bit_vector(konst_77,16);\
bit_vector_clear(&konst_77);\
__declare_static_bit_vector(type_cast_78,16);\
bit_vector_clear(&type_cast_78);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_77,16);\
bit_vector_clear(&konst_77);\
__declare_static_bit_vector(type_cast_78,16);\
bit_vector_clear(&type_cast_78);\
bit_vector_clear(&konst_77);\
bit_vector_bitcast_to_bit_vector( &(type_cast_78), &(konst_77));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_78));\
}\
;

#define _inputPort_1_Daemon_phi_stmt_79_c_macro_ __declare_static_bit_vector(RPIPE_in_data_1_81,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_1",&(RPIPE_in_data_1_81));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_1_81));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_1_81,32);\
read_bit_vector_from_pipe("in_data_1",&(RPIPE_in_data_1_81));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_1_81));\
}\
;

#define _inputPort_1_Daemon_phi_stmt_82_c_macro_ __declare_static_bit_vector(konst_84,8);\
bit_vector_clear(&konst_84);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_84,8);\
bit_vector_clear(&konst_84);\
bit_vector_clear(&konst_84);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_84));\
}\
;
;

#define _inputPort_1_Daemon_merge_stmt_73_c_postamble_macro_ merge_stmt_73_entry_flag = 0;

#define _inputPort_1_Daemon_assign_stmt_91_c_macro_ __declare_static_bit_vector(konst_89,16);\
bit_vector_clear(&konst_89);\
__declare_static_bit_vector(EQ_u16_u1_90,1);\
bit_vector_clear(&konst_89);\
bit_vector_equal(0, &(count_down), &(konst_89), &(EQ_u16_u1_90));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_90));\
;

#define _inputPort_1_Daemon_stmt_93_c_macro_ uint32_t _inputPort_1_Daemon_stmt_93_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t%s\n",_inputPort_1_Daemon_stmt_93_c_macro___print_counter,"received_input_word");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_93_c_macro___print_counter,"input_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(input_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_1_Daemon_assign_stmt_97_c_macro_ __declare_static_bit_vector(slice_96,8);\
bit_vector_slice(&(input_word), &(slice_96), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_96));\
;

#define _inputPort_1_Daemon_assign_stmt_101_c_macro_ __declare_static_bit_vector(slice_100,16);\
bit_vector_slice(&(input_word), &(slice_100), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_100));\
;

#define _inputPort_1_Daemon_assign_stmt_105_c_macro_ __declare_static_bit_vector(slice_104,8);\
bit_vector_slice(&(input_word), &(slice_104), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_104));\
;

#define _inputPort_1_Daemon_assign_stmt_115_c_macro_ __declare_static_bit_vector(konst_109,16);\
bit_vector_clear(&konst_109);\
konst_109.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_110,16);\
__declare_static_bit_vector(konst_112,16);\
bit_vector_clear(&konst_112);\
konst_112.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_113,16);\
__declare_static_bit_vector(MUX_114,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_109);\
konst_109.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_109), &(SUB_u16_u16_110));\
bit_vector_cast_to_bit_vector(0, &(MUX_114), &(SUB_u16_u16_110));\
}else {bit_vector_clear(&konst_112);\
konst_112.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_112), &(SUB_u16_u16_113));\
bit_vector_cast_to_bit_vector(0, &(MUX_114), &(SUB_u16_u16_113));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_114));\
;

#define _inputPort_1_Daemon_assign_stmt_121_c_macro_ __declare_static_bit_vector(MUX_120,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_120), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_120), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_120));\
;

#define _inputPort_1_Daemon_assign_stmt_126_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_125,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_125));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_125));\
;

#define _inputPort_1_Daemon_assign_stmt_131_c_macro_ __declare_static_bit_vector(konst_129,8);\
bit_vector_clear(&konst_129);\
konst_129.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_130,1);\
bit_vector_clear(&konst_129);\
konst_129.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_129), &(EQ_u8_u1_130));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_130));\
;

#define _inputPort_1_Daemon_assign_stmt_135_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_1_1",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_140_c_macro_ __declare_static_bit_vector(konst_138,8);\
bit_vector_clear(&konst_138);\
konst_138.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_139,1);\
bit_vector_clear(&konst_138);\
konst_138.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_138), &(EQ_u8_u1_139));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_139));\
;

#define _inputPort_1_Daemon_assign_stmt_144_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_1_2",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_149_c_macro_ __declare_static_bit_vector(konst_147,8);\
bit_vector_clear(&konst_147);\
konst_147.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_148,1);\
bit_vector_clear(&konst_147);\
konst_147.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_147), &(EQ_u8_u1_148));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_148));\
;

#define _inputPort_1_Daemon_assign_stmt_153_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_1_3",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_assign_stmt_158_c_macro_ __declare_static_bit_vector(konst_156,8);\
bit_vector_clear(&konst_156);\
konst_156.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_157,1);\
bit_vector_clear(&konst_156);\
konst_156.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_156), &(EQ_u8_u1_157));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_157));\
;

#define _inputPort_1_Daemon_assign_stmt_162_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_1_4",&(data_to_outport));\
}
;

#define _inputPort_1_Daemon_stmt_172_c_macro_ uint32_t _inputPort_1_Daemon_stmt_172_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t%s\n",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"write_status");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"send_to_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"send_to_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"send_to_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"send_to_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"data_to_outport");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_outport)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"next_last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_1_Daemon>\t\t%s\t\t",_inputPort_1_Daemon_stmt_172_c_macro___print_counter,"count_down");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(count_down)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _inputPort_1_Daemon_branch_block_stmt_71_c_export_apply_macro_ ;

#define _inputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_2_Daemon_branch_block_stmt_178_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_2_Daemon_merge_stmt_180_c_preamble_macro_ uint8_t merge_stmt_180_entry_flag;\
merge_stmt_180_entry_flag = do_while_entry_flag;\
goto merge_stmt_180_run;\
merge_stmt_180_run: ;\

#define _inputPort_2_Daemon_phi_stmt_181_c_macro_ __declare_static_bit_vector(konst_183,16);\
bit_vector_clear(&konst_183);\
__declare_static_bit_vector(type_cast_184,16);\
bit_vector_clear(&type_cast_184);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_183,16);\
bit_vector_clear(&konst_183);\
__declare_static_bit_vector(type_cast_184,16);\
bit_vector_clear(&type_cast_184);\
bit_vector_clear(&konst_183);\
bit_vector_bitcast_to_bit_vector( &(type_cast_184), &(konst_183));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_184));\
}\
;

#define _inputPort_2_Daemon_phi_stmt_186_c_macro_ __declare_static_bit_vector(RPIPE_in_data_2_188,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_2",&(RPIPE_in_data_2_188));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_2_188));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_2_188,32);\
read_bit_vector_from_pipe("in_data_2",&(RPIPE_in_data_2_188));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_2_188));\
}\
;

#define _inputPort_2_Daemon_phi_stmt_189_c_macro_ __declare_static_bit_vector(konst_192,8);\
bit_vector_clear(&konst_192);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_192,8);\
bit_vector_clear(&konst_192);\
bit_vector_clear(&konst_192);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_192));\
}\
;
;

#define _inputPort_2_Daemon_merge_stmt_180_c_postamble_macro_ merge_stmt_180_entry_flag = 0;

#define _inputPort_2_Daemon_assign_stmt_198_c_macro_ __declare_static_bit_vector(konst_196,16);\
bit_vector_clear(&konst_196);\
__declare_static_bit_vector(EQ_u16_u1_197,1);\
bit_vector_clear(&konst_196);\
bit_vector_equal(0, &(count_down), &(konst_196), &(EQ_u16_u1_197));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_197));\
;

#define _inputPort_2_Daemon_stmt_200_c_macro_ uint32_t _inputPort_2_Daemon_stmt_200_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t%s\n",_inputPort_2_Daemon_stmt_200_c_macro___print_counter,"received_input_word");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_200_c_macro___print_counter,"input_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(input_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_2_Daemon_assign_stmt_204_c_macro_ __declare_static_bit_vector(slice_203,8);\
bit_vector_slice(&(input_word), &(slice_203), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_203));\
;

#define _inputPort_2_Daemon_assign_stmt_208_c_macro_ __declare_static_bit_vector(slice_207,16);\
bit_vector_slice(&(input_word), &(slice_207), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_207));\
;

#define _inputPort_2_Daemon_assign_stmt_212_c_macro_ __declare_static_bit_vector(slice_211,8);\
bit_vector_slice(&(input_word), &(slice_211), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_211));\
;

#define _inputPort_2_Daemon_assign_stmt_222_c_macro_ __declare_static_bit_vector(konst_216,16);\
bit_vector_clear(&konst_216);\
konst_216.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_217,16);\
__declare_static_bit_vector(konst_219,16);\
bit_vector_clear(&konst_219);\
konst_219.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_220,16);\
__declare_static_bit_vector(MUX_221,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_216);\
konst_216.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_216), &(SUB_u16_u16_217));\
bit_vector_cast_to_bit_vector(0, &(MUX_221), &(SUB_u16_u16_217));\
}else {bit_vector_clear(&konst_219);\
konst_219.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_219), &(SUB_u16_u16_220));\
bit_vector_cast_to_bit_vector(0, &(MUX_221), &(SUB_u16_u16_220));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_221));\
;

#define _inputPort_2_Daemon_assign_stmt_228_c_macro_ __declare_static_bit_vector(MUX_227,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_227), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_227), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_227));\
;

#define _inputPort_2_Daemon_assign_stmt_233_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_232,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_232));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_232));\
;

#define _inputPort_2_Daemon_assign_stmt_238_c_macro_ __declare_static_bit_vector(konst_236,8);\
bit_vector_clear(&konst_236);\
konst_236.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_237,1);\
bit_vector_clear(&konst_236);\
konst_236.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_236), &(EQ_u8_u1_237));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_237));\
;

#define _inputPort_2_Daemon_assign_stmt_242_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_2_1",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_247_c_macro_ __declare_static_bit_vector(konst_245,8);\
bit_vector_clear(&konst_245);\
konst_245.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_246,1);\
bit_vector_clear(&konst_245);\
konst_245.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_245), &(EQ_u8_u1_246));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_246));\
;

#define _inputPort_2_Daemon_assign_stmt_251_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_2_2",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_256_c_macro_ __declare_static_bit_vector(konst_254,8);\
bit_vector_clear(&konst_254);\
konst_254.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_255,1);\
bit_vector_clear(&konst_254);\
konst_254.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_254), &(EQ_u8_u1_255));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_255));\
;

#define _inputPort_2_Daemon_assign_stmt_260_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_2_3",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_assign_stmt_265_c_macro_ __declare_static_bit_vector(konst_263,8);\
bit_vector_clear(&konst_263);\
konst_263.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_264,1);\
bit_vector_clear(&konst_263);\
konst_263.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_263), &(EQ_u8_u1_264));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_264));\
;

#define _inputPort_2_Daemon_assign_stmt_269_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_2_4",&(data_to_outport));\
}
;

#define _inputPort_2_Daemon_stmt_279_c_macro_ uint32_t _inputPort_2_Daemon_stmt_279_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t%s\n",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"write_status");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"send_to_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"send_to_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"send_to_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"send_to_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"data_to_outport");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_outport)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"next_last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_2_Daemon>\t\t%s\t\t",_inputPort_2_Daemon_stmt_279_c_macro___print_counter,"count_down");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(count_down)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _inputPort_2_Daemon_branch_block_stmt_178_c_export_apply_macro_ ;

#define _inputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_3_Daemon_branch_block_stmt_285_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_3_Daemon_merge_stmt_287_c_preamble_macro_ uint8_t merge_stmt_287_entry_flag;\
merge_stmt_287_entry_flag = do_while_entry_flag;\
goto merge_stmt_287_run;\
merge_stmt_287_run: ;\

#define _inputPort_3_Daemon_phi_stmt_288_c_macro_ __declare_static_bit_vector(konst_290,16);\
bit_vector_clear(&konst_290);\
__declare_static_bit_vector(type_cast_291,16);\
bit_vector_clear(&type_cast_291);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_290,16);\
bit_vector_clear(&konst_290);\
__declare_static_bit_vector(type_cast_291,16);\
bit_vector_clear(&type_cast_291);\
bit_vector_clear(&konst_290);\
bit_vector_bitcast_to_bit_vector( &(type_cast_291), &(konst_290));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_291));\
}\
;

#define _inputPort_3_Daemon_phi_stmt_293_c_macro_ __declare_static_bit_vector(RPIPE_in_data_3_295,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_3",&(RPIPE_in_data_3_295));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_3_295));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_3_295,32);\
read_bit_vector_from_pipe("in_data_3",&(RPIPE_in_data_3_295));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_3_295));\
}\
;

#define _inputPort_3_Daemon_phi_stmt_296_c_macro_ __declare_static_bit_vector(konst_298,8);\
bit_vector_clear(&konst_298);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_298,8);\
bit_vector_clear(&konst_298);\
bit_vector_clear(&konst_298);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_298));\
}\
;
;

#define _inputPort_3_Daemon_merge_stmt_287_c_postamble_macro_ merge_stmt_287_entry_flag = 0;

#define _inputPort_3_Daemon_assign_stmt_305_c_macro_ __declare_static_bit_vector(konst_303,16);\
bit_vector_clear(&konst_303);\
__declare_static_bit_vector(EQ_u16_u1_304,1);\
bit_vector_clear(&konst_303);\
bit_vector_equal(0, &(count_down), &(konst_303), &(EQ_u16_u1_304));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_304));\
;

#define _inputPort_3_Daemon_stmt_307_c_macro_ uint32_t _inputPort_3_Daemon_stmt_307_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t%s\n",_inputPort_3_Daemon_stmt_307_c_macro___print_counter,"received_input_word");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_307_c_macro___print_counter,"input_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(input_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_3_Daemon_assign_stmt_311_c_macro_ __declare_static_bit_vector(slice_310,8);\
bit_vector_slice(&(input_word), &(slice_310), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_310));\
;

#define _inputPort_3_Daemon_assign_stmt_315_c_macro_ __declare_static_bit_vector(slice_314,16);\
bit_vector_slice(&(input_word), &(slice_314), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_314));\
;

#define _inputPort_3_Daemon_assign_stmt_319_c_macro_ __declare_static_bit_vector(slice_318,8);\
bit_vector_slice(&(input_word), &(slice_318), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_318));\
;

#define _inputPort_3_Daemon_assign_stmt_329_c_macro_ __declare_static_bit_vector(konst_323,16);\
bit_vector_clear(&konst_323);\
konst_323.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_324,16);\
__declare_static_bit_vector(konst_326,16);\
bit_vector_clear(&konst_326);\
konst_326.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_327,16);\
__declare_static_bit_vector(MUX_328,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_323);\
konst_323.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_323), &(SUB_u16_u16_324));\
bit_vector_cast_to_bit_vector(0, &(MUX_328), &(SUB_u16_u16_324));\
}else {bit_vector_clear(&konst_326);\
konst_326.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_326), &(SUB_u16_u16_327));\
bit_vector_cast_to_bit_vector(0, &(MUX_328), &(SUB_u16_u16_327));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_328));\
;

#define _inputPort_3_Daemon_assign_stmt_335_c_macro_ __declare_static_bit_vector(MUX_334,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_334), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_334), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_334));\
;

#define _inputPort_3_Daemon_assign_stmt_340_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_339,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_339));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_339));\
;

#define _inputPort_3_Daemon_assign_stmt_345_c_macro_ __declare_static_bit_vector(konst_343,8);\
bit_vector_clear(&konst_343);\
konst_343.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_344,1);\
bit_vector_clear(&konst_343);\
konst_343.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_343), &(EQ_u8_u1_344));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_344));\
;

#define _inputPort_3_Daemon_assign_stmt_349_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_3_1",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_354_c_macro_ __declare_static_bit_vector(konst_352,8);\
bit_vector_clear(&konst_352);\
konst_352.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_353,1);\
bit_vector_clear(&konst_352);\
konst_352.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_352), &(EQ_u8_u1_353));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_353));\
;

#define _inputPort_3_Daemon_assign_stmt_358_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_3_2",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_363_c_macro_ __declare_static_bit_vector(konst_361,8);\
bit_vector_clear(&konst_361);\
konst_361.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_362,1);\
bit_vector_clear(&konst_361);\
konst_361.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_361), &(EQ_u8_u1_362));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_362));\
;

#define _inputPort_3_Daemon_assign_stmt_367_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_3_3",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_assign_stmt_372_c_macro_ __declare_static_bit_vector(konst_370,8);\
bit_vector_clear(&konst_370);\
konst_370.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_371,1);\
bit_vector_clear(&konst_370);\
konst_370.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_370), &(EQ_u8_u1_371));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_371));\
;

#define _inputPort_3_Daemon_assign_stmt_376_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_3_4",&(data_to_outport));\
}
;

#define _inputPort_3_Daemon_stmt_386_c_macro_ uint32_t _inputPort_3_Daemon_stmt_386_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t%s\n",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"write_status");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"send_to_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"send_to_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"send_to_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"send_to_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"data_to_outport");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_outport)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"next_last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_3_Daemon>\t\t%s\t\t",_inputPort_3_Daemon_stmt_386_c_macro___print_counter,"count_down");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(count_down)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _inputPort_3_Daemon_branch_block_stmt_285_c_export_apply_macro_ ;

#define _inputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _inputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _inputPort_4_Daemon_branch_block_stmt_392_c_export_decl_macro_ __declare_static_bit_vector(count_down,16);\
__declare_static_bit_vector(input_word,32);\
__declare_static_bit_vector(last_dest_id,8);\
__declare_static_bit_vector(new_packet,1);\
__declare_static_bit_vector(dest_id,8);\
__declare_static_bit_vector(pkt_length,16);\
__declare_static_bit_vector(seq_id,8);\
__declare_static_bit_vector(next_count_down,16);\
__declare_static_bit_vector(next_last_dest_id,8);\
__declare_static_bit_vector(data_to_outport,33);\
__declare_static_bit_vector(send_to_1,1);\
__declare_static_bit_vector(send_to_2,1);\
__declare_static_bit_vector(send_to_3,1);\
__declare_static_bit_vector(send_to_4,1);\


#define _inputPort_4_Daemon_merge_stmt_394_c_preamble_macro_ uint8_t merge_stmt_394_entry_flag;\
merge_stmt_394_entry_flag = do_while_entry_flag;\
goto merge_stmt_394_run;\
merge_stmt_394_run: ;\

#define _inputPort_4_Daemon_phi_stmt_395_c_macro_ __declare_static_bit_vector(konst_397,16);\
bit_vector_clear(&konst_397);\
__declare_static_bit_vector(type_cast_398,16);\
bit_vector_clear(&type_cast_398);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(count_down), &(next_count_down));\
}\
else {\
__declare_static_bit_vector(konst_397,16);\
bit_vector_clear(&konst_397);\
__declare_static_bit_vector(type_cast_398,16);\
bit_vector_clear(&type_cast_398);\
bit_vector_clear(&konst_397);\
bit_vector_bitcast_to_bit_vector( &(type_cast_398), &(konst_397));\
bit_vector_cast_to_bit_vector(0, &(count_down), &(type_cast_398));\
}\
;

#define _inputPort_4_Daemon_phi_stmt_400_c_macro_ __declare_static_bit_vector(RPIPE_in_data_4_402,32);\
if(do_while_loopback_flag) {\
read_bit_vector_from_pipe("in_data_4",&(RPIPE_in_data_4_402));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_4_402));\
}\
else {\
__declare_static_bit_vector(RPIPE_in_data_4_402,32);\
read_bit_vector_from_pipe("in_data_4",&(RPIPE_in_data_4_402));\
bit_vector_cast_to_bit_vector(0, &(input_word), &(RPIPE_in_data_4_402));\
}\
;

#define _inputPort_4_Daemon_phi_stmt_403_c_macro_ __declare_static_bit_vector(konst_405,8);\
bit_vector_clear(&konst_405);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(next_last_dest_id));\
}\
else {\
__declare_static_bit_vector(konst_405,8);\
bit_vector_clear(&konst_405);\
bit_vector_clear(&konst_405);\
bit_vector_cast_to_bit_vector(0, &(last_dest_id), &(konst_405));\
}\
;
;

#define _inputPort_4_Daemon_merge_stmt_394_c_postamble_macro_ merge_stmt_394_entry_flag = 0;

#define _inputPort_4_Daemon_assign_stmt_412_c_macro_ __declare_static_bit_vector(konst_410,16);\
bit_vector_clear(&konst_410);\
__declare_static_bit_vector(EQ_u16_u1_411,1);\
bit_vector_clear(&konst_410);\
bit_vector_equal(0, &(count_down), &(konst_410), &(EQ_u16_u1_411));\
bit_vector_cast_to_bit_vector(0, &(new_packet), &(EQ_u16_u1_411));\
;

#define _inputPort_4_Daemon_stmt_414_c_macro_ uint32_t _inputPort_4_Daemon_stmt_414_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t%s\n",_inputPort_4_Daemon_stmt_414_c_macro___print_counter,"received_input_word");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_414_c_macro___print_counter,"input_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(input_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _inputPort_4_Daemon_assign_stmt_418_c_macro_ __declare_static_bit_vector(slice_417,8);\
bit_vector_slice(&(input_word), &(slice_417), 24);\
bit_vector_cast_to_bit_vector(0, &(dest_id), &(slice_417));\
;

#define _inputPort_4_Daemon_assign_stmt_422_c_macro_ __declare_static_bit_vector(slice_421,16);\
bit_vector_slice(&(input_word), &(slice_421), 8);\
bit_vector_cast_to_bit_vector(0, &(pkt_length), &(slice_421));\
;

#define _inputPort_4_Daemon_assign_stmt_426_c_macro_ __declare_static_bit_vector(slice_425,8);\
bit_vector_slice(&(input_word), &(slice_425), 0);\
bit_vector_cast_to_bit_vector(0, &(seq_id), &(slice_425));\
;

#define _inputPort_4_Daemon_assign_stmt_436_c_macro_ __declare_static_bit_vector(konst_430,16);\
bit_vector_clear(&konst_430);\
konst_430.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_431,16);\
__declare_static_bit_vector(konst_433,16);\
bit_vector_clear(&konst_433);\
konst_433.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_434,16);\
__declare_static_bit_vector(MUX_435,16);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_clear(&konst_430);\
konst_430.val.byte_array[0] = 1;\
bit_vector_minus( &(pkt_length), &(konst_430), &(SUB_u16_u16_431));\
bit_vector_cast_to_bit_vector(0, &(MUX_435), &(SUB_u16_u16_431));\
}else {bit_vector_clear(&konst_433);\
konst_433.val.byte_array[0] = 1;\
bit_vector_minus( &(count_down), &(konst_433), &(SUB_u16_u16_434));\
bit_vector_cast_to_bit_vector(0, &(MUX_435), &(SUB_u16_u16_434));\
}bit_vector_cast_to_bit_vector(0, &(next_count_down), &(MUX_435));\
;

#define _inputPort_4_Daemon_assign_stmt_442_c_macro_ __declare_static_bit_vector(MUX_441,8);\
if (has_undefined_bit(&new_packet)) {fprintf(stderr, "Error: variable new_packet has undefined value (%s) at test point.\n", to_string(&new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &new_packet)){bit_vector_cast_to_bit_vector(0, &(MUX_441), &(dest_id));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_441), &(last_dest_id));\
}bit_vector_cast_to_bit_vector(0, &(next_last_dest_id), &(MUX_441));\
;

#define _inputPort_4_Daemon_assign_stmt_447_c_macro_ __declare_static_bit_vector(CONCAT_u1_u33_446,33);\
bit_vector_concatenate( &(ONE_1), &(input_word), &(CONCAT_u1_u33_446));\
bit_vector_cast_to_bit_vector(0, &(data_to_outport), &(CONCAT_u1_u33_446));\
;

#define _inputPort_4_Daemon_assign_stmt_452_c_macro_ __declare_static_bit_vector(konst_450,8);\
bit_vector_clear(&konst_450);\
konst_450.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u8_u1_451,1);\
bit_vector_clear(&konst_450);\
konst_450.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_450), &(EQ_u8_u1_451));\
bit_vector_cast_to_bit_vector(0, &(send_to_1), &(EQ_u8_u1_451));\
;

#define _inputPort_4_Daemon_assign_stmt_456_c_macro_ if (has_undefined_bit(&send_to_1)) {fprintf(stderr, "Error: variable send_to_1 has undefined value (%s) at test point.\n", to_string(&send_to_1));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_1)) {\
write_bit_vector_to_pipe("noblock_obuf_4_1",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_461_c_macro_ __declare_static_bit_vector(konst_459,8);\
bit_vector_clear(&konst_459);\
konst_459.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u8_u1_460,1);\
bit_vector_clear(&konst_459);\
konst_459.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_459), &(EQ_u8_u1_460));\
bit_vector_cast_to_bit_vector(0, &(send_to_2), &(EQ_u8_u1_460));\
;

#define _inputPort_4_Daemon_assign_stmt_465_c_macro_ if (has_undefined_bit(&send_to_2)) {fprintf(stderr, "Error: variable send_to_2 has undefined value (%s) at test point.\n", to_string(&send_to_2));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_2)) {\
write_bit_vector_to_pipe("noblock_obuf_4_2",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_470_c_macro_ __declare_static_bit_vector(konst_468,8);\
bit_vector_clear(&konst_468);\
konst_468.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u8_u1_469,1);\
bit_vector_clear(&konst_468);\
konst_468.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_468), &(EQ_u8_u1_469));\
bit_vector_cast_to_bit_vector(0, &(send_to_3), &(EQ_u8_u1_469));\
;

#define _inputPort_4_Daemon_assign_stmt_474_c_macro_ if (has_undefined_bit(&send_to_3)) {fprintf(stderr, "Error: variable send_to_3 has undefined value (%s) at test point.\n", to_string(&send_to_3));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_3)) {\
write_bit_vector_to_pipe("noblock_obuf_4_3",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_assign_stmt_479_c_macro_ __declare_static_bit_vector(konst_477,8);\
bit_vector_clear(&konst_477);\
konst_477.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u8_u1_478,1);\
bit_vector_clear(&konst_477);\
konst_477.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_last_dest_id), &(konst_477), &(EQ_u8_u1_478));\
bit_vector_cast_to_bit_vector(0, &(send_to_4), &(EQ_u8_u1_478));\
;

#define _inputPort_4_Daemon_assign_stmt_483_c_macro_ if (has_undefined_bit(&send_to_4)) {fprintf(stderr, "Error: variable send_to_4 has undefined value (%s) at test point.\n", to_string(&send_to_4));assert(0);} \
if (bit_vector_to_uint64(0, &send_to_4)) {\
write_bit_vector_to_pipe("noblock_obuf_4_4",&(data_to_outport));\
}
;

#define _inputPort_4_Daemon_stmt_493_c_macro_ uint32_t _inputPort_4_Daemon_stmt_493_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t%s\n",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"write_status");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"send_to_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"send_to_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"send_to_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"send_to_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_to_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"data_to_outport");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_outport)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"new_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(new_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"next_last_dest_id");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_last_dest_id)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]inputPort_4_Daemon>\t\t%s\t\t",_inputPort_4_Daemon_stmt_493_c_macro___print_counter,"count_down");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(count_down)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _inputPort_4_Daemon_branch_block_stmt_392_c_export_apply_macro_ ;

#define _inputPort_4_Daemon_inner_outarg_prep_macro__ ;

#define _inputPort_4_Daemon_outer_arg_decl_macro__ ;

#define _inputPort_4_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_1_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_1_Daemon_branch_block_stmt_674_c_export_decl_macro_ __declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(down_counter,16);\
__declare_static_bit_vector(pkt_with_priority,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_with_priority,3);\
__declare_static_bit_vector(valid_active_pkt_length,16);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,16);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_1_Daemon_merge_stmt_676_c_preamble_macro_ uint8_t merge_stmt_676_entry_flag;\
merge_stmt_676_entry_flag = do_while_entry_flag;\
goto merge_stmt_676_run;\
merge_stmt_676_run: ;\

#define _outputPort_1_Daemon_phi_stmt_677_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_1_681,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_1",&(RPIPE_noblock_obuf_1_1_681));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_1_681));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_682_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_1_686,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_1",&(RPIPE_noblock_obuf_2_1_686));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_1_686));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_687_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_1_691,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_1",&(RPIPE_noblock_obuf_3_1_691));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_1_691));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_692_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_1_696,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_1",&(RPIPE_noblock_obuf_4_1_696));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_1_696));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_697_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_701_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_16));\
}\
;

#define _outputPort_1_Daemon_phi_stmt_705_c_macro_ __declare_static_bit_vector(konst_707,3);\
bit_vector_clear(&konst_707);\
konst_707.val.byte_array[0] = 1;\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &(next_pkt_with_priority));\
}\
else {\
__declare_static_bit_vector(konst_707,3);\
bit_vector_clear(&konst_707);\
konst_707.val.byte_array[0] = 1;\
bit_vector_clear(&konst_707);\
konst_707.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &(konst_707));\
}\
;
;

#define _outputPort_1_Daemon_merge_stmt_676_c_postamble_macro_ merge_stmt_676_entry_flag = 0;

#define _outputPort_1_Daemon_assign_stmt_714_c_macro_ __declare_static_bit_vector(konst_712,33);\
bit_vector_clear(&konst_712);\
konst_712.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_713,1);\
bit_vector_clear(&konst_712);\
konst_712.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_712), &(BITSEL_u33_u1_713));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_713));\
;

#define _outputPort_1_Daemon_assign_stmt_719_c_macro_ __declare_static_bit_vector(konst_717,33);\
bit_vector_clear(&konst_717);\
konst_717.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_718,1);\
bit_vector_clear(&konst_717);\
konst_717.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_717), &(BITSEL_u33_u1_718));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_718));\
;

#define _outputPort_1_Daemon_assign_stmt_724_c_macro_ __declare_static_bit_vector(konst_722,33);\
bit_vector_clear(&konst_722);\
konst_722.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_723,1);\
bit_vector_clear(&konst_722);\
konst_722.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_722), &(BITSEL_u33_u1_723));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_723));\
;

#define _outputPort_1_Daemon_assign_stmt_729_c_macro_ __declare_static_bit_vector(konst_727,33);\
bit_vector_clear(&konst_727);\
konst_727.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_728,1);\
bit_vector_clear(&konst_727);\
konst_727.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_727), &(BITSEL_u33_u1_728));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_728));\
;

#define _outputPort_1_Daemon_stmt_741_c_macro_ uint32_t _outputPort_1_Daemon_stmt_741_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t%s\n",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"pkt_with_priority");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_with_priority)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_741_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_1_Daemon_assign_stmt_770_c_macro_ __declare_static_bit_vector(konst_744,3);\
bit_vector_clear(&konst_744);\
konst_744.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_745,1);\
__declare_static_bit_vector(konst_747,1);\
bit_vector_clear(&konst_747);\
__declare_static_bit_vector(MUX_748,1);\
__declare_static_bit_vector(konst_750,3);\
bit_vector_clear(&konst_750);\
konst_750.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_751,1);\
__declare_static_bit_vector(konst_753,1);\
bit_vector_clear(&konst_753);\
__declare_static_bit_vector(MUX_754,1);\
__declare_static_bit_vector(OR_u1_u1_755,1);\
__declare_static_bit_vector(konst_757,3);\
bit_vector_clear(&konst_757);\
konst_757.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_758,1);\
__declare_static_bit_vector(konst_760,1);\
bit_vector_clear(&konst_760);\
__declare_static_bit_vector(MUX_761,1);\
__declare_static_bit_vector(konst_763,3);\
bit_vector_clear(&konst_763);\
konst_763.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_764,1);\
__declare_static_bit_vector(konst_766,1);\
bit_vector_clear(&konst_766);\
__declare_static_bit_vector(MUX_767,1);\
__declare_static_bit_vector(OR_u1_u1_768,1);\
__declare_static_bit_vector(OR_u1_u1_769,1);\
bit_vector_clear(&konst_744);\
konst_744.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_744), &(EQ_u3_u1_745));\
if (has_undefined_bit(&EQ_u3_u1_745)) {fprintf(stderr, "Error: variable EQ_u3_u1_745 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_745));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_745)){bit_vector_cast_to_bit_vector(0, &(MUX_748), &(p1_valid));\
}else {bit_vector_clear(&konst_747);\
bit_vector_cast_to_bit_vector(0, &(MUX_748), &(konst_747));\
}bit_vector_clear(&konst_750);\
konst_750.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_750), &(EQ_u3_u1_751));\
if (has_undefined_bit(&EQ_u3_u1_751)) {fprintf(stderr, "Error: variable EQ_u3_u1_751 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_751));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_751)){bit_vector_cast_to_bit_vector(0, &(MUX_754), &(p2_valid));\
}else {bit_vector_clear(&konst_753);\
bit_vector_cast_to_bit_vector(0, &(MUX_754), &(konst_753));\
}bit_vector_or(&(MUX_748), &(MUX_754), &(OR_u1_u1_755));\
bit_vector_clear(&konst_757);\
konst_757.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_757), &(EQ_u3_u1_758));\
if (has_undefined_bit(&EQ_u3_u1_758)) {fprintf(stderr, "Error: variable EQ_u3_u1_758 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_758));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_758)){bit_vector_cast_to_bit_vector(0, &(MUX_761), &(p3_valid));\
}else {bit_vector_clear(&konst_760);\
bit_vector_cast_to_bit_vector(0, &(MUX_761), &(konst_760));\
}bit_vector_clear(&konst_763);\
konst_763.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_763), &(EQ_u3_u1_764));\
if (has_undefined_bit(&EQ_u3_u1_764)) {fprintf(stderr, "Error: variable EQ_u3_u1_764 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_764));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_764)){bit_vector_cast_to_bit_vector(0, &(MUX_767), &(p4_valid));\
}else {bit_vector_clear(&konst_766);\
bit_vector_cast_to_bit_vector(0, &(MUX_767), &(konst_766));\
}bit_vector_or(&(MUX_761), &(MUX_767), &(OR_u1_u1_768));\
bit_vector_or(&(OR_u1_u1_755), &(OR_u1_u1_768), &(OR_u1_u1_769));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_769));\
;

#define _outputPort_1_Daemon_call_stmt_780_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_with_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_with_priority));\
;

#define _outputPort_1_Daemon_assign_stmt_813_c_macro_ __declare_static_bit_vector(konst_783,3);\
bit_vector_clear(&konst_783);\
konst_783.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_784,1);\
__declare_static_bit_vector(slice_786,16);\
__declare_static_bit_vector(konst_787,16);\
bit_vector_clear(&konst_787);\
__declare_static_bit_vector(MUX_788,16);\
__declare_static_bit_vector(konst_790,3);\
bit_vector_clear(&konst_790);\
konst_790.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_791,1);\
__declare_static_bit_vector(slice_793,16);\
__declare_static_bit_vector(konst_794,16);\
bit_vector_clear(&konst_794);\
__declare_static_bit_vector(MUX_795,16);\
__declare_static_bit_vector(OR_u16_u16_796,16);\
__declare_static_bit_vector(konst_798,3);\
bit_vector_clear(&konst_798);\
konst_798.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_799,1);\
__declare_static_bit_vector(slice_801,16);\
__declare_static_bit_vector(konst_802,16);\
bit_vector_clear(&konst_802);\
__declare_static_bit_vector(MUX_803,16);\
__declare_static_bit_vector(konst_805,3);\
bit_vector_clear(&konst_805);\
konst_805.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_806,1);\
__declare_static_bit_vector(slice_808,16);\
__declare_static_bit_vector(konst_809,16);\
bit_vector_clear(&konst_809);\
__declare_static_bit_vector(MUX_810,16);\
__declare_static_bit_vector(OR_u16_u16_811,16);\
__declare_static_bit_vector(OR_u16_u16_812,16);\
bit_vector_clear(&konst_783);\
konst_783.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_783), &(EQ_u3_u1_784));\
if (has_undefined_bit(&EQ_u3_u1_784)) {fprintf(stderr, "Error: variable EQ_u3_u1_784 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_784));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_784)){bit_vector_slice(&(pkt_1_e_word), &(slice_786), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_788), &(slice_786));\
}else {bit_vector_clear(&konst_787);\
bit_vector_cast_to_bit_vector(0, &(MUX_788), &(konst_787));\
}bit_vector_clear(&konst_790);\
konst_790.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_790), &(EQ_u3_u1_791));\
if (has_undefined_bit(&EQ_u3_u1_791)) {fprintf(stderr, "Error: variable EQ_u3_u1_791 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_791));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_791)){bit_vector_slice(&(pkt_2_e_word), &(slice_793), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_795), &(slice_793));\
}else {bit_vector_clear(&konst_794);\
bit_vector_cast_to_bit_vector(0, &(MUX_795), &(konst_794));\
}bit_vector_or(&(MUX_788), &(MUX_795), &(OR_u16_u16_796));\
bit_vector_clear(&konst_798);\
konst_798.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_798), &(EQ_u3_u1_799));\
if (has_undefined_bit(&EQ_u3_u1_799)) {fprintf(stderr, "Error: variable EQ_u3_u1_799 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_799));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_799)){bit_vector_slice(&(pkt_3_e_word), &(slice_801), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_803), &(slice_801));\
}else {bit_vector_clear(&konst_802);\
bit_vector_cast_to_bit_vector(0, &(MUX_803), &(konst_802));\
}bit_vector_clear(&konst_805);\
konst_805.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_805), &(EQ_u3_u1_806));\
if (has_undefined_bit(&EQ_u3_u1_806)) {fprintf(stderr, "Error: variable EQ_u3_u1_806 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_806));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_806)){bit_vector_slice(&(pkt_4_e_word), &(slice_808), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_810), &(slice_808));\
}else {bit_vector_clear(&konst_809);\
bit_vector_cast_to_bit_vector(0, &(MUX_810), &(konst_809));\
}bit_vector_or(&(MUX_803), &(MUX_810), &(OR_u16_u16_811));\
bit_vector_or(&(OR_u16_u16_796), &(OR_u16_u16_811), &(OR_u16_u16_812));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_length), &(OR_u16_u16_812));\
;

#define _outputPort_1_Daemon_assign_stmt_822_c_macro_ __declare_static_bit_vector(konst_816,3);\
bit_vector_clear(&konst_816);\
__declare_static_bit_vector(NEQ_u3_u1_817,1);\
__declare_static_bit_vector(konst_819,16);\
bit_vector_clear(&konst_819);\
__declare_static_bit_vector(EQ_u16_u1_820,1);\
__declare_static_bit_vector(AND_u1_u1_821,1);\
bit_vector_clear(&konst_816);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_816), &NEQ_u3_u1_817);\
bit_vector_clear(&konst_819);\
bit_vector_equal(0, &(down_counter), &(konst_819), &(EQ_u16_u1_820));\
bit_vector_and(&(NEQ_u3_u1_817), &(EQ_u16_u1_820), &(AND_u1_u1_821));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_821));\
;

#define _outputPort_1_Daemon_assign_stmt_835_c_macro_ __declare_static_bit_vector(konst_826,16);\
bit_vector_clear(&konst_826);\
konst_826.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_827,16);\
__declare_static_bit_vector(konst_830,16);\
bit_vector_clear(&konst_830);\
konst_830.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_831,16);\
__declare_static_bit_vector(MUX_833,16);\
__declare_static_bit_vector(MUX_834,16);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_826);\
konst_826.val.byte_array[0] = 1;\
bit_vector_minus( &(valid_active_pkt_length), &(konst_826), &(SUB_u16_u16_827));\
bit_vector_cast_to_bit_vector(0, &(MUX_834), &(SUB_u16_u16_827));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_830);\
konst_830.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_830), &(SUB_u16_u16_831));\
bit_vector_cast_to_bit_vector(0, &(MUX_833), &(SUB_u16_u16_831));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_833), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_834), &(MUX_833));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_834));\
;

#define _outputPort_1_Daemon_assign_stmt_843_c_macro_ __declare_static_bit_vector(NOT_u1_u1_838,1);\
__declare_static_bit_vector(konst_840,3);\
bit_vector_clear(&konst_840);\
konst_840.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_841,1);\
__declare_static_bit_vector(OR_u1_u1_842,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_838));\
bit_vector_clear(&konst_840);\
konst_840.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_840), &(EQ_u3_u1_841));\
bit_vector_or(&(NOT_u1_u1_838), &(EQ_u3_u1_841), &(OR_u1_u1_842));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_842));\
;

#define _outputPort_1_Daemon_assign_stmt_851_c_macro_ __declare_static_bit_vector(NOT_u1_u1_846,1);\
__declare_static_bit_vector(konst_848,3);\
bit_vector_clear(&konst_848);\
konst_848.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_849,1);\
__declare_static_bit_vector(OR_u1_u1_850,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_846));\
bit_vector_clear(&konst_848);\
konst_848.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_848), &(EQ_u3_u1_849));\
bit_vector_or(&(NOT_u1_u1_846), &(EQ_u3_u1_849), &(OR_u1_u1_850));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_850));\
;

#define _outputPort_1_Daemon_assign_stmt_859_c_macro_ __declare_static_bit_vector(NOT_u1_u1_854,1);\
__declare_static_bit_vector(konst_856,3);\
bit_vector_clear(&konst_856);\
konst_856.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_857,1);\
__declare_static_bit_vector(OR_u1_u1_858,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_854));\
bit_vector_clear(&konst_856);\
konst_856.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_856), &(EQ_u3_u1_857));\
bit_vector_or(&(NOT_u1_u1_854), &(EQ_u3_u1_857), &(OR_u1_u1_858));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_858));\
;

#define _outputPort_1_Daemon_assign_stmt_867_c_macro_ __declare_static_bit_vector(NOT_u1_u1_862,1);\
__declare_static_bit_vector(konst_864,3);\
bit_vector_clear(&konst_864);\
konst_864.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_865,1);\
__declare_static_bit_vector(OR_u1_u1_866,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_862));\
bit_vector_clear(&konst_864);\
konst_864.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_864), &(EQ_u3_u1_865));\
bit_vector_or(&(NOT_u1_u1_862), &(EQ_u3_u1_865), &(OR_u1_u1_866));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_866));\
;

#define _outputPort_1_Daemon_assign_stmt_889_c_macro_ __declare_static_bit_vector(konst_870,3);\
bit_vector_clear(&konst_870);\
konst_870.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_871,1);\
__declare_static_bit_vector(slice_873,32);\
__declare_static_bit_vector(konst_875,3);\
bit_vector_clear(&konst_875);\
konst_875.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_876,1);\
__declare_static_bit_vector(slice_878,32);\
__declare_static_bit_vector(konst_880,3);\
bit_vector_clear(&konst_880);\
konst_880.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_881,1);\
__declare_static_bit_vector(slice_883,32);\
__declare_static_bit_vector(slice_885,32);\
__declare_static_bit_vector(MUX_886,32);\
__declare_static_bit_vector(MUX_887,32);\
__declare_static_bit_vector(MUX_888,32);\
bit_vector_clear(&konst_870);\
konst_870.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_870), &(EQ_u3_u1_871));\
if (has_undefined_bit(&EQ_u3_u1_871)) {fprintf(stderr, "Error: variable EQ_u3_u1_871 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_871));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_871)){bit_vector_slice(&(pkt_1_e_word), &(slice_873), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_888), &(slice_873));\
}else {bit_vector_clear(&konst_875);\
konst_875.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_875), &(EQ_u3_u1_876));\
if (has_undefined_bit(&EQ_u3_u1_876)) {fprintf(stderr, "Error: variable EQ_u3_u1_876 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_876));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_876)){bit_vector_slice(&(pkt_2_e_word), &(slice_878), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_887), &(slice_878));\
}else {bit_vector_clear(&konst_880);\
konst_880.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_880), &(EQ_u3_u1_881));\
if (has_undefined_bit(&EQ_u3_u1_881)) {fprintf(stderr, "Error: variable EQ_u3_u1_881 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_881));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_881)){bit_vector_slice(&(pkt_3_e_word), &(slice_883), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_886), &(slice_883));\
}else {bit_vector_slice(&(pkt_4_e_word), &(slice_885), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_886), &(slice_885));\
}bit_vector_cast_to_bit_vector(0, &(MUX_887), &(MUX_886));\
}bit_vector_cast_to_bit_vector(0, &(MUX_888), &(MUX_887));\
}bit_vector_cast_to_bit_vector(0, &(data_to_out), &(MUX_888));\
;

#define _outputPort_1_Daemon_assign_stmt_918_c_macro_ __declare_static_bit_vector(konst_892,3);\
bit_vector_clear(&konst_892);\
konst_892.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_893,1);\
__declare_static_bit_vector(konst_895,1);\
bit_vector_clear(&konst_895);\
__declare_static_bit_vector(MUX_896,1);\
__declare_static_bit_vector(konst_898,3);\
bit_vector_clear(&konst_898);\
konst_898.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_899,1);\
__declare_static_bit_vector(konst_901,1);\
bit_vector_clear(&konst_901);\
__declare_static_bit_vector(MUX_902,1);\
__declare_static_bit_vector(OR_u1_u1_903,1);\
__declare_static_bit_vector(konst_905,3);\
bit_vector_clear(&konst_905);\
konst_905.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_906,1);\
__declare_static_bit_vector(konst_908,1);\
bit_vector_clear(&konst_908);\
__declare_static_bit_vector(MUX_909,1);\
__declare_static_bit_vector(konst_911,3);\
bit_vector_clear(&konst_911);\
konst_911.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_912,1);\
__declare_static_bit_vector(konst_914,1);\
bit_vector_clear(&konst_914);\
__declare_static_bit_vector(MUX_915,1);\
__declare_static_bit_vector(OR_u1_u1_916,1);\
__declare_static_bit_vector(OR_u1_u1_917,1);\
bit_vector_clear(&konst_892);\
konst_892.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_892), &(EQ_u3_u1_893));\
if (has_undefined_bit(&EQ_u3_u1_893)) {fprintf(stderr, "Error: variable EQ_u3_u1_893 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_893));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_893)){bit_vector_cast_to_bit_vector(0, &(MUX_896), &(p1_valid));\
}else {bit_vector_clear(&konst_895);\
bit_vector_cast_to_bit_vector(0, &(MUX_896), &(konst_895));\
}bit_vector_clear(&konst_898);\
konst_898.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_898), &(EQ_u3_u1_899));\
if (has_undefined_bit(&EQ_u3_u1_899)) {fprintf(stderr, "Error: variable EQ_u3_u1_899 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_899));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_899)){bit_vector_cast_to_bit_vector(0, &(MUX_902), &(p2_valid));\
}else {bit_vector_clear(&konst_901);\
bit_vector_cast_to_bit_vector(0, &(MUX_902), &(konst_901));\
}bit_vector_or(&(MUX_896), &(MUX_902), &(OR_u1_u1_903));\
bit_vector_clear(&konst_905);\
konst_905.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_905), &(EQ_u3_u1_906));\
if (has_undefined_bit(&EQ_u3_u1_906)) {fprintf(stderr, "Error: variable EQ_u3_u1_906 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_906));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_906)){bit_vector_cast_to_bit_vector(0, &(MUX_909), &(p3_valid));\
}else {bit_vector_clear(&konst_908);\
bit_vector_cast_to_bit_vector(0, &(MUX_909), &(konst_908));\
}bit_vector_clear(&konst_911);\
konst_911.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_911), &(EQ_u3_u1_912));\
if (has_undefined_bit(&EQ_u3_u1_912)) {fprintf(stderr, "Error: variable EQ_u3_u1_912 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_912));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_912)){bit_vector_cast_to_bit_vector(0, &(MUX_915), &(p4_valid));\
}else {bit_vector_clear(&konst_914);\
bit_vector_cast_to_bit_vector(0, &(MUX_915), &(konst_914));\
}bit_vector_or(&(MUX_909), &(MUX_915), &(OR_u1_u1_916));\
bit_vector_or(&(OR_u1_u1_903), &(OR_u1_u1_916), &(OR_u1_u1_917));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_917));\
;

#define _outputPort_1_Daemon_assign_stmt_922_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_1",&(data_to_out));\
}
;

#define _outputPort_1_Daemon_stmt_931_c_macro_ uint32_t _outputPort_1_Daemon_stmt_931_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t%s\n",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"send_information");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"next_pkt_with_priority");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_pkt_with_priority)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"send_flag");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_flag)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_1_Daemon>\t\t%s\t\t",_outputPort_1_Daemon_stmt_931_c_macro___print_counter,"data_to_out");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_out)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _outputPort_1_Daemon_branch_block_stmt_674_c_export_apply_macro_ ;

#define _outputPort_1_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_1_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_1_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_2_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_2_Daemon_branch_block_stmt_937_c_export_decl_macro_ __declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(down_counter,16);\
__declare_static_bit_vector(pkt_with_priority,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_with_priority,3);\
__declare_static_bit_vector(valid_active_pkt_length,16);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,16);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_2_Daemon_merge_stmt_939_c_preamble_macro_ uint8_t merge_stmt_939_entry_flag;\
merge_stmt_939_entry_flag = do_while_entry_flag;\
goto merge_stmt_939_run;\
merge_stmt_939_run: ;\

#define _outputPort_2_Daemon_phi_stmt_940_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_2_944,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_2",&(RPIPE_noblock_obuf_1_2_944));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_2_944));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_945_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_2_949,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_2",&(RPIPE_noblock_obuf_2_2_949));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_2_949));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_950_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_2_954,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_2",&(RPIPE_noblock_obuf_3_2_954));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_2_954));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_955_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_2_959,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_2",&(RPIPE_noblock_obuf_4_2_959));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_2_959));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_960_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_964_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_16));\
}\
;

#define _outputPort_2_Daemon_phi_stmt_968_c_macro_ __declare_static_bit_vector(konst_970,3);\
bit_vector_clear(&konst_970);\
konst_970.val.byte_array[0] = 1;\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &(next_pkt_with_priority));\
}\
else {\
__declare_static_bit_vector(konst_970,3);\
bit_vector_clear(&konst_970);\
konst_970.val.byte_array[0] = 1;\
bit_vector_clear(&konst_970);\
konst_970.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &(konst_970));\
}\
;
;

#define _outputPort_2_Daemon_merge_stmt_939_c_postamble_macro_ merge_stmt_939_entry_flag = 0;

#define _outputPort_2_Daemon_assign_stmt_977_c_macro_ __declare_static_bit_vector(konst_975,33);\
bit_vector_clear(&konst_975);\
konst_975.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_976,1);\
bit_vector_clear(&konst_975);\
konst_975.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_975), &(BITSEL_u33_u1_976));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_976));\
;

#define _outputPort_2_Daemon_assign_stmt_982_c_macro_ __declare_static_bit_vector(konst_980,33);\
bit_vector_clear(&konst_980);\
konst_980.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_981,1);\
bit_vector_clear(&konst_980);\
konst_980.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_980), &(BITSEL_u33_u1_981));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_981));\
;

#define _outputPort_2_Daemon_assign_stmt_987_c_macro_ __declare_static_bit_vector(konst_985,33);\
bit_vector_clear(&konst_985);\
konst_985.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_986,1);\
bit_vector_clear(&konst_985);\
konst_985.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_985), &(BITSEL_u33_u1_986));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_986));\
;

#define _outputPort_2_Daemon_assign_stmt_992_c_macro_ __declare_static_bit_vector(konst_990,33);\
bit_vector_clear(&konst_990);\
konst_990.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_991,1);\
bit_vector_clear(&konst_990);\
konst_990.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_990), &(BITSEL_u33_u1_991));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_991));\
;

#define _outputPort_2_Daemon_stmt_1004_c_macro_ uint32_t _outputPort_2_Daemon_stmt_1004_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t%s\n",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"pkt_with_priority");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_with_priority)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1004_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_2_Daemon_assign_stmt_1033_c_macro_ __declare_static_bit_vector(konst_1007,3);\
bit_vector_clear(&konst_1007);\
konst_1007.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1008,1);\
__declare_static_bit_vector(konst_1010,1);\
bit_vector_clear(&konst_1010);\
__declare_static_bit_vector(MUX_1011,1);\
__declare_static_bit_vector(konst_1013,3);\
bit_vector_clear(&konst_1013);\
konst_1013.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1014,1);\
__declare_static_bit_vector(konst_1016,1);\
bit_vector_clear(&konst_1016);\
__declare_static_bit_vector(MUX_1017,1);\
__declare_static_bit_vector(OR_u1_u1_1018,1);\
__declare_static_bit_vector(konst_1020,3);\
bit_vector_clear(&konst_1020);\
konst_1020.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1021,1);\
__declare_static_bit_vector(konst_1023,1);\
bit_vector_clear(&konst_1023);\
__declare_static_bit_vector(MUX_1024,1);\
__declare_static_bit_vector(konst_1026,3);\
bit_vector_clear(&konst_1026);\
konst_1026.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1027,1);\
__declare_static_bit_vector(konst_1029,1);\
bit_vector_clear(&konst_1029);\
__declare_static_bit_vector(MUX_1030,1);\
__declare_static_bit_vector(OR_u1_u1_1031,1);\
__declare_static_bit_vector(OR_u1_u1_1032,1);\
bit_vector_clear(&konst_1007);\
konst_1007.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1007), &(EQ_u3_u1_1008));\
if (has_undefined_bit(&EQ_u3_u1_1008)) {fprintf(stderr, "Error: variable EQ_u3_u1_1008 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1008));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1008)){bit_vector_cast_to_bit_vector(0, &(MUX_1011), &(p1_valid));\
}else {bit_vector_clear(&konst_1010);\
bit_vector_cast_to_bit_vector(0, &(MUX_1011), &(konst_1010));\
}bit_vector_clear(&konst_1013);\
konst_1013.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1013), &(EQ_u3_u1_1014));\
if (has_undefined_bit(&EQ_u3_u1_1014)) {fprintf(stderr, "Error: variable EQ_u3_u1_1014 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1014));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1014)){bit_vector_cast_to_bit_vector(0, &(MUX_1017), &(p2_valid));\
}else {bit_vector_clear(&konst_1016);\
bit_vector_cast_to_bit_vector(0, &(MUX_1017), &(konst_1016));\
}bit_vector_or(&(MUX_1011), &(MUX_1017), &(OR_u1_u1_1018));\
bit_vector_clear(&konst_1020);\
konst_1020.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1020), &(EQ_u3_u1_1021));\
if (has_undefined_bit(&EQ_u3_u1_1021)) {fprintf(stderr, "Error: variable EQ_u3_u1_1021 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1021));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1021)){bit_vector_cast_to_bit_vector(0, &(MUX_1024), &(p3_valid));\
}else {bit_vector_clear(&konst_1023);\
bit_vector_cast_to_bit_vector(0, &(MUX_1024), &(konst_1023));\
}bit_vector_clear(&konst_1026);\
konst_1026.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1026), &(EQ_u3_u1_1027));\
if (has_undefined_bit(&EQ_u3_u1_1027)) {fprintf(stderr, "Error: variable EQ_u3_u1_1027 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1027));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1027)){bit_vector_cast_to_bit_vector(0, &(MUX_1030), &(p4_valid));\
}else {bit_vector_clear(&konst_1029);\
bit_vector_cast_to_bit_vector(0, &(MUX_1030), &(konst_1029));\
}bit_vector_or(&(MUX_1024), &(MUX_1030), &(OR_u1_u1_1031));\
bit_vector_or(&(OR_u1_u1_1018), &(OR_u1_u1_1031), &(OR_u1_u1_1032));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1032));\
;

#define _outputPort_2_Daemon_call_stmt_1043_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_with_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_with_priority));\
;

#define _outputPort_2_Daemon_assign_stmt_1076_c_macro_ __declare_static_bit_vector(konst_1046,3);\
bit_vector_clear(&konst_1046);\
konst_1046.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1047,1);\
__declare_static_bit_vector(slice_1049,16);\
__declare_static_bit_vector(konst_1050,16);\
bit_vector_clear(&konst_1050);\
__declare_static_bit_vector(MUX_1051,16);\
__declare_static_bit_vector(konst_1053,3);\
bit_vector_clear(&konst_1053);\
konst_1053.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1054,1);\
__declare_static_bit_vector(slice_1056,16);\
__declare_static_bit_vector(konst_1057,16);\
bit_vector_clear(&konst_1057);\
__declare_static_bit_vector(MUX_1058,16);\
__declare_static_bit_vector(OR_u16_u16_1059,16);\
__declare_static_bit_vector(konst_1061,3);\
bit_vector_clear(&konst_1061);\
konst_1061.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1062,1);\
__declare_static_bit_vector(slice_1064,16);\
__declare_static_bit_vector(konst_1065,16);\
bit_vector_clear(&konst_1065);\
__declare_static_bit_vector(MUX_1066,16);\
__declare_static_bit_vector(konst_1068,3);\
bit_vector_clear(&konst_1068);\
konst_1068.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1069,1);\
__declare_static_bit_vector(slice_1071,16);\
__declare_static_bit_vector(konst_1072,16);\
bit_vector_clear(&konst_1072);\
__declare_static_bit_vector(MUX_1073,16);\
__declare_static_bit_vector(OR_u16_u16_1074,16);\
__declare_static_bit_vector(OR_u16_u16_1075,16);\
bit_vector_clear(&konst_1046);\
konst_1046.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1046), &(EQ_u3_u1_1047));\
if (has_undefined_bit(&EQ_u3_u1_1047)) {fprintf(stderr, "Error: variable EQ_u3_u1_1047 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1047));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1047)){bit_vector_slice(&(pkt_1_e_word), &(slice_1049), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1051), &(slice_1049));\
}else {bit_vector_clear(&konst_1050);\
bit_vector_cast_to_bit_vector(0, &(MUX_1051), &(konst_1050));\
}bit_vector_clear(&konst_1053);\
konst_1053.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1053), &(EQ_u3_u1_1054));\
if (has_undefined_bit(&EQ_u3_u1_1054)) {fprintf(stderr, "Error: variable EQ_u3_u1_1054 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1054));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1054)){bit_vector_slice(&(pkt_2_e_word), &(slice_1056), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1058), &(slice_1056));\
}else {bit_vector_clear(&konst_1057);\
bit_vector_cast_to_bit_vector(0, &(MUX_1058), &(konst_1057));\
}bit_vector_or(&(MUX_1051), &(MUX_1058), &(OR_u16_u16_1059));\
bit_vector_clear(&konst_1061);\
konst_1061.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1061), &(EQ_u3_u1_1062));\
if (has_undefined_bit(&EQ_u3_u1_1062)) {fprintf(stderr, "Error: variable EQ_u3_u1_1062 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1062));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1062)){bit_vector_slice(&(pkt_3_e_word), &(slice_1064), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1066), &(slice_1064));\
}else {bit_vector_clear(&konst_1065);\
bit_vector_cast_to_bit_vector(0, &(MUX_1066), &(konst_1065));\
}bit_vector_clear(&konst_1068);\
konst_1068.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1068), &(EQ_u3_u1_1069));\
if (has_undefined_bit(&EQ_u3_u1_1069)) {fprintf(stderr, "Error: variable EQ_u3_u1_1069 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1069));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1069)){bit_vector_slice(&(pkt_4_e_word), &(slice_1071), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1073), &(slice_1071));\
}else {bit_vector_clear(&konst_1072);\
bit_vector_cast_to_bit_vector(0, &(MUX_1073), &(konst_1072));\
}bit_vector_or(&(MUX_1066), &(MUX_1073), &(OR_u16_u16_1074));\
bit_vector_or(&(OR_u16_u16_1059), &(OR_u16_u16_1074), &(OR_u16_u16_1075));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_length), &(OR_u16_u16_1075));\
;

#define _outputPort_2_Daemon_assign_stmt_1085_c_macro_ __declare_static_bit_vector(konst_1079,3);\
bit_vector_clear(&konst_1079);\
__declare_static_bit_vector(NEQ_u3_u1_1080,1);\
__declare_static_bit_vector(konst_1082,16);\
bit_vector_clear(&konst_1082);\
__declare_static_bit_vector(EQ_u16_u1_1083,1);\
__declare_static_bit_vector(AND_u1_u1_1084,1);\
bit_vector_clear(&konst_1079);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1079), &NEQ_u3_u1_1080);\
bit_vector_clear(&konst_1082);\
bit_vector_equal(0, &(down_counter), &(konst_1082), &(EQ_u16_u1_1083));\
bit_vector_and(&(NEQ_u3_u1_1080), &(EQ_u16_u1_1083), &(AND_u1_u1_1084));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1084));\
;

#define _outputPort_2_Daemon_assign_stmt_1098_c_macro_ __declare_static_bit_vector(konst_1089,16);\
bit_vector_clear(&konst_1089);\
konst_1089.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1090,16);\
__declare_static_bit_vector(konst_1093,16);\
bit_vector_clear(&konst_1093);\
konst_1093.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1094,16);\
__declare_static_bit_vector(MUX_1096,16);\
__declare_static_bit_vector(MUX_1097,16);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1089);\
konst_1089.val.byte_array[0] = 1;\
bit_vector_minus( &(valid_active_pkt_length), &(konst_1089), &(SUB_u16_u16_1090));\
bit_vector_cast_to_bit_vector(0, &(MUX_1097), &(SUB_u16_u16_1090));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1093);\
konst_1093.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1093), &(SUB_u16_u16_1094));\
bit_vector_cast_to_bit_vector(0, &(MUX_1096), &(SUB_u16_u16_1094));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1096), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1097), &(MUX_1096));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1097));\
;

#define _outputPort_2_Daemon_assign_stmt_1106_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1101,1);\
__declare_static_bit_vector(konst_1103,3);\
bit_vector_clear(&konst_1103);\
konst_1103.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1104,1);\
__declare_static_bit_vector(OR_u1_u1_1105,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1101));\
bit_vector_clear(&konst_1103);\
konst_1103.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1103), &(EQ_u3_u1_1104));\
bit_vector_or(&(NOT_u1_u1_1101), &(EQ_u3_u1_1104), &(OR_u1_u1_1105));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1105));\
;

#define _outputPort_2_Daemon_assign_stmt_1114_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1109,1);\
__declare_static_bit_vector(konst_1111,3);\
bit_vector_clear(&konst_1111);\
konst_1111.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1112,1);\
__declare_static_bit_vector(OR_u1_u1_1113,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1109));\
bit_vector_clear(&konst_1111);\
konst_1111.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1111), &(EQ_u3_u1_1112));\
bit_vector_or(&(NOT_u1_u1_1109), &(EQ_u3_u1_1112), &(OR_u1_u1_1113));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1113));\
;

#define _outputPort_2_Daemon_assign_stmt_1122_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1117,1);\
__declare_static_bit_vector(konst_1119,3);\
bit_vector_clear(&konst_1119);\
konst_1119.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1120,1);\
__declare_static_bit_vector(OR_u1_u1_1121,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1117));\
bit_vector_clear(&konst_1119);\
konst_1119.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1119), &(EQ_u3_u1_1120));\
bit_vector_or(&(NOT_u1_u1_1117), &(EQ_u3_u1_1120), &(OR_u1_u1_1121));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1121));\
;

#define _outputPort_2_Daemon_assign_stmt_1130_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1125,1);\
__declare_static_bit_vector(konst_1127,3);\
bit_vector_clear(&konst_1127);\
konst_1127.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1128,1);\
__declare_static_bit_vector(OR_u1_u1_1129,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1125));\
bit_vector_clear(&konst_1127);\
konst_1127.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1127), &(EQ_u3_u1_1128));\
bit_vector_or(&(NOT_u1_u1_1125), &(EQ_u3_u1_1128), &(OR_u1_u1_1129));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1129));\
;

#define _outputPort_2_Daemon_assign_stmt_1152_c_macro_ __declare_static_bit_vector(konst_1133,3);\
bit_vector_clear(&konst_1133);\
konst_1133.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1134,1);\
__declare_static_bit_vector(slice_1136,32);\
__declare_static_bit_vector(konst_1138,3);\
bit_vector_clear(&konst_1138);\
konst_1138.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1139,1);\
__declare_static_bit_vector(slice_1141,32);\
__declare_static_bit_vector(konst_1143,3);\
bit_vector_clear(&konst_1143);\
konst_1143.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1144,1);\
__declare_static_bit_vector(slice_1146,32);\
__declare_static_bit_vector(slice_1148,32);\
__declare_static_bit_vector(MUX_1149,32);\
__declare_static_bit_vector(MUX_1150,32);\
__declare_static_bit_vector(MUX_1151,32);\
bit_vector_clear(&konst_1133);\
konst_1133.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1133), &(EQ_u3_u1_1134));\
if (has_undefined_bit(&EQ_u3_u1_1134)) {fprintf(stderr, "Error: variable EQ_u3_u1_1134 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1134));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1134)){bit_vector_slice(&(pkt_1_e_word), &(slice_1136), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1151), &(slice_1136));\
}else {bit_vector_clear(&konst_1138);\
konst_1138.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1138), &(EQ_u3_u1_1139));\
if (has_undefined_bit(&EQ_u3_u1_1139)) {fprintf(stderr, "Error: variable EQ_u3_u1_1139 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1139));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1139)){bit_vector_slice(&(pkt_2_e_word), &(slice_1141), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1150), &(slice_1141));\
}else {bit_vector_clear(&konst_1143);\
konst_1143.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1143), &(EQ_u3_u1_1144));\
if (has_undefined_bit(&EQ_u3_u1_1144)) {fprintf(stderr, "Error: variable EQ_u3_u1_1144 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1144));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1144)){bit_vector_slice(&(pkt_3_e_word), &(slice_1146), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1149), &(slice_1146));\
}else {bit_vector_slice(&(pkt_4_e_word), &(slice_1148), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1149), &(slice_1148));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1150), &(MUX_1149));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1151), &(MUX_1150));\
}bit_vector_cast_to_bit_vector(0, &(data_to_out), &(MUX_1151));\
;

#define _outputPort_2_Daemon_assign_stmt_1181_c_macro_ __declare_static_bit_vector(konst_1155,3);\
bit_vector_clear(&konst_1155);\
konst_1155.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1156,1);\
__declare_static_bit_vector(konst_1158,1);\
bit_vector_clear(&konst_1158);\
__declare_static_bit_vector(MUX_1159,1);\
__declare_static_bit_vector(konst_1161,3);\
bit_vector_clear(&konst_1161);\
konst_1161.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1162,1);\
__declare_static_bit_vector(konst_1164,1);\
bit_vector_clear(&konst_1164);\
__declare_static_bit_vector(MUX_1165,1);\
__declare_static_bit_vector(OR_u1_u1_1166,1);\
__declare_static_bit_vector(konst_1168,3);\
bit_vector_clear(&konst_1168);\
konst_1168.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1169,1);\
__declare_static_bit_vector(konst_1171,1);\
bit_vector_clear(&konst_1171);\
__declare_static_bit_vector(MUX_1172,1);\
__declare_static_bit_vector(konst_1174,3);\
bit_vector_clear(&konst_1174);\
konst_1174.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1175,1);\
__declare_static_bit_vector(konst_1177,1);\
bit_vector_clear(&konst_1177);\
__declare_static_bit_vector(MUX_1178,1);\
__declare_static_bit_vector(OR_u1_u1_1179,1);\
__declare_static_bit_vector(OR_u1_u1_1180,1);\
bit_vector_clear(&konst_1155);\
konst_1155.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1155), &(EQ_u3_u1_1156));\
if (has_undefined_bit(&EQ_u3_u1_1156)) {fprintf(stderr, "Error: variable EQ_u3_u1_1156 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1156));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1156)){bit_vector_cast_to_bit_vector(0, &(MUX_1159), &(p1_valid));\
}else {bit_vector_clear(&konst_1158);\
bit_vector_cast_to_bit_vector(0, &(MUX_1159), &(konst_1158));\
}bit_vector_clear(&konst_1161);\
konst_1161.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1161), &(EQ_u3_u1_1162));\
if (has_undefined_bit(&EQ_u3_u1_1162)) {fprintf(stderr, "Error: variable EQ_u3_u1_1162 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1162));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1162)){bit_vector_cast_to_bit_vector(0, &(MUX_1165), &(p2_valid));\
}else {bit_vector_clear(&konst_1164);\
bit_vector_cast_to_bit_vector(0, &(MUX_1165), &(konst_1164));\
}bit_vector_or(&(MUX_1159), &(MUX_1165), &(OR_u1_u1_1166));\
bit_vector_clear(&konst_1168);\
konst_1168.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1168), &(EQ_u3_u1_1169));\
if (has_undefined_bit(&EQ_u3_u1_1169)) {fprintf(stderr, "Error: variable EQ_u3_u1_1169 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1169));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1169)){bit_vector_cast_to_bit_vector(0, &(MUX_1172), &(p3_valid));\
}else {bit_vector_clear(&konst_1171);\
bit_vector_cast_to_bit_vector(0, &(MUX_1172), &(konst_1171));\
}bit_vector_clear(&konst_1174);\
konst_1174.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1174), &(EQ_u3_u1_1175));\
if (has_undefined_bit(&EQ_u3_u1_1175)) {fprintf(stderr, "Error: variable EQ_u3_u1_1175 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1175));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1175)){bit_vector_cast_to_bit_vector(0, &(MUX_1178), &(p4_valid));\
}else {bit_vector_clear(&konst_1177);\
bit_vector_cast_to_bit_vector(0, &(MUX_1178), &(konst_1177));\
}bit_vector_or(&(MUX_1172), &(MUX_1178), &(OR_u1_u1_1179));\
bit_vector_or(&(OR_u1_u1_1166), &(OR_u1_u1_1179), &(OR_u1_u1_1180));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1180));\
;

#define _outputPort_2_Daemon_assign_stmt_1185_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_2",&(data_to_out));\
}
;

#define _outputPort_2_Daemon_stmt_1194_c_macro_ uint32_t _outputPort_2_Daemon_stmt_1194_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t%s\n",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"send_information");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"next_pkt_with_priority");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_pkt_with_priority)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"send_flag");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_flag)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_2_Daemon>\t\t%s\t\t",_outputPort_2_Daemon_stmt_1194_c_macro___print_counter,"data_to_out");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_out)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _outputPort_2_Daemon_branch_block_stmt_937_c_export_apply_macro_ ;

#define _outputPort_2_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_2_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_2_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_3_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_3_Daemon_branch_block_stmt_1200_c_export_decl_macro_ __declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(down_counter,16);\
__declare_static_bit_vector(pkt_with_priority,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_with_priority,3);\
__declare_static_bit_vector(valid_active_pkt_length,16);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,16);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_3_Daemon_merge_stmt_1202_c_preamble_macro_ uint8_t merge_stmt_1202_entry_flag;\
merge_stmt_1202_entry_flag = do_while_entry_flag;\
goto merge_stmt_1202_run;\
merge_stmt_1202_run: ;\

#define _outputPort_3_Daemon_phi_stmt_1203_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_3_1207,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_3",&(RPIPE_noblock_obuf_1_3_1207));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_3_1207));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1208_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_3_1212,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_3",&(RPIPE_noblock_obuf_2_3_1212));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_3_1212));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1213_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_3_1217,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_3",&(RPIPE_noblock_obuf_3_3_1217));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_3_1217));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1218_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_3_1222,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_3",&(RPIPE_noblock_obuf_4_3_1222));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_3_1222));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1223_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1227_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_16));\
}\
;

#define _outputPort_3_Daemon_phi_stmt_1231_c_macro_ __declare_static_bit_vector(konst_1233,3);\
bit_vector_clear(&konst_1233);\
konst_1233.val.byte_array[0] = 1;\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &(next_pkt_with_priority));\
}\
else {\
__declare_static_bit_vector(konst_1233,3);\
bit_vector_clear(&konst_1233);\
konst_1233.val.byte_array[0] = 1;\
bit_vector_clear(&konst_1233);\
konst_1233.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &(konst_1233));\
}\
;
;

#define _outputPort_3_Daemon_merge_stmt_1202_c_postamble_macro_ merge_stmt_1202_entry_flag = 0;

#define _outputPort_3_Daemon_assign_stmt_1240_c_macro_ __declare_static_bit_vector(konst_1238,33);\
bit_vector_clear(&konst_1238);\
konst_1238.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1239,1);\
bit_vector_clear(&konst_1238);\
konst_1238.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1238), &(BITSEL_u33_u1_1239));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1239));\
;

#define _outputPort_3_Daemon_assign_stmt_1245_c_macro_ __declare_static_bit_vector(konst_1243,33);\
bit_vector_clear(&konst_1243);\
konst_1243.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1244,1);\
bit_vector_clear(&konst_1243);\
konst_1243.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1243), &(BITSEL_u33_u1_1244));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1244));\
;

#define _outputPort_3_Daemon_assign_stmt_1250_c_macro_ __declare_static_bit_vector(konst_1248,33);\
bit_vector_clear(&konst_1248);\
konst_1248.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1249,1);\
bit_vector_clear(&konst_1248);\
konst_1248.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1248), &(BITSEL_u33_u1_1249));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1249));\
;

#define _outputPort_3_Daemon_assign_stmt_1255_c_macro_ __declare_static_bit_vector(konst_1253,33);\
bit_vector_clear(&konst_1253);\
konst_1253.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1254,1);\
bit_vector_clear(&konst_1253);\
konst_1253.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1253), &(BITSEL_u33_u1_1254));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1254));\
;

#define _outputPort_3_Daemon_stmt_1267_c_macro_ uint32_t _outputPort_3_Daemon_stmt_1267_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t%s\n",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"pkt_with_priority");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_with_priority)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1267_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_3_Daemon_assign_stmt_1296_c_macro_ __declare_static_bit_vector(konst_1270,3);\
bit_vector_clear(&konst_1270);\
konst_1270.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1271,1);\
__declare_static_bit_vector(konst_1273,1);\
bit_vector_clear(&konst_1273);\
__declare_static_bit_vector(MUX_1274,1);\
__declare_static_bit_vector(konst_1276,3);\
bit_vector_clear(&konst_1276);\
konst_1276.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1277,1);\
__declare_static_bit_vector(konst_1279,1);\
bit_vector_clear(&konst_1279);\
__declare_static_bit_vector(MUX_1280,1);\
__declare_static_bit_vector(OR_u1_u1_1281,1);\
__declare_static_bit_vector(konst_1283,3);\
bit_vector_clear(&konst_1283);\
konst_1283.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1284,1);\
__declare_static_bit_vector(konst_1286,1);\
bit_vector_clear(&konst_1286);\
__declare_static_bit_vector(MUX_1287,1);\
__declare_static_bit_vector(konst_1289,3);\
bit_vector_clear(&konst_1289);\
konst_1289.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1290,1);\
__declare_static_bit_vector(konst_1292,1);\
bit_vector_clear(&konst_1292);\
__declare_static_bit_vector(MUX_1293,1);\
__declare_static_bit_vector(OR_u1_u1_1294,1);\
__declare_static_bit_vector(OR_u1_u1_1295,1);\
bit_vector_clear(&konst_1270);\
konst_1270.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1270), &(EQ_u3_u1_1271));\
if (has_undefined_bit(&EQ_u3_u1_1271)) {fprintf(stderr, "Error: variable EQ_u3_u1_1271 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1271));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1271)){bit_vector_cast_to_bit_vector(0, &(MUX_1274), &(p1_valid));\
}else {bit_vector_clear(&konst_1273);\
bit_vector_cast_to_bit_vector(0, &(MUX_1274), &(konst_1273));\
}bit_vector_clear(&konst_1276);\
konst_1276.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1276), &(EQ_u3_u1_1277));\
if (has_undefined_bit(&EQ_u3_u1_1277)) {fprintf(stderr, "Error: variable EQ_u3_u1_1277 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1277));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1277)){bit_vector_cast_to_bit_vector(0, &(MUX_1280), &(p2_valid));\
}else {bit_vector_clear(&konst_1279);\
bit_vector_cast_to_bit_vector(0, &(MUX_1280), &(konst_1279));\
}bit_vector_or(&(MUX_1274), &(MUX_1280), &(OR_u1_u1_1281));\
bit_vector_clear(&konst_1283);\
konst_1283.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1283), &(EQ_u3_u1_1284));\
if (has_undefined_bit(&EQ_u3_u1_1284)) {fprintf(stderr, "Error: variable EQ_u3_u1_1284 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1284));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1284)){bit_vector_cast_to_bit_vector(0, &(MUX_1287), &(p3_valid));\
}else {bit_vector_clear(&konst_1286);\
bit_vector_cast_to_bit_vector(0, &(MUX_1287), &(konst_1286));\
}bit_vector_clear(&konst_1289);\
konst_1289.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1289), &(EQ_u3_u1_1290));\
if (has_undefined_bit(&EQ_u3_u1_1290)) {fprintf(stderr, "Error: variable EQ_u3_u1_1290 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1290));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1290)){bit_vector_cast_to_bit_vector(0, &(MUX_1293), &(p4_valid));\
}else {bit_vector_clear(&konst_1292);\
bit_vector_cast_to_bit_vector(0, &(MUX_1293), &(konst_1292));\
}bit_vector_or(&(MUX_1287), &(MUX_1293), &(OR_u1_u1_1294));\
bit_vector_or(&(OR_u1_u1_1281), &(OR_u1_u1_1294), &(OR_u1_u1_1295));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1295));\
;

#define _outputPort_3_Daemon_call_stmt_1306_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_with_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_with_priority));\
;

#define _outputPort_3_Daemon_assign_stmt_1339_c_macro_ __declare_static_bit_vector(konst_1309,3);\
bit_vector_clear(&konst_1309);\
konst_1309.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1310,1);\
__declare_static_bit_vector(slice_1312,16);\
__declare_static_bit_vector(konst_1313,16);\
bit_vector_clear(&konst_1313);\
__declare_static_bit_vector(MUX_1314,16);\
__declare_static_bit_vector(konst_1316,3);\
bit_vector_clear(&konst_1316);\
konst_1316.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1317,1);\
__declare_static_bit_vector(slice_1319,16);\
__declare_static_bit_vector(konst_1320,16);\
bit_vector_clear(&konst_1320);\
__declare_static_bit_vector(MUX_1321,16);\
__declare_static_bit_vector(OR_u16_u16_1322,16);\
__declare_static_bit_vector(konst_1324,3);\
bit_vector_clear(&konst_1324);\
konst_1324.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1325,1);\
__declare_static_bit_vector(slice_1327,16);\
__declare_static_bit_vector(konst_1328,16);\
bit_vector_clear(&konst_1328);\
__declare_static_bit_vector(MUX_1329,16);\
__declare_static_bit_vector(konst_1331,3);\
bit_vector_clear(&konst_1331);\
konst_1331.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1332,1);\
__declare_static_bit_vector(slice_1334,16);\
__declare_static_bit_vector(konst_1335,16);\
bit_vector_clear(&konst_1335);\
__declare_static_bit_vector(MUX_1336,16);\
__declare_static_bit_vector(OR_u16_u16_1337,16);\
__declare_static_bit_vector(OR_u16_u16_1338,16);\
bit_vector_clear(&konst_1309);\
konst_1309.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1309), &(EQ_u3_u1_1310));\
if (has_undefined_bit(&EQ_u3_u1_1310)) {fprintf(stderr, "Error: variable EQ_u3_u1_1310 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1310));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1310)){bit_vector_slice(&(pkt_1_e_word), &(slice_1312), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1314), &(slice_1312));\
}else {bit_vector_clear(&konst_1313);\
bit_vector_cast_to_bit_vector(0, &(MUX_1314), &(konst_1313));\
}bit_vector_clear(&konst_1316);\
konst_1316.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1316), &(EQ_u3_u1_1317));\
if (has_undefined_bit(&EQ_u3_u1_1317)) {fprintf(stderr, "Error: variable EQ_u3_u1_1317 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1317));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1317)){bit_vector_slice(&(pkt_2_e_word), &(slice_1319), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1321), &(slice_1319));\
}else {bit_vector_clear(&konst_1320);\
bit_vector_cast_to_bit_vector(0, &(MUX_1321), &(konst_1320));\
}bit_vector_or(&(MUX_1314), &(MUX_1321), &(OR_u16_u16_1322));\
bit_vector_clear(&konst_1324);\
konst_1324.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1324), &(EQ_u3_u1_1325));\
if (has_undefined_bit(&EQ_u3_u1_1325)) {fprintf(stderr, "Error: variable EQ_u3_u1_1325 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1325));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1325)){bit_vector_slice(&(pkt_3_e_word), &(slice_1327), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1329), &(slice_1327));\
}else {bit_vector_clear(&konst_1328);\
bit_vector_cast_to_bit_vector(0, &(MUX_1329), &(konst_1328));\
}bit_vector_clear(&konst_1331);\
konst_1331.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1331), &(EQ_u3_u1_1332));\
if (has_undefined_bit(&EQ_u3_u1_1332)) {fprintf(stderr, "Error: variable EQ_u3_u1_1332 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1332));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1332)){bit_vector_slice(&(pkt_4_e_word), &(slice_1334), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1336), &(slice_1334));\
}else {bit_vector_clear(&konst_1335);\
bit_vector_cast_to_bit_vector(0, &(MUX_1336), &(konst_1335));\
}bit_vector_or(&(MUX_1329), &(MUX_1336), &(OR_u16_u16_1337));\
bit_vector_or(&(OR_u16_u16_1322), &(OR_u16_u16_1337), &(OR_u16_u16_1338));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_length), &(OR_u16_u16_1338));\
;

#define _outputPort_3_Daemon_assign_stmt_1348_c_macro_ __declare_static_bit_vector(konst_1342,3);\
bit_vector_clear(&konst_1342);\
__declare_static_bit_vector(NEQ_u3_u1_1343,1);\
__declare_static_bit_vector(konst_1345,16);\
bit_vector_clear(&konst_1345);\
__declare_static_bit_vector(EQ_u16_u1_1346,1);\
__declare_static_bit_vector(AND_u1_u1_1347,1);\
bit_vector_clear(&konst_1342);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1342), &NEQ_u3_u1_1343);\
bit_vector_clear(&konst_1345);\
bit_vector_equal(0, &(down_counter), &(konst_1345), &(EQ_u16_u1_1346));\
bit_vector_and(&(NEQ_u3_u1_1343), &(EQ_u16_u1_1346), &(AND_u1_u1_1347));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1347));\
;

#define _outputPort_3_Daemon_assign_stmt_1361_c_macro_ __declare_static_bit_vector(konst_1352,16);\
bit_vector_clear(&konst_1352);\
konst_1352.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1353,16);\
__declare_static_bit_vector(konst_1356,16);\
bit_vector_clear(&konst_1356);\
konst_1356.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1357,16);\
__declare_static_bit_vector(MUX_1359,16);\
__declare_static_bit_vector(MUX_1360,16);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1352);\
konst_1352.val.byte_array[0] = 1;\
bit_vector_minus( &(valid_active_pkt_length), &(konst_1352), &(SUB_u16_u16_1353));\
bit_vector_cast_to_bit_vector(0, &(MUX_1360), &(SUB_u16_u16_1353));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1356);\
konst_1356.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1356), &(SUB_u16_u16_1357));\
bit_vector_cast_to_bit_vector(0, &(MUX_1359), &(SUB_u16_u16_1357));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1359), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1360), &(MUX_1359));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1360));\
;

#define _outputPort_3_Daemon_assign_stmt_1369_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1364,1);\
__declare_static_bit_vector(konst_1366,3);\
bit_vector_clear(&konst_1366);\
konst_1366.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1367,1);\
__declare_static_bit_vector(OR_u1_u1_1368,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1364));\
bit_vector_clear(&konst_1366);\
konst_1366.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1366), &(EQ_u3_u1_1367));\
bit_vector_or(&(NOT_u1_u1_1364), &(EQ_u3_u1_1367), &(OR_u1_u1_1368));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1368));\
;

#define _outputPort_3_Daemon_assign_stmt_1377_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1372,1);\
__declare_static_bit_vector(konst_1374,3);\
bit_vector_clear(&konst_1374);\
konst_1374.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1375,1);\
__declare_static_bit_vector(OR_u1_u1_1376,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1372));\
bit_vector_clear(&konst_1374);\
konst_1374.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1374), &(EQ_u3_u1_1375));\
bit_vector_or(&(NOT_u1_u1_1372), &(EQ_u3_u1_1375), &(OR_u1_u1_1376));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1376));\
;

#define _outputPort_3_Daemon_assign_stmt_1385_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1380,1);\
__declare_static_bit_vector(konst_1382,3);\
bit_vector_clear(&konst_1382);\
konst_1382.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1383,1);\
__declare_static_bit_vector(OR_u1_u1_1384,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1380));\
bit_vector_clear(&konst_1382);\
konst_1382.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1382), &(EQ_u3_u1_1383));\
bit_vector_or(&(NOT_u1_u1_1380), &(EQ_u3_u1_1383), &(OR_u1_u1_1384));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1384));\
;

#define _outputPort_3_Daemon_assign_stmt_1393_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1388,1);\
__declare_static_bit_vector(konst_1390,3);\
bit_vector_clear(&konst_1390);\
konst_1390.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1391,1);\
__declare_static_bit_vector(OR_u1_u1_1392,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1388));\
bit_vector_clear(&konst_1390);\
konst_1390.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1390), &(EQ_u3_u1_1391));\
bit_vector_or(&(NOT_u1_u1_1388), &(EQ_u3_u1_1391), &(OR_u1_u1_1392));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1392));\
;

#define _outputPort_3_Daemon_assign_stmt_1415_c_macro_ __declare_static_bit_vector(konst_1396,3);\
bit_vector_clear(&konst_1396);\
konst_1396.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1397,1);\
__declare_static_bit_vector(slice_1399,32);\
__declare_static_bit_vector(konst_1401,3);\
bit_vector_clear(&konst_1401);\
konst_1401.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1402,1);\
__declare_static_bit_vector(slice_1404,32);\
__declare_static_bit_vector(konst_1406,3);\
bit_vector_clear(&konst_1406);\
konst_1406.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1407,1);\
__declare_static_bit_vector(slice_1409,32);\
__declare_static_bit_vector(slice_1411,32);\
__declare_static_bit_vector(MUX_1412,32);\
__declare_static_bit_vector(MUX_1413,32);\
__declare_static_bit_vector(MUX_1414,32);\
bit_vector_clear(&konst_1396);\
konst_1396.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1396), &(EQ_u3_u1_1397));\
if (has_undefined_bit(&EQ_u3_u1_1397)) {fprintf(stderr, "Error: variable EQ_u3_u1_1397 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1397));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1397)){bit_vector_slice(&(pkt_1_e_word), &(slice_1399), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1414), &(slice_1399));\
}else {bit_vector_clear(&konst_1401);\
konst_1401.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1401), &(EQ_u3_u1_1402));\
if (has_undefined_bit(&EQ_u3_u1_1402)) {fprintf(stderr, "Error: variable EQ_u3_u1_1402 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1402));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1402)){bit_vector_slice(&(pkt_2_e_word), &(slice_1404), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1413), &(slice_1404));\
}else {bit_vector_clear(&konst_1406);\
konst_1406.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1406), &(EQ_u3_u1_1407));\
if (has_undefined_bit(&EQ_u3_u1_1407)) {fprintf(stderr, "Error: variable EQ_u3_u1_1407 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1407));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1407)){bit_vector_slice(&(pkt_3_e_word), &(slice_1409), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1412), &(slice_1409));\
}else {bit_vector_slice(&(pkt_4_e_word), &(slice_1411), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1412), &(slice_1411));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1413), &(MUX_1412));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1414), &(MUX_1413));\
}bit_vector_cast_to_bit_vector(0, &(data_to_out), &(MUX_1414));\
;

#define _outputPort_3_Daemon_assign_stmt_1444_c_macro_ __declare_static_bit_vector(konst_1418,3);\
bit_vector_clear(&konst_1418);\
konst_1418.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1419,1);\
__declare_static_bit_vector(konst_1421,1);\
bit_vector_clear(&konst_1421);\
__declare_static_bit_vector(MUX_1422,1);\
__declare_static_bit_vector(konst_1424,3);\
bit_vector_clear(&konst_1424);\
konst_1424.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1425,1);\
__declare_static_bit_vector(konst_1427,1);\
bit_vector_clear(&konst_1427);\
__declare_static_bit_vector(MUX_1428,1);\
__declare_static_bit_vector(OR_u1_u1_1429,1);\
__declare_static_bit_vector(konst_1431,3);\
bit_vector_clear(&konst_1431);\
konst_1431.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1432,1);\
__declare_static_bit_vector(konst_1434,1);\
bit_vector_clear(&konst_1434);\
__declare_static_bit_vector(MUX_1435,1);\
__declare_static_bit_vector(konst_1437,3);\
bit_vector_clear(&konst_1437);\
konst_1437.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1438,1);\
__declare_static_bit_vector(konst_1440,1);\
bit_vector_clear(&konst_1440);\
__declare_static_bit_vector(MUX_1441,1);\
__declare_static_bit_vector(OR_u1_u1_1442,1);\
__declare_static_bit_vector(OR_u1_u1_1443,1);\
bit_vector_clear(&konst_1418);\
konst_1418.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1418), &(EQ_u3_u1_1419));\
if (has_undefined_bit(&EQ_u3_u1_1419)) {fprintf(stderr, "Error: variable EQ_u3_u1_1419 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1419));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1419)){bit_vector_cast_to_bit_vector(0, &(MUX_1422), &(p1_valid));\
}else {bit_vector_clear(&konst_1421);\
bit_vector_cast_to_bit_vector(0, &(MUX_1422), &(konst_1421));\
}bit_vector_clear(&konst_1424);\
konst_1424.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1424), &(EQ_u3_u1_1425));\
if (has_undefined_bit(&EQ_u3_u1_1425)) {fprintf(stderr, "Error: variable EQ_u3_u1_1425 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1425));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1425)){bit_vector_cast_to_bit_vector(0, &(MUX_1428), &(p2_valid));\
}else {bit_vector_clear(&konst_1427);\
bit_vector_cast_to_bit_vector(0, &(MUX_1428), &(konst_1427));\
}bit_vector_or(&(MUX_1422), &(MUX_1428), &(OR_u1_u1_1429));\
bit_vector_clear(&konst_1431);\
konst_1431.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1431), &(EQ_u3_u1_1432));\
if (has_undefined_bit(&EQ_u3_u1_1432)) {fprintf(stderr, "Error: variable EQ_u3_u1_1432 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1432));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1432)){bit_vector_cast_to_bit_vector(0, &(MUX_1435), &(p3_valid));\
}else {bit_vector_clear(&konst_1434);\
bit_vector_cast_to_bit_vector(0, &(MUX_1435), &(konst_1434));\
}bit_vector_clear(&konst_1437);\
konst_1437.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1437), &(EQ_u3_u1_1438));\
if (has_undefined_bit(&EQ_u3_u1_1438)) {fprintf(stderr, "Error: variable EQ_u3_u1_1438 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1438));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1438)){bit_vector_cast_to_bit_vector(0, &(MUX_1441), &(p4_valid));\
}else {bit_vector_clear(&konst_1440);\
bit_vector_cast_to_bit_vector(0, &(MUX_1441), &(konst_1440));\
}bit_vector_or(&(MUX_1435), &(MUX_1441), &(OR_u1_u1_1442));\
bit_vector_or(&(OR_u1_u1_1429), &(OR_u1_u1_1442), &(OR_u1_u1_1443));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1443));\
;

#define _outputPort_3_Daemon_assign_stmt_1448_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_3",&(data_to_out));\
}
;

#define _outputPort_3_Daemon_stmt_1457_c_macro_ uint32_t _outputPort_3_Daemon_stmt_1457_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t%s\n",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"send_information");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"next_pkt_with_priority");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_pkt_with_priority)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"send_flag");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_flag)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_3_Daemon>\t\t%s\t\t",_outputPort_3_Daemon_stmt_1457_c_macro___print_counter,"data_to_out");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_out)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _outputPort_3_Daemon_branch_block_stmt_1200_c_export_apply_macro_ ;

#define _outputPort_3_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_3_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_3_Daemon_outer_op_xfer_macro__ ;

#define _outputPort_4_Daemon_inner_inarg_prep_macro__ 
#define _outputPort_4_Daemon_branch_block_stmt_1463_c_export_decl_macro_ __declare_static_bit_vector(pkt_1_e_word,33);\
__declare_static_bit_vector(pkt_2_e_word,33);\
__declare_static_bit_vector(pkt_3_e_word,33);\
__declare_static_bit_vector(pkt_4_e_word,33);\
__declare_static_bit_vector(active_packet,3);\
__declare_static_bit_vector(down_counter,16);\
__declare_static_bit_vector(pkt_with_priority,3);\
__declare_static_bit_vector(p1_valid,1);\
__declare_static_bit_vector(p2_valid,1);\
__declare_static_bit_vector(p3_valid,1);\
__declare_static_bit_vector(p4_valid,1);\
__declare_static_bit_vector(valid_active_pkt_word_read,1);\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_with_priority,3);\
__declare_static_bit_vector(valid_active_pkt_length,16);\
__declare_static_bit_vector(started_new_packet,1);\
__declare_static_bit_vector(next_down_counter,16);\
__declare_static_bit_vector(read_from_1,1);\
__declare_static_bit_vector(read_from_2,1);\
__declare_static_bit_vector(read_from_3,1);\
__declare_static_bit_vector(read_from_4,1);\
__declare_static_bit_vector(data_to_out,32);\
__declare_static_bit_vector(send_flag,1);\


#define _outputPort_4_Daemon_merge_stmt_1465_c_preamble_macro_ uint8_t merge_stmt_1465_entry_flag;\
merge_stmt_1465_entry_flag = do_while_entry_flag;\
goto merge_stmt_1465_run;\
merge_stmt_1465_run: ;\

#define _outputPort_4_Daemon_phi_stmt_1466_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_1_4_1470,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_1)) {\
read_bit_vector_from_pipe("noblock_obuf_1_4",&(RPIPE_noblock_obuf_1_4_1470));\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(RPIPE_noblock_obuf_1_4_1470));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_1_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1471_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_2_4_1475,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_2)) {\
read_bit_vector_from_pipe("noblock_obuf_2_4",&(RPIPE_noblock_obuf_2_4_1475));\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(RPIPE_noblock_obuf_2_4_1475));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_2_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1476_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_3_4_1480,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_3)) {\
read_bit_vector_from_pipe("noblock_obuf_3_4",&(RPIPE_noblock_obuf_3_4_1480));\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(RPIPE_noblock_obuf_3_4_1480));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_3_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1481_c_macro_ __declare_static_bit_vector(RPIPE_noblock_obuf_4_4_1485,33);\
if(do_while_loopback_flag) {\
if(bit_vector_to_uint64(0, &read_from_4)) {\
read_bit_vector_from_pipe("noblock_obuf_4_4",&(RPIPE_noblock_obuf_4_4_1485));\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(RPIPE_noblock_obuf_4_4_1485));\
}\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(pkt_4_e_word), &(ZERO_33));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1486_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(next_active_packet));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(active_packet), &(ZERO_3));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1490_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(next_down_counter));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(down_counter), &(ZERO_16));\
}\
;

#define _outputPort_4_Daemon_phi_stmt_1494_c_macro_ __declare_static_bit_vector(konst_1496,3);\
bit_vector_clear(&konst_1496);\
konst_1496.val.byte_array[0] = 1;\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &(next_pkt_with_priority));\
}\
else {\
__declare_static_bit_vector(konst_1496,3);\
bit_vector_clear(&konst_1496);\
konst_1496.val.byte_array[0] = 1;\
bit_vector_clear(&konst_1496);\
konst_1496.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &(konst_1496));\
}\
;
;

#define _outputPort_4_Daemon_merge_stmt_1465_c_postamble_macro_ merge_stmt_1465_entry_flag = 0;

#define _outputPort_4_Daemon_assign_stmt_1503_c_macro_ __declare_static_bit_vector(konst_1501,33);\
bit_vector_clear(&konst_1501);\
konst_1501.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1502,1);\
bit_vector_clear(&konst_1501);\
konst_1501.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_1_e_word), &(konst_1501), &(BITSEL_u33_u1_1502));\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &(BITSEL_u33_u1_1502));\
;

#define _outputPort_4_Daemon_assign_stmt_1508_c_macro_ __declare_static_bit_vector(konst_1506,33);\
bit_vector_clear(&konst_1506);\
konst_1506.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1507,1);\
bit_vector_clear(&konst_1506);\
konst_1506.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_2_e_word), &(konst_1506), &(BITSEL_u33_u1_1507));\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &(BITSEL_u33_u1_1507));\
;

#define _outputPort_4_Daemon_assign_stmt_1513_c_macro_ __declare_static_bit_vector(konst_1511,33);\
bit_vector_clear(&konst_1511);\
konst_1511.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1512,1);\
bit_vector_clear(&konst_1511);\
konst_1511.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_3_e_word), &(konst_1511), &(BITSEL_u33_u1_1512));\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &(BITSEL_u33_u1_1512));\
;

#define _outputPort_4_Daemon_assign_stmt_1518_c_macro_ __declare_static_bit_vector(konst_1516,33);\
bit_vector_clear(&konst_1516);\
konst_1516.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_1517,1);\
bit_vector_clear(&konst_1516);\
konst_1516.val.byte_array[0] = 32;\
bit_vector_bitsel( &(pkt_4_e_word), &(konst_1516), &(BITSEL_u33_u1_1517));\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &(BITSEL_u33_u1_1517));\
;

#define _outputPort_4_Daemon_stmt_1530_c_macro_ uint32_t _outputPort_4_Daemon_stmt_1530_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t%s\n",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"state_summary");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"down_counter");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(down_counter)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"pkt_with_priority");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_with_priority)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"read_from_1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"pkt_1_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_1_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"read_from_2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"pkt_2_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_2_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"read_from_3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_3)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"pkt_3_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_3_e_word)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"read_from_4");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(read_from_4)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1530_c_macro___print_counter,"pkt_4_e_word");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(pkt_4_e_word)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _outputPort_4_Daemon_assign_stmt_1559_c_macro_ __declare_static_bit_vector(konst_1533,3);\
bit_vector_clear(&konst_1533);\
konst_1533.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1534,1);\
__declare_static_bit_vector(konst_1536,1);\
bit_vector_clear(&konst_1536);\
__declare_static_bit_vector(MUX_1537,1);\
__declare_static_bit_vector(konst_1539,3);\
bit_vector_clear(&konst_1539);\
konst_1539.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1540,1);\
__declare_static_bit_vector(konst_1542,1);\
bit_vector_clear(&konst_1542);\
__declare_static_bit_vector(MUX_1543,1);\
__declare_static_bit_vector(OR_u1_u1_1544,1);\
__declare_static_bit_vector(konst_1546,3);\
bit_vector_clear(&konst_1546);\
konst_1546.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1547,1);\
__declare_static_bit_vector(konst_1549,1);\
bit_vector_clear(&konst_1549);\
__declare_static_bit_vector(MUX_1550,1);\
__declare_static_bit_vector(konst_1552,3);\
bit_vector_clear(&konst_1552);\
konst_1552.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1553,1);\
__declare_static_bit_vector(konst_1555,1);\
bit_vector_clear(&konst_1555);\
__declare_static_bit_vector(MUX_1556,1);\
__declare_static_bit_vector(OR_u1_u1_1557,1);\
__declare_static_bit_vector(OR_u1_u1_1558,1);\
bit_vector_clear(&konst_1533);\
konst_1533.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_1533), &(EQ_u3_u1_1534));\
if (has_undefined_bit(&EQ_u3_u1_1534)) {fprintf(stderr, "Error: variable EQ_u3_u1_1534 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1534));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1534)){bit_vector_cast_to_bit_vector(0, &(MUX_1537), &(p1_valid));\
}else {bit_vector_clear(&konst_1536);\
bit_vector_cast_to_bit_vector(0, &(MUX_1537), &(konst_1536));\
}bit_vector_clear(&konst_1539);\
konst_1539.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_1539), &(EQ_u3_u1_1540));\
if (has_undefined_bit(&EQ_u3_u1_1540)) {fprintf(stderr, "Error: variable EQ_u3_u1_1540 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1540));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1540)){bit_vector_cast_to_bit_vector(0, &(MUX_1543), &(p2_valid));\
}else {bit_vector_clear(&konst_1542);\
bit_vector_cast_to_bit_vector(0, &(MUX_1543), &(konst_1542));\
}bit_vector_or(&(MUX_1537), &(MUX_1543), &(OR_u1_u1_1544));\
bit_vector_clear(&konst_1546);\
konst_1546.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_1546), &(EQ_u3_u1_1547));\
if (has_undefined_bit(&EQ_u3_u1_1547)) {fprintf(stderr, "Error: variable EQ_u3_u1_1547 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1547));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1547)){bit_vector_cast_to_bit_vector(0, &(MUX_1550), &(p3_valid));\
}else {bit_vector_clear(&konst_1549);\
bit_vector_cast_to_bit_vector(0, &(MUX_1550), &(konst_1549));\
}bit_vector_clear(&konst_1552);\
konst_1552.val.byte_array[0] = 4;\
bit_vector_equal(0, &(active_packet), &(konst_1552), &(EQ_u3_u1_1553));\
if (has_undefined_bit(&EQ_u3_u1_1553)) {fprintf(stderr, "Error: variable EQ_u3_u1_1553 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1553));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1553)){bit_vector_cast_to_bit_vector(0, &(MUX_1556), &(p4_valid));\
}else {bit_vector_clear(&konst_1555);\
bit_vector_cast_to_bit_vector(0, &(MUX_1556), &(konst_1555));\
}bit_vector_or(&(MUX_1550), &(MUX_1556), &(OR_u1_u1_1557));\
bit_vector_or(&(OR_u1_u1_1544), &(OR_u1_u1_1557), &(OR_u1_u1_1558));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_word_read), &(OR_u1_u1_1558));\
;

#define _outputPort_4_Daemon_call_stmt_1569_c_macro_ _prioritySelect_( &(down_counter),  &(active_packet),  &(pkt_with_priority),  &(p1_valid),  &(p2_valid),  &(p3_valid),  &(p4_valid), &(next_active_packet), &(next_pkt_with_priority));\
;

#define _outputPort_4_Daemon_assign_stmt_1602_c_macro_ __declare_static_bit_vector(konst_1572,3);\
bit_vector_clear(&konst_1572);\
konst_1572.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1573,1);\
__declare_static_bit_vector(slice_1575,16);\
__declare_static_bit_vector(konst_1576,16);\
bit_vector_clear(&konst_1576);\
__declare_static_bit_vector(MUX_1577,16);\
__declare_static_bit_vector(konst_1579,3);\
bit_vector_clear(&konst_1579);\
konst_1579.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1580,1);\
__declare_static_bit_vector(slice_1582,16);\
__declare_static_bit_vector(konst_1583,16);\
bit_vector_clear(&konst_1583);\
__declare_static_bit_vector(MUX_1584,16);\
__declare_static_bit_vector(OR_u16_u16_1585,16);\
__declare_static_bit_vector(konst_1587,3);\
bit_vector_clear(&konst_1587);\
konst_1587.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1588,1);\
__declare_static_bit_vector(slice_1590,16);\
__declare_static_bit_vector(konst_1591,16);\
bit_vector_clear(&konst_1591);\
__declare_static_bit_vector(MUX_1592,16);\
__declare_static_bit_vector(konst_1594,3);\
bit_vector_clear(&konst_1594);\
konst_1594.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1595,1);\
__declare_static_bit_vector(slice_1597,16);\
__declare_static_bit_vector(konst_1598,16);\
bit_vector_clear(&konst_1598);\
__declare_static_bit_vector(MUX_1599,16);\
__declare_static_bit_vector(OR_u16_u16_1600,16);\
__declare_static_bit_vector(OR_u16_u16_1601,16);\
bit_vector_clear(&konst_1572);\
konst_1572.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1572), &(EQ_u3_u1_1573));\
if (has_undefined_bit(&EQ_u3_u1_1573)) {fprintf(stderr, "Error: variable EQ_u3_u1_1573 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1573));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1573)){bit_vector_slice(&(pkt_1_e_word), &(slice_1575), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1577), &(slice_1575));\
}else {bit_vector_clear(&konst_1576);\
bit_vector_cast_to_bit_vector(0, &(MUX_1577), &(konst_1576));\
}bit_vector_clear(&konst_1579);\
konst_1579.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1579), &(EQ_u3_u1_1580));\
if (has_undefined_bit(&EQ_u3_u1_1580)) {fprintf(stderr, "Error: variable EQ_u3_u1_1580 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1580));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1580)){bit_vector_slice(&(pkt_2_e_word), &(slice_1582), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1584), &(slice_1582));\
}else {bit_vector_clear(&konst_1583);\
bit_vector_cast_to_bit_vector(0, &(MUX_1584), &(konst_1583));\
}bit_vector_or(&(MUX_1577), &(MUX_1584), &(OR_u16_u16_1585));\
bit_vector_clear(&konst_1587);\
konst_1587.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1587), &(EQ_u3_u1_1588));\
if (has_undefined_bit(&EQ_u3_u1_1588)) {fprintf(stderr, "Error: variable EQ_u3_u1_1588 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1588));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1588)){bit_vector_slice(&(pkt_3_e_word), &(slice_1590), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1592), &(slice_1590));\
}else {bit_vector_clear(&konst_1591);\
bit_vector_cast_to_bit_vector(0, &(MUX_1592), &(konst_1591));\
}bit_vector_clear(&konst_1594);\
konst_1594.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1594), &(EQ_u3_u1_1595));\
if (has_undefined_bit(&EQ_u3_u1_1595)) {fprintf(stderr, "Error: variable EQ_u3_u1_1595 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1595));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1595)){bit_vector_slice(&(pkt_4_e_word), &(slice_1597), 8);\
bit_vector_cast_to_bit_vector(0, &(MUX_1599), &(slice_1597));\
}else {bit_vector_clear(&konst_1598);\
bit_vector_cast_to_bit_vector(0, &(MUX_1599), &(konst_1598));\
}bit_vector_or(&(MUX_1592), &(MUX_1599), &(OR_u16_u16_1600));\
bit_vector_or(&(OR_u16_u16_1585), &(OR_u16_u16_1600), &(OR_u16_u16_1601));\
bit_vector_cast_to_bit_vector(0, &(valid_active_pkt_length), &(OR_u16_u16_1601));\
;

#define _outputPort_4_Daemon_assign_stmt_1611_c_macro_ __declare_static_bit_vector(konst_1605,3);\
bit_vector_clear(&konst_1605);\
__declare_static_bit_vector(NEQ_u3_u1_1606,1);\
__declare_static_bit_vector(konst_1608,16);\
bit_vector_clear(&konst_1608);\
__declare_static_bit_vector(EQ_u16_u1_1609,1);\
__declare_static_bit_vector(AND_u1_u1_1610,1);\
bit_vector_clear(&konst_1605);\
bit_vector_not_equal(0, &(next_active_packet), &(konst_1605), &NEQ_u3_u1_1606);\
bit_vector_clear(&konst_1608);\
bit_vector_equal(0, &(down_counter), &(konst_1608), &(EQ_u16_u1_1609));\
bit_vector_and(&(NEQ_u3_u1_1606), &(EQ_u16_u1_1609), &(AND_u1_u1_1610));\
bit_vector_cast_to_bit_vector(0, &(started_new_packet), &(AND_u1_u1_1610));\
;

#define _outputPort_4_Daemon_assign_stmt_1624_c_macro_ __declare_static_bit_vector(konst_1615,16);\
bit_vector_clear(&konst_1615);\
konst_1615.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1616,16);\
__declare_static_bit_vector(konst_1619,16);\
bit_vector_clear(&konst_1619);\
konst_1619.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_1620,16);\
__declare_static_bit_vector(MUX_1622,16);\
__declare_static_bit_vector(MUX_1623,16);\
if (has_undefined_bit(&started_new_packet)) {fprintf(stderr, "Error: variable started_new_packet has undefined value (%s) at test point.\n", to_string(&started_new_packet));assert(0);} \
if(bit_vector_to_uint64(0, &started_new_packet)){bit_vector_clear(&konst_1615);\
konst_1615.val.byte_array[0] = 1;\
bit_vector_minus( &(valid_active_pkt_length), &(konst_1615), &(SUB_u16_u16_1616));\
bit_vector_cast_to_bit_vector(0, &(MUX_1623), &(SUB_u16_u16_1616));\
}else {if (has_undefined_bit(&valid_active_pkt_word_read)) {fprintf(stderr, "Error: variable valid_active_pkt_word_read has undefined value (%s) at test point.\n", to_string(&valid_active_pkt_word_read));assert(0);} \
if(bit_vector_to_uint64(0, &valid_active_pkt_word_read)){bit_vector_clear(&konst_1619);\
konst_1619.val.byte_array[0] = 1;\
bit_vector_minus( &(down_counter), &(konst_1619), &(SUB_u16_u16_1620));\
bit_vector_cast_to_bit_vector(0, &(MUX_1622), &(SUB_u16_u16_1620));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1622), &(down_counter));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1623), &(MUX_1622));\
}bit_vector_cast_to_bit_vector(0, &(next_down_counter), &(MUX_1623));\
;

#define _outputPort_4_Daemon_assign_stmt_1632_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1627,1);\
__declare_static_bit_vector(konst_1629,3);\
bit_vector_clear(&konst_1629);\
konst_1629.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1630,1);\
__declare_static_bit_vector(OR_u1_u1_1631,1);\
bit_vector_not( &(p1_valid), &(NOT_u1_u1_1627));\
bit_vector_clear(&konst_1629);\
konst_1629.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1629), &(EQ_u3_u1_1630));\
bit_vector_or(&(NOT_u1_u1_1627), &(EQ_u3_u1_1630), &(OR_u1_u1_1631));\
bit_vector_cast_to_bit_vector(0, &(read_from_1), &(OR_u1_u1_1631));\
;

#define _outputPort_4_Daemon_assign_stmt_1640_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1635,1);\
__declare_static_bit_vector(konst_1637,3);\
bit_vector_clear(&konst_1637);\
konst_1637.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1638,1);\
__declare_static_bit_vector(OR_u1_u1_1639,1);\
bit_vector_not( &(p2_valid), &(NOT_u1_u1_1635));\
bit_vector_clear(&konst_1637);\
konst_1637.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1637), &(EQ_u3_u1_1638));\
bit_vector_or(&(NOT_u1_u1_1635), &(EQ_u3_u1_1638), &(OR_u1_u1_1639));\
bit_vector_cast_to_bit_vector(0, &(read_from_2), &(OR_u1_u1_1639));\
;

#define _outputPort_4_Daemon_assign_stmt_1648_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1643,1);\
__declare_static_bit_vector(konst_1645,3);\
bit_vector_clear(&konst_1645);\
konst_1645.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1646,1);\
__declare_static_bit_vector(OR_u1_u1_1647,1);\
bit_vector_not( &(p3_valid), &(NOT_u1_u1_1643));\
bit_vector_clear(&konst_1645);\
konst_1645.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1645), &(EQ_u3_u1_1646));\
bit_vector_or(&(NOT_u1_u1_1643), &(EQ_u3_u1_1646), &(OR_u1_u1_1647));\
bit_vector_cast_to_bit_vector(0, &(read_from_3), &(OR_u1_u1_1647));\
;

#define _outputPort_4_Daemon_assign_stmt_1656_c_macro_ __declare_static_bit_vector(NOT_u1_u1_1651,1);\
__declare_static_bit_vector(konst_1653,3);\
bit_vector_clear(&konst_1653);\
konst_1653.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1654,1);\
__declare_static_bit_vector(OR_u1_u1_1655,1);\
bit_vector_not( &(p4_valid), &(NOT_u1_u1_1651));\
bit_vector_clear(&konst_1653);\
konst_1653.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1653), &(EQ_u3_u1_1654));\
bit_vector_or(&(NOT_u1_u1_1651), &(EQ_u3_u1_1654), &(OR_u1_u1_1655));\
bit_vector_cast_to_bit_vector(0, &(read_from_4), &(OR_u1_u1_1655));\
;

#define _outputPort_4_Daemon_assign_stmt_1678_c_macro_ __declare_static_bit_vector(konst_1659,3);\
bit_vector_clear(&konst_1659);\
konst_1659.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1660,1);\
__declare_static_bit_vector(slice_1662,32);\
__declare_static_bit_vector(konst_1664,3);\
bit_vector_clear(&konst_1664);\
konst_1664.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1665,1);\
__declare_static_bit_vector(slice_1667,32);\
__declare_static_bit_vector(konst_1669,3);\
bit_vector_clear(&konst_1669);\
konst_1669.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1670,1);\
__declare_static_bit_vector(slice_1672,32);\
__declare_static_bit_vector(slice_1674,32);\
__declare_static_bit_vector(MUX_1675,32);\
__declare_static_bit_vector(MUX_1676,32);\
__declare_static_bit_vector(MUX_1677,32);\
bit_vector_clear(&konst_1659);\
konst_1659.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1659), &(EQ_u3_u1_1660));\
if (has_undefined_bit(&EQ_u3_u1_1660)) {fprintf(stderr, "Error: variable EQ_u3_u1_1660 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1660));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1660)){bit_vector_slice(&(pkt_1_e_word), &(slice_1662), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1677), &(slice_1662));\
}else {bit_vector_clear(&konst_1664);\
konst_1664.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1664), &(EQ_u3_u1_1665));\
if (has_undefined_bit(&EQ_u3_u1_1665)) {fprintf(stderr, "Error: variable EQ_u3_u1_1665 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1665));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1665)){bit_vector_slice(&(pkt_2_e_word), &(slice_1667), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1676), &(slice_1667));\
}else {bit_vector_clear(&konst_1669);\
konst_1669.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1669), &(EQ_u3_u1_1670));\
if (has_undefined_bit(&EQ_u3_u1_1670)) {fprintf(stderr, "Error: variable EQ_u3_u1_1670 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1670));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1670)){bit_vector_slice(&(pkt_3_e_word), &(slice_1672), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1675), &(slice_1672));\
}else {bit_vector_slice(&(pkt_4_e_word), &(slice_1674), 0);\
bit_vector_cast_to_bit_vector(0, &(MUX_1675), &(slice_1674));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1676), &(MUX_1675));\
}bit_vector_cast_to_bit_vector(0, &(MUX_1677), &(MUX_1676));\
}bit_vector_cast_to_bit_vector(0, &(data_to_out), &(MUX_1677));\
;

#define _outputPort_4_Daemon_assign_stmt_1707_c_macro_ __declare_static_bit_vector(konst_1681,3);\
bit_vector_clear(&konst_1681);\
konst_1681.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_1682,1);\
__declare_static_bit_vector(konst_1684,1);\
bit_vector_clear(&konst_1684);\
__declare_static_bit_vector(MUX_1685,1);\
__declare_static_bit_vector(konst_1687,3);\
bit_vector_clear(&konst_1687);\
konst_1687.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_1688,1);\
__declare_static_bit_vector(konst_1690,1);\
bit_vector_clear(&konst_1690);\
__declare_static_bit_vector(MUX_1691,1);\
__declare_static_bit_vector(OR_u1_u1_1692,1);\
__declare_static_bit_vector(konst_1694,3);\
bit_vector_clear(&konst_1694);\
konst_1694.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_1695,1);\
__declare_static_bit_vector(konst_1697,1);\
bit_vector_clear(&konst_1697);\
__declare_static_bit_vector(MUX_1698,1);\
__declare_static_bit_vector(konst_1700,3);\
bit_vector_clear(&konst_1700);\
konst_1700.val.byte_array[0] = 4;\
__declare_static_bit_vector(EQ_u3_u1_1701,1);\
__declare_static_bit_vector(konst_1703,1);\
bit_vector_clear(&konst_1703);\
__declare_static_bit_vector(MUX_1704,1);\
__declare_static_bit_vector(OR_u1_u1_1705,1);\
__declare_static_bit_vector(OR_u1_u1_1706,1);\
bit_vector_clear(&konst_1681);\
konst_1681.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_1681), &(EQ_u3_u1_1682));\
if (has_undefined_bit(&EQ_u3_u1_1682)) {fprintf(stderr, "Error: variable EQ_u3_u1_1682 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1682));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1682)){bit_vector_cast_to_bit_vector(0, &(MUX_1685), &(p1_valid));\
}else {bit_vector_clear(&konst_1684);\
bit_vector_cast_to_bit_vector(0, &(MUX_1685), &(konst_1684));\
}bit_vector_clear(&konst_1687);\
konst_1687.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_1687), &(EQ_u3_u1_1688));\
if (has_undefined_bit(&EQ_u3_u1_1688)) {fprintf(stderr, "Error: variable EQ_u3_u1_1688 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1688));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1688)){bit_vector_cast_to_bit_vector(0, &(MUX_1691), &(p2_valid));\
}else {bit_vector_clear(&konst_1690);\
bit_vector_cast_to_bit_vector(0, &(MUX_1691), &(konst_1690));\
}bit_vector_or(&(MUX_1685), &(MUX_1691), &(OR_u1_u1_1692));\
bit_vector_clear(&konst_1694);\
konst_1694.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_1694), &(EQ_u3_u1_1695));\
if (has_undefined_bit(&EQ_u3_u1_1695)) {fprintf(stderr, "Error: variable EQ_u3_u1_1695 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1695));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1695)){bit_vector_cast_to_bit_vector(0, &(MUX_1698), &(p3_valid));\
}else {bit_vector_clear(&konst_1697);\
bit_vector_cast_to_bit_vector(0, &(MUX_1698), &(konst_1697));\
}bit_vector_clear(&konst_1700);\
konst_1700.val.byte_array[0] = 4;\
bit_vector_equal(0, &(next_active_packet), &(konst_1700), &(EQ_u3_u1_1701));\
if (has_undefined_bit(&EQ_u3_u1_1701)) {fprintf(stderr, "Error: variable EQ_u3_u1_1701 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_1701));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_1701)){bit_vector_cast_to_bit_vector(0, &(MUX_1704), &(p4_valid));\
}else {bit_vector_clear(&konst_1703);\
bit_vector_cast_to_bit_vector(0, &(MUX_1704), &(konst_1703));\
}bit_vector_or(&(MUX_1698), &(MUX_1704), &(OR_u1_u1_1705));\
bit_vector_or(&(OR_u1_u1_1692), &(OR_u1_u1_1705), &(OR_u1_u1_1706));\
bit_vector_cast_to_bit_vector(0, &(send_flag), &(OR_u1_u1_1706));\
;

#define _outputPort_4_Daemon_assign_stmt_1711_c_macro_ if (has_undefined_bit(&send_flag)) {fprintf(stderr, "Error: variable send_flag has undefined value (%s) at test point.\n", to_string(&send_flag));assert(0);} \
if (bit_vector_to_uint64(0, &send_flag)) {\
write_bit_vector_to_pipe("out_data_4",&(data_to_out));\
}
;

#define _outputPort_4_Daemon_stmt_1720_c_macro_ uint32_t _outputPort_4_Daemon_stmt_1720_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t%s\n",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"send_information");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"next_active_packet");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_active_packet)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"next_pkt_with_priority");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_pkt_with_priority)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"send_flag");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(send_flag)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"p1_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p1_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"p2_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p2_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"p3_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p3_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"p4_valid");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(p4_valid)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]outputPort_4_Daemon>\t\t%s\t\t",_outputPort_4_Daemon_stmt_1720_c_macro___print_counter,"data_to_out");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(data_to_out)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _outputPort_4_Daemon_branch_block_stmt_1463_c_export_apply_macro_ ;

#define _outputPort_4_Daemon_inner_outarg_prep_macro__ ;

#define _outputPort_4_Daemon_outer_arg_decl_macro__ ;

#define _outputPort_4_Daemon_outer_op_xfer_macro__ ;

#define _prioritySelect_inner_inarg_prep_macro__ __declare_static_bit_vector(down_counter,16);\
bit_vector_cast_to_bit_vector(0, &(down_counter), &((*__pdown_counter)));\
__declare_static_bit_vector(active_packet,3);\
bit_vector_cast_to_bit_vector(0, &(active_packet), &((*__pactive_packet)));\
__declare_static_bit_vector(pkt_with_priority,3);\
bit_vector_cast_to_bit_vector(0, &(pkt_with_priority), &((*__ppkt_with_priority)));\
__declare_static_bit_vector(p1_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p1_valid), &((*__pp1_valid)));\
__declare_static_bit_vector(p2_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p2_valid), &((*__pp2_valid)));\
__declare_static_bit_vector(p3_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p3_valid), &((*__pp3_valid)));\
__declare_static_bit_vector(p4_valid,1);\
bit_vector_cast_to_bit_vector(0, &(p4_valid), &((*__pp4_valid)));\
__declare_static_bit_vector(next_active_packet,3);\
__declare_static_bit_vector(next_pkt_with_priority,3);\
__declare_static_bit_vector(d0,1);\
__declare_static_bit_vector(check_pkt_4,1);\
__declare_static_bit_vector(pkt_with_priority_valid,1);\
__declare_static_bit_vector(active_packet_priority_valid,1);\
__declare_static_bit_vector(next_to_pkt_with_priority,3);\
__declare_static_bit_vector(next_to_pkt_with_priority_valid,1);\
__declare_static_bit_vector(last_pkt_with_priority,3);\
__declare_static_bit_vector(last_pkt_with_priority_valid,1);\
__declare_static_bit_vector(selected_packet,3);\

#define _prioritySelect_assign_stmt_512_c_macro_ __declare_static_bit_vector(konst_510,16);\
bit_vector_clear(&konst_510);\
__declare_static_bit_vector(EQ_u16_u1_511,1);\
bit_vector_clear(&konst_510);\
bit_vector_equal(0, &(down_counter), &(konst_510), &(EQ_u16_u1_511));\
bit_vector_cast_to_bit_vector(0, &(d0), &(EQ_u16_u1_511));\
;

#define _prioritySelect_assign_stmt_521_c_macro_ __declare_static_bit_vector(konst_516,3);\
bit_vector_clear(&konst_516);\
__declare_static_bit_vector(EQ_u3_u1_517,1);\
__declare_static_bit_vector(AND_u1_u1_518,1);\
__declare_static_bit_vector(AND_u1_u1_520,1);\
bit_vector_clear(&konst_516);\
bit_vector_equal(0, &(active_packet), &(konst_516), &(EQ_u3_u1_517));\
bit_vector_and(&(d0), &(EQ_u3_u1_517), &(AND_u1_u1_518));\
bit_vector_and(&(AND_u1_u1_518), &(p4_valid), &(AND_u1_u1_520));\
bit_vector_cast_to_bit_vector(0, &(check_pkt_4), &(AND_u1_u1_520));\
;

#define _prioritySelect_assign_stmt_539_c_macro_ __declare_static_bit_vector(konst_524,3);\
bit_vector_clear(&konst_524);\
konst_524.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_525,1);\
__declare_static_bit_vector(konst_528,3);\
bit_vector_clear(&konst_528);\
konst_528.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_529,1);\
__declare_static_bit_vector(konst_532,3);\
bit_vector_clear(&konst_532);\
konst_532.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_533,1);\
__declare_static_bit_vector(MUX_536,1);\
__declare_static_bit_vector(MUX_537,1);\
__declare_static_bit_vector(MUX_538,1);\
bit_vector_clear(&konst_524);\
konst_524.val.byte_array[0] = 1;\
bit_vector_equal(0, &(pkt_with_priority), &(konst_524), &(EQ_u3_u1_525));\
if (has_undefined_bit(&EQ_u3_u1_525)) {fprintf(stderr, "Error: variable EQ_u3_u1_525 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_525));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_525)){bit_vector_cast_to_bit_vector(0, &(MUX_538), &(p1_valid));\
}else {bit_vector_clear(&konst_528);\
konst_528.val.byte_array[0] = 2;\
bit_vector_equal(0, &(pkt_with_priority), &(konst_528), &(EQ_u3_u1_529));\
if (has_undefined_bit(&EQ_u3_u1_529)) {fprintf(stderr, "Error: variable EQ_u3_u1_529 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_529));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_529)){bit_vector_cast_to_bit_vector(0, &(MUX_537), &(p2_valid));\
}else {bit_vector_clear(&konst_532);\
konst_532.val.byte_array[0] = 3;\
bit_vector_equal(0, &(pkt_with_priority), &(konst_532), &(EQ_u3_u1_533));\
if (has_undefined_bit(&EQ_u3_u1_533)) {fprintf(stderr, "Error: variable EQ_u3_u1_533 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_533));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_533)){bit_vector_cast_to_bit_vector(0, &(MUX_536), &(p3_valid));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_536), &(p4_valid));\
}bit_vector_cast_to_bit_vector(0, &(MUX_537), &(MUX_536));\
}bit_vector_cast_to_bit_vector(0, &(MUX_538), &(MUX_537));\
}bit_vector_cast_to_bit_vector(0, &(pkt_with_priority_valid), &(MUX_538));\
;

#define _prioritySelect_assign_stmt_557_c_macro_ __declare_static_bit_vector(konst_542,3);\
bit_vector_clear(&konst_542);\
konst_542.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_543,1);\
__declare_static_bit_vector(konst_546,3);\
bit_vector_clear(&konst_546);\
konst_546.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_547,1);\
__declare_static_bit_vector(konst_550,3);\
bit_vector_clear(&konst_550);\
konst_550.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_551,1);\
__declare_static_bit_vector(MUX_554,1);\
__declare_static_bit_vector(MUX_555,1);\
__declare_static_bit_vector(MUX_556,1);\
bit_vector_clear(&konst_542);\
konst_542.val.byte_array[0] = 1;\
bit_vector_equal(0, &(active_packet), &(konst_542), &(EQ_u3_u1_543));\
if (has_undefined_bit(&EQ_u3_u1_543)) {fprintf(stderr, "Error: variable EQ_u3_u1_543 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_543));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_543)){bit_vector_cast_to_bit_vector(0, &(MUX_556), &(p1_valid));\
}else {bit_vector_clear(&konst_546);\
konst_546.val.byte_array[0] = 2;\
bit_vector_equal(0, &(active_packet), &(konst_546), &(EQ_u3_u1_547));\
if (has_undefined_bit(&EQ_u3_u1_547)) {fprintf(stderr, "Error: variable EQ_u3_u1_547 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_547));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_547)){bit_vector_cast_to_bit_vector(0, &(MUX_555), &(p2_valid));\
}else {bit_vector_clear(&konst_550);\
konst_550.val.byte_array[0] = 3;\
bit_vector_equal(0, &(active_packet), &(konst_550), &(EQ_u3_u1_551));\
if (has_undefined_bit(&EQ_u3_u1_551)) {fprintf(stderr, "Error: variable EQ_u3_u1_551 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_551));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_551)){bit_vector_cast_to_bit_vector(0, &(MUX_554), &(p3_valid));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_554), &(p4_valid));\
}bit_vector_cast_to_bit_vector(0, &(MUX_555), &(MUX_554));\
}bit_vector_cast_to_bit_vector(0, &(MUX_556), &(MUX_555));\
}bit_vector_cast_to_bit_vector(0, &(active_packet_priority_valid), &(MUX_556));\
;

#define _prioritySelect_assign_stmt_575_c_macro_ __declare_static_bit_vector(konst_560,3);\
bit_vector_clear(&konst_560);\
konst_560.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_561,1);\
__declare_static_bit_vector(konst_562,3);\
bit_vector_clear(&konst_562);\
konst_562.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_564,3);\
bit_vector_clear(&konst_564);\
konst_564.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_565,1);\
__declare_static_bit_vector(konst_566,3);\
bit_vector_clear(&konst_566);\
konst_566.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_568,3);\
bit_vector_clear(&konst_568);\
konst_568.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_569,1);\
__declare_static_bit_vector(konst_570,3);\
bit_vector_clear(&konst_570);\
konst_570.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_571,3);\
bit_vector_clear(&konst_571);\
konst_571.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUX_572,3);\
__declare_static_bit_vector(MUX_573,3);\
__declare_static_bit_vector(MUX_574,3);\
bit_vector_clear(&konst_560);\
konst_560.val.byte_array[0] = 1;\
bit_vector_equal(0, &(pkt_with_priority), &(konst_560), &(EQ_u3_u1_561));\
if (has_undefined_bit(&EQ_u3_u1_561)) {fprintf(stderr, "Error: variable EQ_u3_u1_561 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_561));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_561)){bit_vector_clear(&konst_562);\
konst_562.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_574), &(konst_562));\
}else {bit_vector_clear(&konst_564);\
konst_564.val.byte_array[0] = 2;\
bit_vector_equal(0, &(pkt_with_priority), &(konst_564), &(EQ_u3_u1_565));\
if (has_undefined_bit(&EQ_u3_u1_565)) {fprintf(stderr, "Error: variable EQ_u3_u1_565 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_565));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_565)){bit_vector_clear(&konst_566);\
konst_566.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_573), &(konst_566));\
}else {bit_vector_clear(&konst_568);\
konst_568.val.byte_array[0] = 3;\
bit_vector_equal(0, &(pkt_with_priority), &(konst_568), &(EQ_u3_u1_569));\
if (has_undefined_bit(&EQ_u3_u1_569)) {fprintf(stderr, "Error: variable EQ_u3_u1_569 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_569));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_569)){bit_vector_clear(&konst_570);\
konst_570.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_572), &(konst_570));\
}else {bit_vector_clear(&konst_571);\
konst_571.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_572), &(konst_571));\
}bit_vector_cast_to_bit_vector(0, &(MUX_573), &(MUX_572));\
}bit_vector_cast_to_bit_vector(0, &(MUX_574), &(MUX_573));\
}bit_vector_cast_to_bit_vector(0, &(next_to_pkt_with_priority), &(MUX_574));\
;

#define _prioritySelect_assign_stmt_593_c_macro_ __declare_static_bit_vector(konst_578,3);\
bit_vector_clear(&konst_578);\
konst_578.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_579,1);\
__declare_static_bit_vector(konst_582,3);\
bit_vector_clear(&konst_582);\
konst_582.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_583,1);\
__declare_static_bit_vector(konst_586,3);\
bit_vector_clear(&konst_586);\
konst_586.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_587,1);\
__declare_static_bit_vector(MUX_590,1);\
__declare_static_bit_vector(MUX_591,1);\
__declare_static_bit_vector(MUX_592,1);\
bit_vector_clear(&konst_578);\
konst_578.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_to_pkt_with_priority), &(konst_578), &(EQ_u3_u1_579));\
if (has_undefined_bit(&EQ_u3_u1_579)) {fprintf(stderr, "Error: variable EQ_u3_u1_579 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_579));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_579)){bit_vector_cast_to_bit_vector(0, &(MUX_592), &(p1_valid));\
}else {bit_vector_clear(&konst_582);\
konst_582.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_to_pkt_with_priority), &(konst_582), &(EQ_u3_u1_583));\
if (has_undefined_bit(&EQ_u3_u1_583)) {fprintf(stderr, "Error: variable EQ_u3_u1_583 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_583));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_583)){bit_vector_cast_to_bit_vector(0, &(MUX_591), &(p2_valid));\
}else {bit_vector_clear(&konst_586);\
konst_586.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_to_pkt_with_priority), &(konst_586), &(EQ_u3_u1_587));\
if (has_undefined_bit(&EQ_u3_u1_587)) {fprintf(stderr, "Error: variable EQ_u3_u1_587 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_587));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_587)){bit_vector_cast_to_bit_vector(0, &(MUX_590), &(p3_valid));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_590), &(p4_valid));\
}bit_vector_cast_to_bit_vector(0, &(MUX_591), &(MUX_590));\
}bit_vector_cast_to_bit_vector(0, &(MUX_592), &(MUX_591));\
}bit_vector_cast_to_bit_vector(0, &(next_to_pkt_with_priority_valid), &(MUX_592));\
;

#define _prioritySelect_assign_stmt_611_c_macro_ __declare_static_bit_vector(konst_596,3);\
bit_vector_clear(&konst_596);\
konst_596.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_597,1);\
__declare_static_bit_vector(konst_598,3);\
bit_vector_clear(&konst_598);\
konst_598.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_600,3);\
bit_vector_clear(&konst_600);\
konst_600.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_601,1);\
__declare_static_bit_vector(konst_602,3);\
bit_vector_clear(&konst_602);\
konst_602.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_604,3);\
bit_vector_clear(&konst_604);\
konst_604.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_605,1);\
__declare_static_bit_vector(konst_606,3);\
bit_vector_clear(&konst_606);\
konst_606.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_607,3);\
bit_vector_clear(&konst_607);\
konst_607.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUX_608,3);\
__declare_static_bit_vector(MUX_609,3);\
__declare_static_bit_vector(MUX_610,3);\
bit_vector_clear(&konst_596);\
konst_596.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_to_pkt_with_priority), &(konst_596), &(EQ_u3_u1_597));\
if (has_undefined_bit(&EQ_u3_u1_597)) {fprintf(stderr, "Error: variable EQ_u3_u1_597 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_597));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_597)){bit_vector_clear(&konst_598);\
konst_598.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_610), &(konst_598));\
}else {bit_vector_clear(&konst_600);\
konst_600.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_to_pkt_with_priority), &(konst_600), &(EQ_u3_u1_601));\
if (has_undefined_bit(&EQ_u3_u1_601)) {fprintf(stderr, "Error: variable EQ_u3_u1_601 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_601));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_601)){bit_vector_clear(&konst_602);\
konst_602.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_609), &(konst_602));\
}else {bit_vector_clear(&konst_604);\
konst_604.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_to_pkt_with_priority), &(konst_604), &(EQ_u3_u1_605));\
if (has_undefined_bit(&EQ_u3_u1_605)) {fprintf(stderr, "Error: variable EQ_u3_u1_605 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_605));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_605)){bit_vector_clear(&konst_606);\
konst_606.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_608), &(konst_606));\
}else {bit_vector_clear(&konst_607);\
konst_607.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_608), &(konst_607));\
}bit_vector_cast_to_bit_vector(0, &(MUX_609), &(MUX_608));\
}bit_vector_cast_to_bit_vector(0, &(MUX_610), &(MUX_609));\
}bit_vector_cast_to_bit_vector(0, &(last_pkt_with_priority), &(MUX_610));\
;

#define _prioritySelect_assign_stmt_629_c_macro_ __declare_static_bit_vector(konst_614,3);\
bit_vector_clear(&konst_614);\
konst_614.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_615,1);\
__declare_static_bit_vector(konst_618,3);\
bit_vector_clear(&konst_618);\
konst_618.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_619,1);\
__declare_static_bit_vector(konst_622,3);\
bit_vector_clear(&konst_622);\
konst_622.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_623,1);\
__declare_static_bit_vector(MUX_626,1);\
__declare_static_bit_vector(MUX_627,1);\
__declare_static_bit_vector(MUX_628,1);\
bit_vector_clear(&konst_614);\
konst_614.val.byte_array[0] = 1;\
bit_vector_equal(0, &(last_pkt_with_priority), &(konst_614), &(EQ_u3_u1_615));\
if (has_undefined_bit(&EQ_u3_u1_615)) {fprintf(stderr, "Error: variable EQ_u3_u1_615 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_615));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_615)){bit_vector_cast_to_bit_vector(0, &(MUX_628), &(p1_valid));\
}else {bit_vector_clear(&konst_618);\
konst_618.val.byte_array[0] = 2;\
bit_vector_equal(0, &(last_pkt_with_priority), &(konst_618), &(EQ_u3_u1_619));\
if (has_undefined_bit(&EQ_u3_u1_619)) {fprintf(stderr, "Error: variable EQ_u3_u1_619 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_619));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_619)){bit_vector_cast_to_bit_vector(0, &(MUX_627), &(p2_valid));\
}else {bit_vector_clear(&konst_622);\
konst_622.val.byte_array[0] = 3;\
bit_vector_equal(0, &(last_pkt_with_priority), &(konst_622), &(EQ_u3_u1_623));\
if (has_undefined_bit(&EQ_u3_u1_623)) {fprintf(stderr, "Error: variable EQ_u3_u1_623 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_623));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_623)){bit_vector_cast_to_bit_vector(0, &(MUX_626), &(p3_valid));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_626), &(p4_valid));\
}bit_vector_cast_to_bit_vector(0, &(MUX_627), &(MUX_626));\
}bit_vector_cast_to_bit_vector(0, &(MUX_628), &(MUX_627));\
}bit_vector_cast_to_bit_vector(0, &(last_pkt_with_priority_valid), &(MUX_628));\
;

#define _prioritySelect_assign_stmt_647_c_macro_ __declare_static_bit_vector(konst_632,3);\
bit_vector_clear(&konst_632);\
konst_632.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_641,3);\
bit_vector_clear(&konst_641);\
__declare_static_bit_vector(MUX_642,3);\
__declare_static_bit_vector(MUX_643,3);\
__declare_static_bit_vector(MUX_644,3);\
__declare_static_bit_vector(MUX_645,3);\
__declare_static_bit_vector(MUX_646,3);\
if (has_undefined_bit(&check_pkt_4)) {fprintf(stderr, "Error: variable check_pkt_4 has undefined value (%s) at test point.\n", to_string(&check_pkt_4));assert(0);} \
if(bit_vector_to_uint64(0, &check_pkt_4)){bit_vector_clear(&konst_632);\
konst_632.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_646), &(konst_632));\
}else {if (has_undefined_bit(&pkt_with_priority_valid)) {fprintf(stderr, "Error: variable pkt_with_priority_valid has undefined value (%s) at test point.\n", to_string(&pkt_with_priority_valid));assert(0);} \
if(bit_vector_to_uint64(0, &pkt_with_priority_valid)){bit_vector_cast_to_bit_vector(0, &(MUX_645), &(pkt_with_priority));\
}else {if (has_undefined_bit(&next_to_pkt_with_priority_valid)) {fprintf(stderr, "Error: variable next_to_pkt_with_priority_valid has undefined value (%s) at test point.\n", to_string(&next_to_pkt_with_priority_valid));assert(0);} \
if(bit_vector_to_uint64(0, &next_to_pkt_with_priority_valid)){bit_vector_cast_to_bit_vector(0, &(MUX_644), &(next_to_pkt_with_priority));\
}else {if (has_undefined_bit(&last_pkt_with_priority_valid)) {fprintf(stderr, "Error: variable last_pkt_with_priority_valid has undefined value (%s) at test point.\n", to_string(&last_pkt_with_priority_valid));assert(0);} \
if(bit_vector_to_uint64(0, &last_pkt_with_priority_valid)){bit_vector_cast_to_bit_vector(0, &(MUX_643), &(last_pkt_with_priority));\
}else {if (has_undefined_bit(&active_packet_priority_valid)) {fprintf(stderr, "Error: variable active_packet_priority_valid has undefined value (%s) at test point.\n", to_string(&active_packet_priority_valid));assert(0);} \
if(bit_vector_to_uint64(0, &active_packet_priority_valid)){bit_vector_cast_to_bit_vector(0, &(MUX_642), &(active_packet));\
}else {bit_vector_clear(&konst_641);\
bit_vector_cast_to_bit_vector(0, &(MUX_642), &(konst_641));\
}bit_vector_cast_to_bit_vector(0, &(MUX_643), &(MUX_642));\
}bit_vector_cast_to_bit_vector(0, &(MUX_644), &(MUX_643));\
}bit_vector_cast_to_bit_vector(0, &(MUX_645), &(MUX_644));\
}bit_vector_cast_to_bit_vector(0, &(MUX_646), &(MUX_645));\
}bit_vector_cast_to_bit_vector(0, &(selected_packet), &(MUX_646));\
;

#define _prioritySelect_assign_stmt_653_c_macro_ __declare_static_bit_vector(MUX_652,3);\
if (has_undefined_bit(&d0)) {fprintf(stderr, "Error: variable d0 has undefined value (%s) at test point.\n", to_string(&d0));assert(0);} \
if(bit_vector_to_uint64(0, &d0)){bit_vector_cast_to_bit_vector(0, &(MUX_652), &(selected_packet));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_652), &(active_packet));\
}bit_vector_cast_to_bit_vector(0, &(next_active_packet), &(MUX_652));\
;

#define _prioritySelect_assign_stmt_671_c_macro_ __declare_static_bit_vector(konst_656,3);\
bit_vector_clear(&konst_656);\
konst_656.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u3_u1_657,1);\
__declare_static_bit_vector(konst_658,3);\
bit_vector_clear(&konst_658);\
konst_658.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_660,3);\
bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u3_u1_661,1);\
__declare_static_bit_vector(konst_662,3);\
bit_vector_clear(&konst_662);\
konst_662.val.byte_array[0] = 3;\
__declare_static_bit_vector(konst_664,3);\
bit_vector_clear(&konst_664);\
konst_664.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u3_u1_665,1);\
__declare_static_bit_vector(konst_666,3);\
bit_vector_clear(&konst_666);\
konst_666.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_667,3);\
bit_vector_clear(&konst_667);\
konst_667.val.byte_array[0] = 1;\
__declare_static_bit_vector(MUX_668,3);\
__declare_static_bit_vector(MUX_669,3);\
__declare_static_bit_vector(MUX_670,3);\
bit_vector_clear(&konst_656);\
konst_656.val.byte_array[0] = 1;\
bit_vector_equal(0, &(next_active_packet), &(konst_656), &(EQ_u3_u1_657));\
if (has_undefined_bit(&EQ_u3_u1_657)) {fprintf(stderr, "Error: variable EQ_u3_u1_657 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_657));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_657)){bit_vector_clear(&konst_658);\
konst_658.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_670), &(konst_658));\
}else {bit_vector_clear(&konst_660);\
konst_660.val.byte_array[0] = 2;\
bit_vector_equal(0, &(next_active_packet), &(konst_660), &(EQ_u3_u1_661));\
if (has_undefined_bit(&EQ_u3_u1_661)) {fprintf(stderr, "Error: variable EQ_u3_u1_661 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_661));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_661)){bit_vector_clear(&konst_662);\
konst_662.val.byte_array[0] = 3;\
bit_vector_cast_to_bit_vector(0, &(MUX_669), &(konst_662));\
}else {bit_vector_clear(&konst_664);\
konst_664.val.byte_array[0] = 3;\
bit_vector_equal(0, &(next_active_packet), &(konst_664), &(EQ_u3_u1_665));\
if (has_undefined_bit(&EQ_u3_u1_665)) {fprintf(stderr, "Error: variable EQ_u3_u1_665 has undefined value (%s) at test point.\n", to_string(&EQ_u3_u1_665));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u3_u1_665)){bit_vector_clear(&konst_666);\
konst_666.val.byte_array[0] = 4;\
bit_vector_cast_to_bit_vector(0, &(MUX_668), &(konst_666));\
}else {bit_vector_clear(&konst_667);\
konst_667.val.byte_array[0] = 1;\
bit_vector_cast_to_bit_vector(0, &(MUX_668), &(konst_667));\
}bit_vector_cast_to_bit_vector(0, &(MUX_669), &(MUX_668));\
}bit_vector_cast_to_bit_vector(0, &(MUX_670), &(MUX_669));\
}bit_vector_cast_to_bit_vector(0, &(next_pkt_with_priority), &(MUX_670));\
;

#define _prioritySelect_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnext_active_packet)), &(next_active_packet));\
bit_vector_cast_to_bit_vector(0, &((*__pnext_pkt_with_priority)), &(next_pkt_with_priority));\
;
