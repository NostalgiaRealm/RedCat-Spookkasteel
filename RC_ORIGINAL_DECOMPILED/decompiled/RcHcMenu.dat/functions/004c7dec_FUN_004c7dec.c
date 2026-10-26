/*
 * FUN_004c7dec at 004c7dec
 * undefined __register FUN_004c7dec(int param_1, int * param_2, int * param_3, LPRECT param_4, char param_5, char param_6, byte param_7, uint param_8, uint param_9, byte param_10, undefined * param_11, int * param_12)
 * Address ranges: 004c7dec-004c7e60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c7dec(int param_1,int *param_2,int *param_3,LPRECT param_4,char param_5,char param_6,
                 byte param_7,uint param_8,uint param_9,byte param_10,undefined *param_11,
                 int *param_12)

{
  uint local_18 [2];
  int *local_10;
  int *local_c;
  int local_8;
  
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004c791c(param_1,param_2,param_3,param_4,local_18,param_5,param_8,param_9,param_10,param_11,
               param_12);
  FUN_004c774c(local_8,local_c,(int *)local_18,param_6,param_7);
  if (param_5 != '\0') {
    FUN_004c782c(local_8,local_c,param_11,param_7,&param_4->left);
  }
  return;
}

