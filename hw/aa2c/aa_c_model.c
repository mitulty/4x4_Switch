#include <pthread.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <aa_c_model_internal.h>
#include <aa_c_model.h>
FILE* __report_log_file__ = NULL;
int __trace_on__ = 0;
void _set_trace_file(FILE* fp) {
__report_log_file__ = fp;
}
bit_vector _FOUR;
#define FOUR (_FOUR)

bit_vector _ONE_1;
#define ONE_1 (_ONE_1)

bit_vector _ONE_2;
#define ONE_2 (_ONE_2)

bit_vector _ONE_3;
#define ONE_3 (_ONE_3)

bit_vector _ONE_33;
#define ONE_33 (_ONE_33)

bit_vector _ONE_8;
#define ONE_8 (_ONE_8)

bit_vector _ZERO_1;
#define ZERO_1 (_ZERO_1)

bit_vector _ZERO_16;
#define ZERO_16 (_ZERO_16)

bit_vector _ZERO_2;
#define ZERO_2 (_ZERO_2)

bit_vector _ZERO_3;
#define ZERO_3 (_ZERO_3)

bit_vector _ZERO_33;
#define ZERO_33 (_ZERO_33)

bit_vector _ZERO_8;
#define ZERO_8 (_ZERO_8)

void __init_aa_globals__() 
{
init_static_bit_vector(&(FOUR), 3);\
bit_vector_clear(&FOUR);\
FOUR.val.byte_array[0] = 4;\
init_static_bit_vector(&(ONE_1), 1);\
bit_vector_clear(&ONE_1);\
ONE_1.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_2), 2);\
bit_vector_clear(&ONE_2);\
ONE_2.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_3), 3);\
bit_vector_clear(&ONE_3);\
ONE_3.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_33), 33);\
bit_vector_clear(&ONE_33);\
ONE_33.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_8), 8);\
bit_vector_clear(&ONE_8);\
ONE_8.val.byte_array[0] = 1;\
init_static_bit_vector(&(ZERO_1), 1);\
bit_vector_clear(&ZERO_1);\
init_static_bit_vector(&(ZERO_16), 16);\
bit_vector_clear(&ZERO_16);\
init_static_bit_vector(&(ZERO_2), 2);\
bit_vector_clear(&ZERO_2);\
init_static_bit_vector(&(ZERO_3), 3);\
bit_vector_clear(&ZERO_3);\
init_static_bit_vector(&(ZERO_33), 33);\
bit_vector_clear(&ZERO_33);\
init_static_bit_vector(&(ZERO_8), 8);\
bit_vector_clear(&ZERO_8);\
register_pipe("in_data_1", 3, 32, 0);\
register_pipe("in_data_2", 3, 32, 0);\
register_pipe("in_data_3", 3, 32, 0);\
register_pipe("in_data_4", 3, 32, 0);\
register_pipe("noblock_obuf_1_1", 1280, 8, 2);\
register_pipe("noblock_obuf_1_2", 1280, 8, 2);\
register_pipe("noblock_obuf_1_3", 1280, 8, 2);\
register_pipe("noblock_obuf_1_4", 1280, 8, 2);\
register_pipe("noblock_obuf_2_1", 1280, 8, 2);\
register_pipe("noblock_obuf_2_2", 1280, 8, 2);\
register_pipe("noblock_obuf_2_3", 1280, 8, 2);\
register_pipe("noblock_obuf_2_4", 1280, 8, 2);\
register_pipe("noblock_obuf_3_1", 1280, 8, 2);\
register_pipe("noblock_obuf_3_2", 1280, 8, 2);\
register_pipe("noblock_obuf_3_3", 1280, 8, 2);\
register_pipe("noblock_obuf_3_4", 1280, 8, 2);\
register_pipe("noblock_obuf_4_1", 1280, 8, 2);\
register_pipe("noblock_obuf_4_2", 1280, 8, 2);\
register_pipe("noblock_obuf_4_3", 1280, 8, 2);\
register_pipe("noblock_obuf_4_4", 1280, 8, 2);\
register_pipe("out_data_1", 3, 32, 0);\
register_pipe("out_data_2", 3, 32, 0);\
register_pipe("out_data_3", 3, 32, 0);\
register_pipe("out_data_4", 3, 32, 0);\
}
void _global_storage_initializer__()
{
MUTEX_DECL(_global_storage_initializer__series_block_stmt_67_c_mutex_);
MUTEX_LOCK(_global_storage_initializer__series_block_stmt_67_c_mutex_);
_global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
_global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_global_storage_initializer__series_block_stmt_67_c_mutex_);
}
void global_storage_initializer_()
{
_global_storage_initializer__outer_arg_decl_macro__;
_global_storage_initializer__();
_global_storage_initializer__outer_op_xfer_macro__;
}


