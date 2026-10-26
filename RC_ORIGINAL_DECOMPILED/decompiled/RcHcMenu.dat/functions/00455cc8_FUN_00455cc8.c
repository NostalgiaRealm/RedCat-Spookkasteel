/*
 * FUN_00455cc8 at 00455cc8
 * int * __register FUN_00455cc8(int * param_1, char param_2, int * param_3)
 * Address ranges: 00455cc8-00455d3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00455cc8(int *param_1,char param_2,int *param_3)

{
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar1;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar1 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar1 = extraout_DL;
  }
  FUN_00439a24(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 0x4b) = 1;
  FUN_00431d2c(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),3),extraout_ECX_00);
  FUN_00431f78(param_1,3);
  FUN_00432904((int)param_1,-0xe);
  param_1[0x52] = 0x1e;
  *(undefined1 *)(param_1 + 0x5a) = 3;
  param_1[0x58] = -1;
  if (cVar1 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

