/*
 * FUN_0049e06c at 0049e06c
 * int * __register FUN_0049e06c(int * param_1, char param_2, undefined4 * param_3)
 * Address ranges: 0049e06c-0049e0dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049e06c(int *param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0049f018(param_1,'\0',param_3);
  piVar1 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',extraout_ECX_00);
  param_1[0x2a] = (int)piVar1;
  FUN_0049aa40((int *)param_1[0x2a],param_1,extraout_ECX_01);
  (**(code **)(*param_1 + 0xc))();
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