void _inputPort_1_Daemon_()
{
MUTEX_DECL(_inputPort_1_Daemon_series_block_stmt_70_c_mutex_);
MUTEX_LOCK(_inputPort_1_Daemon_series_block_stmt_70_c_mutex_);
_inputPort_1_Daemon_inner_inarg_prep_macro__; 
_inputPort_1_Daemon_branch_block_stmt_71_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 75
__declare_static_bit_vector(konst_174,1);\
bit_vector_clear(&konst_174);\
konst_174.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 77
_inputPort_1_Daemon_merge_stmt_73_c_preamble_macro_; 
// 			$phi count_down := 			  next_count_down $on   $loopback 			  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_inputPort_1_Daemon_phi_stmt_74_c_macro_; 
// 			$phi input_word := 			  in_data_1 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_1_Daemon_phi_stmt_79_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_1_Daemon_phi_stmt_82_c_macro_; 
_inputPort_1_Daemon_merge_stmt_73_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_91_c_macro_; 
// $report (inputPort_1_Daemon received_input_word 			 input_word input_word )
_inputPort_1_Daemon_stmt_93_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_97_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_101_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_1_Daemon_assign_stmt_105_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_1_Daemon_assign_stmt_115_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_1_Daemon_assign_stmt_121_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_1_Daemon_assign_stmt_126_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_131_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_1_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_135_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_140_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_1_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_144_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_149_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_1_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_153_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_1_Daemon_assign_stmt_158_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_1_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_1_Daemon_assign_stmt_162_c_macro_; 
// $report (inputPort_1_Daemon write_status 			 send_to_1 send_to_1 			 send_to_2 send_to_2 			 send_to_3 send_to_3 			 send_to_4 send_to_4 			 data_to_outport data_to_outport 			 new_packet new_packet 			 last_dest_id last_dest_id 			 next_last_dest_id next_last_dest_id 			 count_down count_down )
_inputPort_1_Daemon_stmt_172_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_174);\
konst_174.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_174)) break;
} 
}
_inputPort_1_Daemon_branch_block_stmt_71_c_export_apply_macro_;
}
_inputPort_1_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_1_Daemon_series_block_stmt_70_c_mutex_);
}
void inputPort_1_Daemon()
{
_inputPort_1_Daemon_outer_arg_decl_macro__;
_inputPort_1_Daemon_();
_inputPort_1_Daemon_outer_op_xfer_macro__;
}


void _inputPort_2_Daemon_()
{
MUTEX_DECL(_inputPort_2_Daemon_series_block_stmt_177_c_mutex_);
MUTEX_LOCK(_inputPort_2_Daemon_series_block_stmt_177_c_mutex_);
_inputPort_2_Daemon_inner_inarg_prep_macro__; 
_inputPort_2_Daemon_branch_block_stmt_178_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 112
__declare_static_bit_vector(konst_281,1);\
bit_vector_clear(&konst_281);\
konst_281.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 114
_inputPort_2_Daemon_merge_stmt_180_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_2_Daemon_phi_stmt_181_c_macro_; 
// 			$phi input_word := 			  in_data_2 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_2_Daemon_phi_stmt_186_c_macro_; 
// 			$phi last_dest_id := 			  next_last_dest_id $on   $loopback 			  0  $on   $entry 
 // type of target is $uint<8>
_inputPort_2_Daemon_phi_stmt_189_c_macro_; 
_inputPort_2_Daemon_merge_stmt_180_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_198_c_macro_; 
// $report (inputPort_2_Daemon received_input_word 			 input_word input_word )
_inputPort_2_Daemon_stmt_200_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_204_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_208_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_2_Daemon_assign_stmt_212_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_2_Daemon_assign_stmt_222_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_2_Daemon_assign_stmt_228_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_2_Daemon_assign_stmt_233_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_238_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_2_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_242_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_247_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_2_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_251_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_256_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_2_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_260_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_2_Daemon_assign_stmt_265_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_2_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_2_Daemon_assign_stmt_269_c_macro_; 
// $report (inputPort_2_Daemon write_status 			 send_to_1 send_to_1 			 send_to_2 send_to_2 			 send_to_3 send_to_3 			 send_to_4 send_to_4 			 data_to_outport data_to_outport 			 new_packet new_packet 			 last_dest_id last_dest_id 			 next_last_dest_id next_last_dest_id 			 count_down count_down )
_inputPort_2_Daemon_stmt_279_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_281);\
konst_281.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_281)) break;
} 
}
_inputPort_2_Daemon_branch_block_stmt_178_c_export_apply_macro_;
}
_inputPort_2_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_2_Daemon_series_block_stmt_177_c_mutex_);
}
void inputPort_2_Daemon()
{
_inputPort_2_Daemon_outer_arg_decl_macro__;
_inputPort_2_Daemon_();
_inputPort_2_Daemon_outer_op_xfer_macro__;
}


