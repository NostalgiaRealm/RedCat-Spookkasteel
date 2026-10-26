/*
 * FUN_00558b94 at 00558b94
 * int * __register FUN_00558b94(int * param_1, char param_2, int * param_3)
 * Address ranges: 00558b94-00558c31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00558b94(int *param_1,char param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *extraout_ECX;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  uVar1 = FUN_0040320c(param_3,(int)&PTR_FUN_005574b0);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  FUN_004adbd0(param_1,'\0',param_3);
  iVar2 = FUN_00403224(param_3,(int)&PTR_FUN_005574b0);
  param_1[0x66] = iVar2;
  FUN_00431f78(param_1,0x14);
  FUN_00431f98(param_1,0x14);
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

