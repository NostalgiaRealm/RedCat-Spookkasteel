/*
 * FUN_00467d68 at 00467d68
 * int * __register FUN_00467d68(int * param_1, char param_2, int * param_3)
 * Address ranges: 00467d68-00467dec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00467d68(int *param_1,char param_2,int *param_3)

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
  uVar1 = FUN_0040320c(param_3,(int)&PTR_FUN_004620c0);
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_00403224(param_3,(int)&PTR_FUN_004667a0);
  }
  else {
    param_1[0xe] = (int)param_3;
    iVar2 = *(int *)(param_3[1] + 0x1c);
  }
  FUN_0046751c(param_1,'\0',iVar2,(int)&PTR_FUN_004620c0,(int)param_3);
  if (param_1[0xe] != 0) {
    param_1[0xb] = (int)param_1;
    param_1[10] = (int)&LAB_00467f2c;
  }
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