void _inputPort_3_Daemon_()
{
MUTEX_DECL(_inputPort_3_Daemon_series_block_stmt_284_c_mutex_);
MUTEX_LOCK(_inputPort_3_Daemon_series_block_stmt_284_c_mutex_);
_inputPort_3_Daemon_inner_inarg_prep_macro__; 
_inputPort_3_Daemon_branch_block_stmt_285_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 149
__declare_static_bit_vector(konst_388,1);\
bit_vector_clear(&konst_388);\
konst_388.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 151
_inputPort_3_Daemon_merge_stmt_287_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_3_Daemon_phi_stmt_288_c_macro_; 
// 			$phi input_word := 			  in_data_3 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_3_Daemon_phi_stmt_293_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_3_Daemon_phi_stmt_296_c_macro_; 
_inputPort_3_Daemon_merge_stmt_287_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_305_c_macro_; 
// $report (inputPort_3_Daemon received_input_word 			 input_word input_word )
_inputPort_3_Daemon_stmt_307_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_311_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_315_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_3_Daemon_assign_stmt_319_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_3_Daemon_assign_stmt_329_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_3_Daemon_assign_stmt_335_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_3_Daemon_assign_stmt_340_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_345_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_3_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_349_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_354_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_3_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_358_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_363_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_3_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_367_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_3_Daemon_assign_stmt_372_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_3_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_3_Daemon_assign_stmt_376_c_macro_; 
// $report (inputPort_3_Daemon write_status 			 send_to_1 send_to_1 			 send_to_2 send_to_2 			 send_to_3 send_to_3 			 send_to_4 send_to_4 			 data_to_outport data_to_outport 			 new_packet new_packet 			 last_dest_id last_dest_id 			 next_last_dest_id next_last_dest_id 			 count_down count_down )
_inputPort_3_Daemon_stmt_386_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_388);\
konst_388.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_388)) break;
} 
}
_inputPort_3_Daemon_branch_block_stmt_285_c_export_apply_macro_;
}
_inputPort_3_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_3_Daemon_series_block_stmt_284_c_mutex_);
}
void inputPort_3_Daemon()
{
_inputPort_3_Daemon_outer_arg_decl_macro__;
_inputPort_3_Daemon_();
_inputPort_3_Daemon_outer_op_xfer_macro__;
}


void _inputPort_4_Daemon_()
{
MUTEX_DECL(_inputPort_4_Daemon_series_block_stmt_391_c_mutex_);
MUTEX_LOCK(_inputPort_4_Daemon_series_block_stmt_391_c_mutex_);
_inputPort_4_Daemon_inner_inarg_prep_macro__; 
_inputPort_4_Daemon_branch_block_stmt_392_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 186
__declare_static_bit_vector(konst_495,1);\
bit_vector_clear(&konst_495);\
konst_495.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 188
_inputPort_4_Daemon_merge_stmt_394_c_preamble_macro_; 
// 			$phi count_down := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  next_count_down $on   $loopback 
 // type of target is $uint<16>
_inputPort_4_Daemon_phi_stmt_395_c_macro_; 
// 			$phi input_word := 			  in_data_4 $on   $entry ,   $loopback 
 // type of target is $uint<32>
_inputPort_4_Daemon_phi_stmt_400_c_macro_; 
// 			$phi last_dest_id := 			  0  $on   $entry 			  next_last_dest_id $on   $loopback 
 // type of target is $uint<8>
_inputPort_4_Daemon_phi_stmt_403_c_macro_; 
_inputPort_4_Daemon_merge_stmt_394_c_postamble_macro_; 
// 			$volatile new_packet := (count_down == 0 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_412_c_macro_; 
// $report (inputPort_4_Daemon received_input_word 			 input_word input_word )
_inputPort_4_Daemon_stmt_414_c_macro_; 
// 			$volatile dest_id := ( $slice input_word 31 24 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_418_c_macro_; 
// 			$volatile pkt_length := ( $slice input_word 23 8 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_422_c_macro_; 
// 			$volatile seq_id := ( $slice input_word 7 0 )  $buffering 1
_inputPort_4_Daemon_assign_stmt_426_c_macro_; 
// 			$volatile next_count_down := ( $mux new_packet (pkt_length - 1 )  (count_down - 1 ) )  $buffering 1
_inputPort_4_Daemon_assign_stmt_436_c_macro_; 
// 			$volatile next_last_dest_id := ( $mux new_packet dest_id  last_dest_id )  $buffering 1
_inputPort_4_Daemon_assign_stmt_442_c_macro_; 
// 			$volatile data_to_outport := (ONE_1 && input_word) $buffering 1
_inputPort_4_Daemon_assign_stmt_447_c_macro_; 
// 			$volatile send_to_1 := (next_last_dest_id == 1 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_452_c_macro_; 
// 			$guard (send_to_1) noblock_obuf_4_1 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_456_c_macro_; 
// 			$volatile send_to_2 := (next_last_dest_id == 2 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_461_c_macro_; 
// 			$guard (send_to_2) noblock_obuf_4_2 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_465_c_macro_; 
// 			$volatile send_to_3 := (next_last_dest_id == 3 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_470_c_macro_; 
// 			$guard (send_to_3) noblock_obuf_4_3 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_474_c_macro_; 
// 			$volatile send_to_4 := (next_last_dest_id == 4 ) $buffering 1
_inputPort_4_Daemon_assign_stmt_479_c_macro_; 
// 			$guard (send_to_4) noblock_obuf_4_4 := data_to_outport $buffering 1// bits of buffering = 33. 
_inputPort_4_Daemon_assign_stmt_483_c_macro_; 
// $report (inputPort_4_Daemon write_status 			 send_to_1 send_to_1 			 send_to_2 send_to_2 			 send_to_3 send_to_3 			 send_to_4 send_to_4 			 data_to_outport data_to_outport 			 new_packet new_packet 			 last_dest_id last_dest_id 			 next_last_dest_id next_last_dest_id 			 count_down count_down )
_inputPort_4_Daemon_stmt_493_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_495);\
konst_495.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_495)) break;
} 
}
_inputPort_4_Daemon_branch_block_stmt_392_c_export_apply_macro_;
}
_inputPort_4_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_inputPort_4_Daemon_series_block_stmt_391_c_mutex_);
}
void inputPort_4_Daemon()
{
_inputPort_4_Daemon_outer_arg_decl_macro__;
_inputPort_4_Daemon_();
_inputPort_4_Daemon_outer_op_xfer_macro__;
}


