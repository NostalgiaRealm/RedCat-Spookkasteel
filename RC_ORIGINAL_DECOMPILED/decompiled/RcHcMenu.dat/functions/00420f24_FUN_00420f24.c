/*
 * FUN_00420f24 at 00420f24
 * int * __register FUN_00420f24(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00420f24-00420f8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00420f24(int *param_1,char param_2,undefined4 param_3)

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
  param_1[0xb] = 0x20000000;
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041ac44,'\x01',extraout_ECX_00);
  param_1[8] = iVar1;
  FUN_00420484(iVar1);
  if (DAT_0056f410 != '\0') {
    (**(code **)(*param_1 + 0x68))(param_1,1);
  }
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

