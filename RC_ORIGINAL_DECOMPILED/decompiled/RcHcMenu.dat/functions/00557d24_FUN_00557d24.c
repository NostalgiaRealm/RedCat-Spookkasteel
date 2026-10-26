/*
 * FUN_00557d24 at 00557d24
 * int * __register FUN_00557d24(int * param_1, char param_2, int * param_3)
 * Address ranges: 00557d24-00557ee1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00557d24(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  char extraout_DL;
  char cVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar4 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar4 = extraout_DL;
  }
  FUN_004a88f4(param_1,'\0',param_3);
  piVar3 = FUN_00558b94((int *)&PTR_FUN_00557bf8,'\x01',param_1);
  param_1[0x62] = (int)piVar3;
  piVar3 = FUN_004a0e64((int *)&PTR_FUN_004a0d80,'\x01',param_1);
  param_1[0x6b] = (int)piVar3;
  iVar1 = param_1[0x6b];
  *(int **)(iVar1 + 0x1c) = param_1;
  uVar2 = *(undefined4 *)(*param_1 + 0xf4);
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  FUN_004a18e0(param_1[0x6b],uVar2,extraout_ECX_00,*(undefined4 *)(*param_1 + 0xf0),param_1);
  piVar3 = FUN_0049c9d8((int *)&PTR_FUN_0049c868,'\x01',param_1);
  param_1[0x65] = (int)piVar3;
  FUN_0049cb24(param_1[0x65],'\0',extraout_ECX_01);
  FUN_0049cb7c(param_1[0x65],extraout_EDX,extraout_ECX_02,*(undefined4 *)(*param_1 + 0x104),param_1)
  ;
  piVar3 = FUN_0049c9d8((int *)&PTR_FUN_0049c868,'\x01',param_1);
  param_1[0x66] = (int)piVar3;
  FUN_0049cb24(param_1[0x66],'\0',extraout_ECX_03);
  FUN_0049cb7c(param_1[0x66],extraout_EDX_00,extraout_ECX_04,*(undefined4 *)(*param_1 + 0x108),
               param_1);
  piVar3 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',extraout_ECX_05);
  param_1[0x6c] = (int)piVar3;
  FUN_00431f98(param_1,*(undefined4 *)(param_1[0x62] + 0x3c));
  FUN_00431f78(param_1,200);
  *(undefined1 *)((int)param_1 + 0x1bd) = 0xff;
  param_1[0x5d] = 5;
  param_1[0x5c] = 1;
  param_1[0x5e] = 0;
  param_1[0x5f] = 100;
  param_1[99] = 0xfa;
  param_1[100] = 0x32;
  if (cVar4 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