void _outputPort_1_Daemon_()
{
MUTEX_DECL(_outputPort_1_Daemon_series_block_stmt_673_c_mutex_);
MUTEX_LOCK(_outputPort_1_Daemon_series_block_stmt_673_c_mutex_);
_outputPort_1_Daemon_inner_inarg_prep_macro__; 
_outputPort_1_Daemon_branch_block_stmt_674_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 240
__declare_static_bit_vector(konst_933,1);\
bit_vector_clear(&konst_933);\
konst_933.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 242
_outputPort_1_Daemon_merge_stmt_676_c_preamble_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_677_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_682_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_687_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_1 $on   $loopback 
 // type of target is $uint<33>
_outputPort_1_Daemon_phi_stmt_692_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_1_Daemon_phi_stmt_697_c_macro_; 
// 			$phi down_counter := 			  ZERO_16 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<16>
_outputPort_1_Daemon_phi_stmt_701_c_macro_; 
// 			$phi pkt_with_priority := 			  1  $on   $entry 			  next_pkt_with_priority $on   $loopback 
 // type of target is $uint<3>
_outputPort_1_Daemon_phi_stmt_705_c_macro_; 
_outputPort_1_Daemon_merge_stmt_676_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_714_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_719_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_724_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_1_Daemon_assign_stmt_729_c_macro_; 
// $report (outputPort_1_Daemon state_summary 			 active_packet active_packet 			 down_counter down_counter 			 pkt_with_priority pkt_with_priority 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_1_Daemon_stmt_741_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_770_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet pkt_with_priority p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_pkt_with_priority ) 
_outputPort_1_Daemon_call_stmt_780_c_macro_; 
// 			$volatile valid_active_pkt_length := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 23 8 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 23 8 )   _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_813_c_macro_; 
// 			$volatile started_new_packet := ((next_active_packet != 0 ) & (down_counter == 0 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_822_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet (valid_active_pkt_length - 1 )  ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_1_Daemon_assign_stmt_835_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_843_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_851_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_859_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_1_Daemon_assign_stmt_867_c_macro_; 
// 			$volatile data_to_out := ( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   ( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   ( $slice pkt_4_e_word 31 0 )  )  )  )  $buffering 1
_outputPort_1_Daemon_assign_stmt_889_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_1_Daemon_assign_stmt_918_c_macro_; 
// 			$guard (send_flag) out_data_1 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_1_Daemon_assign_stmt_922_c_macro_; 
// $report (outputPort_1_Daemon send_information 			 next_active_packet next_active_packet 			 next_pkt_with_priority next_pkt_with_priority 			 send_flag send_flag 			 p1_valid p1_valid 			 p2_valid p2_valid 			 p3_valid p3_valid 			 p4_valid p4_valid 			 data_to_out data_to_out )
_outputPort_1_Daemon_stmt_931_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_933);\
konst_933.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_933)) break;
} 
}
_outputPort_1_Daemon_branch_block_stmt_674_c_export_apply_macro_;
}
_outputPort_1_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_1_Daemon_series_block_stmt_673_c_mutex_);
}
void outputPort_1_Daemon()
{
_outputPort_1_Daemon_outer_arg_decl_macro__;
_outputPort_1_Daemon_();
_outputPort_1_Daemon_outer_op_xfer_macro__;
}


