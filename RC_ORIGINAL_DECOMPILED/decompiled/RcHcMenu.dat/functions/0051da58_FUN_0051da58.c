/*
 * FUN_0051da58 at 0051da58
 * int * __register FUN_0051da58(int * param_1, char param_2, int * param_3)
 * Address ranges: 0051da58-0051dac3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0051da58(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_004ef330(param_1,'\0',param_3);
  FUN_00431d2c(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),1),extraout_ECX_00);
  FUN_004ef400((int)param_1,'\0');
  FUN_00431f98(param_1,param_3[0x82]);
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

