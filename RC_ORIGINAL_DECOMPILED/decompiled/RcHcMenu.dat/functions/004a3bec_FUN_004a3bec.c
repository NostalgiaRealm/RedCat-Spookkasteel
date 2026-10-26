/*
 * FUN_004a3bec at 004a3bec
 * int * __register FUN_004a3bec(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004a3bec-004a3c3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004a3bec(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_00403064(param_1,'\0',param_3);
  iVar1 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_00);
  param_1[1] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