void _outputPort_2_Daemon_()
{
MUTEX_DECL(_outputPort_2_Daemon_series_block_stmt_936_c_mutex_);
MUTEX_LOCK(_outputPort_2_Daemon_series_block_stmt_936_c_mutex_);
_outputPort_2_Daemon_inner_inarg_prep_macro__; 
_outputPort_2_Daemon_branch_block_stmt_937_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 286
__declare_static_bit_vector(konst_1196,1);\
bit_vector_clear(&konst_1196);\
konst_1196.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 288
_outputPort_2_Daemon_merge_stmt_939_c_preamble_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_940_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_945_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_950_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_2 $on   $loopback 
 // type of target is $uint<33>
_outputPort_2_Daemon_phi_stmt_955_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_2_Daemon_phi_stmt_960_c_macro_; 
// 			$phi down_counter := 			  ZERO_16 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<16>
_outputPort_2_Daemon_phi_stmt_964_c_macro_; 
// 			$phi pkt_with_priority := 			  1  $on   $entry 			  next_pkt_with_priority $on   $loopback 
 // type of target is $uint<3>
_outputPort_2_Daemon_phi_stmt_968_c_macro_; 
_outputPort_2_Daemon_merge_stmt_939_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_977_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_982_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_987_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_2_Daemon_assign_stmt_992_c_macro_; 
// $report (outputPort_2_Daemon state_summary 			 active_packet active_packet 			 down_counter down_counter 			 pkt_with_priority pkt_with_priority 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_2_Daemon_stmt_1004_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1033_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet pkt_with_priority p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_pkt_with_priority ) 
_outputPort_2_Daemon_call_stmt_1043_c_macro_; 
// 			$volatile valid_active_pkt_length := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 23 8 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 23 8 )   _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1076_c_macro_; 
// 			$volatile started_new_packet := ((next_active_packet != 0 ) & (down_counter == 0 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1085_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet (valid_active_pkt_length - 1 )  ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_2_Daemon_assign_stmt_1098_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1106_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1114_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1122_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1130_c_macro_; 
// 			$volatile data_to_out := ( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   ( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   ( $slice pkt_4_e_word 31 0 )  )  )  )  $buffering 1
_outputPort_2_Daemon_assign_stmt_1152_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_2_Daemon_assign_stmt_1181_c_macro_; 
// 			$guard (send_flag) out_data_2 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_2_Daemon_assign_stmt_1185_c_macro_; 
// $report (outputPort_2_Daemon send_information 			 next_active_packet next_active_packet 			 next_pkt_with_priority next_pkt_with_priority 			 send_flag send_flag 			 p1_valid p1_valid 			 p2_valid p2_valid 			 p3_valid p3_valid 			 p4_valid p4_valid 			 data_to_out data_to_out )
_outputPort_2_Daemon_stmt_1194_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1196);\
konst_1196.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1196)) break;
} 
}
_outputPort_2_Daemon_branch_block_stmt_937_c_export_apply_macro_;
}
_outputPort_2_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_2_Daemon_series_block_stmt_936_c_mutex_);
}
void outputPort_2_Daemon()
{
_outputPort_2_Daemon_outer_arg_decl_macro__;
_outputPort_2_Daemon_();
_outputPort_2_Daemon_outer_op_xfer_macro__;
}


void _outputPort_3_Daemon_()
{
MUTEX_DECL(_outputPort_3_Daemon_series_block_stmt_1199_c_mutex_);
MUTEX_LOCK(_outputPort_3_Daemon_series_block_stmt_1199_c_mutex_);
_outputPort_3_Daemon_inner_inarg_prep_macro__; 
_outputPort_3_Daemon_branch_block_stmt_1200_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 332
__declare_static_bit_vector(konst_1459,1);\
bit_vector_clear(&konst_1459);\
konst_1459.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 334
_outputPort_3_Daemon_merge_stmt_1202_c_preamble_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1203_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1208_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1213_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_3 $on   $loopback 
 // type of target is $uint<33>
_outputPort_3_Daemon_phi_stmt_1218_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_3_Daemon_phi_stmt_1223_c_macro_; 
// 			$phi down_counter := 			  ZERO_16 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<16>
_outputPort_3_Daemon_phi_stmt_1227_c_macro_; 
// 			$phi pkt_with_priority := 			  1  $on   $entry 			  next_pkt_with_priority $on   $loopback 
 // type of target is $uint<3>
_outputPort_3_Daemon_phi_stmt_1231_c_macro_; 
_outputPort_3_Daemon_merge_stmt_1202_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1240_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1245_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1250_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_3_Daemon_assign_stmt_1255_c_macro_; 
// $report (outputPort_3_Daemon state_summary 			 active_packet active_packet 			 down_counter down_counter 			 pkt_with_priority pkt_with_priority 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_3_Daemon_stmt_1267_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1296_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet pkt_with_priority p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_pkt_with_priority ) 
_outputPort_3_Daemon_call_stmt_1306_c_macro_; 
// 			$volatile valid_active_pkt_length := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 23 8 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 23 8 )   _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1339_c_macro_; 
// 			$volatile started_new_packet := ((next_active_packet != 0 ) & (down_counter == 0 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1348_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet (valid_active_pkt_length - 1 )  ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_3_Daemon_assign_stmt_1361_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1369_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1377_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1385_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1393_c_macro_; 
// 			$volatile data_to_out := ( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   ( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   ( $slice pkt_4_e_word 31 0 )  )  )  )  $buffering 1
_outputPort_3_Daemon_assign_stmt_1415_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_3_Daemon_assign_stmt_1444_c_macro_; 
// 			$guard (send_flag) out_data_3 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_3_Daemon_assign_stmt_1448_c_macro_; 
// $report (outputPort_3_Daemon send_information 			 next_active_packet next_active_packet 			 next_pkt_with_priority next_pkt_with_priority 			 send_flag send_flag 			 p1_valid p1_valid 			 p2_valid p2_valid 			 p3_valid p3_valid 			 p4_valid p4_valid 			 data_to_out data_to_out )
_outputPort_3_Daemon_stmt_1457_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1459);\
konst_1459.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1459)) break;
} 
}
_outputPort_3_Daemon_branch_block_stmt_1200_c_export_apply_macro_;
}
_outputPort_3_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_3_Daemon_series_block_stmt_1199_c_mutex_);
}
void outputPort_3_Daemon()
{
_outputPort_3_Daemon_outer_arg_decl_macro__;
_outputPort_3_Daemon_();
_outputPort_3_Daemon_outer_op_xfer_macro__;
}


