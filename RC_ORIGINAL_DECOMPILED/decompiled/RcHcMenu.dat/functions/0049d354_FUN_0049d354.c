/*
 * FUN_0049d354 at 0049d354
 * int * __register FUN_0049d354(int * param_1, char param_2, undefined4 * param_3)
 * Address ranges: 0049d354-0049d3b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0049d354(int *param_1,char param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
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
  param_1[4] = (int)piVar1;
  (**(code **)(*param_1 + 0xc))();
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

