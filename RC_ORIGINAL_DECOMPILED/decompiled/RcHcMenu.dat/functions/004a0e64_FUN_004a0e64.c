/*
 * FUN_004a0e64 at 004a0e64
 * int * __register FUN_004a0e64(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004a0e64-004a0ed6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a0e64(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00403064(param_1,'\0',param_3);
  *(undefined1 *)(param_1 + 1) = 1;
  piVar1 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1 = (int *)FUN_00403224((int *)param_1[3],(int)&LAB_0049893c);
  FUN_0049aa40(piVar1,extraout_EDX,extraout_ECX_01);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