void _outputPort_4_Daemon_()
{
MUTEX_DECL(_outputPort_4_Daemon_series_block_stmt_1462_c_mutex_);
MUTEX_LOCK(_outputPort_4_Daemon_series_block_stmt_1462_c_mutex_);
_outputPort_4_Daemon_inner_inarg_prep_macro__; 
_outputPort_4_Daemon_branch_block_stmt_1463_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/switch4x4.linked.aa, line 378
__declare_static_bit_vector(konst_1722,1);\
bit_vector_clear(&konst_1722);\
konst_1722.val.byte_array[0] = 1;\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/switch4x4.linked.aa, line 380
_outputPort_4_Daemon_merge_stmt_1465_c_preamble_macro_; 
// 			$phi pkt_1_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_1) noblock_obuf_1_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1466_c_macro_; 
// 			$phi pkt_2_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_2) noblock_obuf_2_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1471_c_macro_; 
// 			$phi pkt_3_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_3) noblock_obuf_3_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1476_c_macro_; 
// 			$phi pkt_4_e_word := 			  ZERO_33 $on   $entry 			  $guard (read_from_4) noblock_obuf_4_4 $on   $loopback 
 // type of target is $uint<33>
_outputPort_4_Daemon_phi_stmt_1481_c_macro_; 
// 			$phi active_packet := 			  ZERO_3 $on   $entry 			  next_active_packet $on   $loopback 
 // type of target is $uint<3>
_outputPort_4_Daemon_phi_stmt_1486_c_macro_; 
// 			$phi down_counter := 			  ZERO_16 $on   $entry 			  next_down_counter $on   $loopback 
 // type of target is $uint<16>
_outputPort_4_Daemon_phi_stmt_1490_c_macro_; 
// 			$phi pkt_with_priority := 			  1  $on   $entry 			  next_pkt_with_priority $on   $loopback 
 // type of target is $uint<3>
_outputPort_4_Daemon_phi_stmt_1494_c_macro_; 
_outputPort_4_Daemon_merge_stmt_1465_c_postamble_macro_; 
// 			$volatile p1_valid := (pkt_1_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1503_c_macro_; 
// 			$volatile p2_valid := (pkt_2_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1508_c_macro_; 
// 			$volatile p3_valid := (pkt_3_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1513_c_macro_; 
// 			$volatile p4_valid := (pkt_4_e_word [] 32 ) $buffering 1
_outputPort_4_Daemon_assign_stmt_1518_c_macro_; 
// $report (outputPort_4_Daemon state_summary 			 active_packet active_packet 			 down_counter down_counter 			 pkt_with_priority pkt_with_priority 			 read_from_1 read_from_1 			 pkt_1_e_word pkt_1_e_word 			 read_from_2 read_from_2 			 pkt_2_e_word pkt_2_e_word 			 read_from_3 read_from_3 			 pkt_3_e_word pkt_3_e_word 			 read_from_4 read_from_4 			 pkt_4_e_word pkt_4_e_word )
_outputPort_4_Daemon_stmt_1530_c_macro_; 
// 			$volatile valid_active_pkt_word_read := ((( $mux (active_packet == 1 ) p1_valid  _b0  )  | ( $mux (active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (active_packet == 3 ) p3_valid  _b0  )  | ( $mux (active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1559_c_macro_; 
//  $volatile 			$call prioritySelect (down_counter active_packet pkt_with_priority p1_valid p2_valid p3_valid p4_valid ) (next_active_packet next_pkt_with_priority ) 
_outputPort_4_Daemon_call_stmt_1569_c_macro_; 
// 			$volatile valid_active_pkt_length := ((( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 23 8 )   _b0  ) ) | (( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 23 8 )   _b0  )  | ( $mux (next_active_packet == 4 ) ( $slice pkt_4_e_word 23 8 )   _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1602_c_macro_; 
// 			$volatile started_new_packet := ((next_active_packet != 0 ) & (down_counter == 0 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1611_c_macro_; 
// 			$volatile next_down_counter := ( $mux started_new_packet (valid_active_pkt_length - 1 )  ( $mux valid_active_pkt_word_read (down_counter - 1 )  down_counter )  )  $buffering 1
_outputPort_4_Daemon_assign_stmt_1624_c_macro_; 
// 			$volatile read_from_1 := (( ~ p1_valid ) | (next_active_packet == 1 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1632_c_macro_; 
// 			$volatile read_from_2 := (( ~ p2_valid ) | (next_active_packet == 2 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1640_c_macro_; 
// 			$volatile read_from_3 := (( ~ p3_valid ) | (next_active_packet == 3 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1648_c_macro_; 
// 			$volatile read_from_4 := (( ~ p4_valid ) | (next_active_packet == 4 )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1656_c_macro_; 
// 			$volatile data_to_out := ( $mux (next_active_packet == 1 ) ( $slice pkt_1_e_word 31 0 )   ( $mux (next_active_packet == 2 ) ( $slice pkt_2_e_word 31 0 )   ( $mux (next_active_packet == 3 ) ( $slice pkt_3_e_word 31 0 )   ( $slice pkt_4_e_word 31 0 )  )  )  )  $buffering 1
_outputPort_4_Daemon_assign_stmt_1678_c_macro_; 
// 			$volatile send_flag := ((( $mux (next_active_packet == 1 ) p1_valid  _b0  )  | ( $mux (next_active_packet == 2 ) p2_valid  _b0  ) ) | (( $mux (next_active_packet == 3 ) p3_valid  _b0  )  | ( $mux (next_active_packet == 4 ) p4_valid  _b0  ) )) $buffering 1
_outputPort_4_Daemon_assign_stmt_1707_c_macro_; 
// 			$guard (send_flag) out_data_4 := data_to_out $buffering 1// bits of buffering = 32. 
_outputPort_4_Daemon_assign_stmt_1711_c_macro_; 
// $report (outputPort_4_Daemon send_information 			 next_active_packet next_active_packet 			 next_pkt_with_priority next_pkt_with_priority 			 send_flag send_flag 			 p1_valid p1_valid 			 p2_valid p2_valid 			 p3_valid p3_valid 			 p4_valid p4_valid 			 data_to_out data_to_out )
_outputPort_4_Daemon_stmt_1720_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1722);\
konst_1722.val.byte_array[0] = 1;\
if (!bit_vector_to_uint64(0, &konst_1722)) break;
} 
}
_outputPort_4_Daemon_branch_block_stmt_1463_c_export_apply_macro_;
}
_outputPort_4_Daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_outputPort_4_Daemon_series_block_stmt_1462_c_mutex_);
}
void outputPort_4_Daemon()
{
_outputPort_4_Daemon_outer_arg_decl_macro__;
_outputPort_4_Daemon_();
_outputPort_4_Daemon_outer_op_xfer_macro__;
}


