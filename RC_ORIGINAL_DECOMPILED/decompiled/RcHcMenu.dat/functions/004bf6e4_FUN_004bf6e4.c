/*
 * FUN_004bf6e4 at 004bf6e4
 * int * __register FUN_004bf6e4(int * param_1, char param_2, int param_3)
 * Address ranges: 004bf6e4-004bf744
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004bf6e4(int *param_1,char param_2,int param_3)

{
  int iVar1;
  int extraout_ECX;
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
  FUN_004cee4c(param_1,'\0',param_3);
  param_1[0x14] = 0;
  iVar1 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_00);
  param_1[0x15] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

