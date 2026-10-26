/*
 * FUN_0041c468 at 0041c468
 * int * __register FUN_0041c468(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 0041c468-0041c525
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0041c468(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
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
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xe));
  piVar1 = FUN_0041b974((int *)&PTR_FUN_0041a454,'\x01',extraout_ECX_00);
  param_1[3] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_0041d1b4;
  piVar1[5] = (int)(param_1 + 0xe);
  piVar1 = FUN_0041bea0((int *)&PTR_FUN_0041a5d0,'\x01',extraout_ECX_01);
  param_1[4] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_0041d1d4;
  piVar1[5] = (int)(param_1 + 0xe);
  piVar1 = FUN_0041c16c((int *)&PTR_FUN_0041a6d0,'\x01',extraout_ECX_02);
  param_1[5] = (int)piVar1;
  piVar1[3] = (int)param_1;
  piVar1[2] = (int)&LAB_0041d1f4;
  piVar1[5] = (int)(param_1 + 0xe);
  param_1[8] = 0xcc0020;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_0041279c(DAT_005736a8,(int)param_1);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

