/*
 * FUN_004f9c78 at 004f9c78
 * int * __register FUN_004f9c78(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004f9c78-004f9cd1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004f9c78(int *param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar3;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0045b418(param_1,'\0',param_3);
  uVar3 = 8;
  iVar1 = FUN_0045d240((int *)&PTR_FUN_0045d22c,'\x01',5,8);
  param_1[2] = iVar1;
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = uVar3;
  }
  return param_1;
}

