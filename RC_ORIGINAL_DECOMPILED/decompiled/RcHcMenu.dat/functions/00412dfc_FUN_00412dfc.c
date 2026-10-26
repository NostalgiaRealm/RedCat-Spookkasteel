/*
 * FUN_00412dfc at 00412dfc
 * int * __register FUN_00412dfc(int * param_1, char param_2, int param_3)
 * Address ranges: 00412dfc-00412e39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00412dfc(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe8;
  undefined4 in_stack_ffffffec;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe8,in_stack_ffffffec);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  param_1[1] = param_3;
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
  param_1[2] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe8;
  }
  return param_1;
}

