/*
 * FUN_00422844 at 00422844
 * int * __register FUN_00422844(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00422844-00422896
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00422844(int *param_1,char param_2,undefined4 param_3)

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
  FUN_0041e4e4(param_1,'\0',param_3);
  *(undefined1 *)((int)param_1 + 0x19) = 1;
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041adbc,'\x01',extraout_ECX_00);
  param_1[8] = iVar1;
  FUN_00420484(iVar1);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