void _prioritySelect_(bit_vector* __pdown_counter, bit_vector* __pactive_packet, bit_vector* __ppkt_with_priority, bit_vector* __pp1_valid, bit_vector* __pp2_valid, bit_vector* __pp3_valid, bit_vector* __pp4_valid, bit_vector*  __pnext_active_packet, bit_vector*  __pnext_pkt_with_priority)
{
MUTEX_DECL(_prioritySelect_series_block_stmt_498_c_mutex_);
MUTEX_LOCK(_prioritySelect_series_block_stmt_498_c_mutex_);
_prioritySelect_inner_inarg_prep_macro__; 
// 	d0 := (down_counter == 0 ) $buffering 1
_prioritySelect_assign_stmt_512_c_macro_; 
// 	check_pkt_4 := ((d0 & (active_packet == 0 )) & p4_valid) $buffering 1
_prioritySelect_assign_stmt_521_c_macro_; 
// 	$volatile pkt_with_priority_valid := ( $mux (pkt_with_priority == 1 ) p1_valid  ( $mux (pkt_with_priority == 2 ) p2_valid  ( $mux (pkt_with_priority == 3 ) p3_valid  p4_valid )  )  )  $buffering 1
_prioritySelect_assign_stmt_539_c_macro_; 
// 	$volatile active_packet_priority_valid := ( $mux (active_packet == 1 ) p1_valid  ( $mux (active_packet == 2 ) p2_valid  ( $mux (active_packet == 3 ) p3_valid  p4_valid )  )  )  $buffering 1
_prioritySelect_assign_stmt_557_c_macro_; 
// 	$volatile next_to_pkt_with_priority := ( $mux (pkt_with_priority == 1 ) 2   ( $mux (pkt_with_priority == 2 ) 3   ( $mux (pkt_with_priority == 3 ) 4   1  )  )  )  $buffering 1
_prioritySelect_assign_stmt_575_c_macro_; 
// 	$volatile next_to_pkt_with_priority_valid := ( $mux (next_to_pkt_with_priority == 1 ) p1_valid  ( $mux (next_to_pkt_with_priority == 2 ) p2_valid  ( $mux (next_to_pkt_with_priority == 3 ) p3_valid  p4_valid )  )  )  $buffering 1
_prioritySelect_assign_stmt_593_c_macro_; 
// 	$volatile last_pkt_with_priority := ( $mux (next_to_pkt_with_priority == 1 ) 2   ( $mux (next_to_pkt_with_priority == 2 ) 3   ( $mux (next_to_pkt_with_priority == 3 ) 4   1  )  )  )  $buffering 1
_prioritySelect_assign_stmt_611_c_macro_; 
// 	$volatile last_pkt_with_priority_valid := ( $mux (last_pkt_with_priority == 1 ) p1_valid  ( $mux (last_pkt_with_priority == 2 ) p2_valid  ( $mux (last_pkt_with_priority == 3 ) p3_valid  p4_valid )  )  )  $buffering 1
_prioritySelect_assign_stmt_629_c_macro_; 
// 	$volatile selected_packet := ( $mux check_pkt_4 4   ( $mux pkt_with_priority_valid pkt_with_priority  ( $mux next_to_pkt_with_priority_valid next_to_pkt_with_priority  ( $mux last_pkt_with_priority_valid last_pkt_with_priority  ( $mux active_packet_priority_valid active_packet  0  )  )  )  )  )  $buffering 1
_prioritySelect_assign_stmt_647_c_macro_; 
// 	next_active_packet := ( $mux d0 selected_packet  active_packet )  $buffering 1
_prioritySelect_assign_stmt_653_c_macro_; 
// 	next_pkt_with_priority := ( $mux (next_active_packet == 1 ) 2   ( $mux (next_active_packet == 2 ) 3   ( $mux (next_active_packet == 3 ) 4   1  )  )  )  $buffering 1
_prioritySelect_assign_stmt_671_c_macro_; 
_prioritySelect_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_prioritySelect_series_block_stmt_498_c_mutex_);
}
DEFINE_THREAD(inputPort_1_Daemon);
PTHREAD_DECL(inputPort_1_Daemon);
DEFINE_THREAD(inputPort_2_Daemon);
PTHREAD_DECL(inputPort_2_Daemon);
DEFINE_THREAD(inputPort_3_Daemon);
PTHREAD_DECL(inputPort_3_Daemon);
DEFINE_THREAD(inputPort_4_Daemon);
PTHREAD_DECL(inputPort_4_Daemon);
DEFINE_THREAD(outputPort_1_Daemon);
PTHREAD_DECL(outputPort_1_Daemon);
DEFINE_THREAD(outputPort_2_Daemon);
PTHREAD_DECL(outputPort_2_Daemon);
DEFINE_THREAD(outputPort_3_Daemon);
PTHREAD_DECL(outputPort_3_Daemon);
DEFINE_THREAD(outputPort_4_Daemon);
PTHREAD_DECL(outputPort_4_Daemon);
void start_daemons(FILE* fp, int trace_on) {
__report_log_file__ = fp;
__trace_on__ = trace_on;
__init_aa_globals__(); 
PTHREAD_CREATE(inputPort_1_Daemon);
PTHREAD_CREATE(inputPort_2_Daemon);
PTHREAD_CREATE(inputPort_3_Daemon);
PTHREAD_CREATE(inputPort_4_Daemon);
PTHREAD_CREATE(outputPort_1_Daemon);
PTHREAD_CREATE(outputPort_2_Daemon);
PTHREAD_CREATE(outputPort_3_Daemon);
PTHREAD_CREATE(outputPort_4_Daemon);
}
void stop_daemons() {
PTHREAD_CANCEL(inputPort_1_Daemon);
PTHREAD_CANCEL(inputPort_2_Daemon);
PTHREAD_CANCEL(inputPort_3_Daemon);
PTHREAD_CANCEL(inputPort_4_Daemon);
PTHREAD_CANCEL(outputPort_1_Daemon);
PTHREAD_CANCEL(outputPort_2_Daemon);
PTHREAD_CANCEL(outputPort_3_Daemon);
PTHREAD_CANCEL(outputPort_4_Daemon);
}
