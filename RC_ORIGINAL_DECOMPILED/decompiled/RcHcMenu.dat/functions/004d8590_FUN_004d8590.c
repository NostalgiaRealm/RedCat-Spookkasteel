/*
 * FUN_004d8590 at 004d8590
 * int * __register FUN_004d8590(int * param_1, char param_2, int * param_3)
 * Address ranges: 004d8590-004d8654
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004d8590(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
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
  FUN_00428e78(param_1,'\0',param_3);
  piVar1 = FUN_0041b974((int *)&PTR_FUN_0041a454,'\x01',extraout_ECX_00);
  param_1[0x4e] = (int)piVar1;
  piVar1 = FUN_0041b974((int *)&PTR_FUN_0041a454,'\x01',extraout_ECX_01);
  param_1[0x4f] = (int)piVar1;
  FUN_00432904((int)param_1,-0x15);
  FUN_0041be14((int *)param_1[0x16],4);
  FUN_0041bb48((int *)param_1[0x16],0xff0000,extraout_ECX_02);
  FUN_0041be14((int *)param_1[0x4e],4);
  FUN_0041bb48((int *)param_1[0x4e],0xff,extraout_ECX_03);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

