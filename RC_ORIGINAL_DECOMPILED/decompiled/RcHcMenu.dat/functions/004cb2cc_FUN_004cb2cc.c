/*
 * FUN_004cb2cc at 004cb2cc
 * undefined __register FUN_004cb2cc(int param_1, int * param_2, int * param_3, LPRECT param_4, uint param_5, char param_6, byte param_7, int param_8, int param_9, byte param_10, undefined * param_11, int * param_12)
 * Address ranges: 004cb2cc-004cb33b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cb2cc(int param_1,int *param_2,int *param_3,LPRECT param_4,uint param_5,char param_6,
                 byte param_7,int param_8,int param_9,byte param_10,undefined *param_11,
                 int *param_12)

{
  int local_10 [2];
  int *local_8;
  
  local_8 = param_3;
  FUN_004cafbc(param_1,param_2,param_3,param_5,param_4,local_10,param_8,param_9,param_10,param_11,
               param_12);
  FUN_004cae1c(param_1,param_2,local_10,param_6,param_7);
  FUN_004caed8(param_1,param_2,param_11,param_5,param_7,&param_4->left);
  return;
}

