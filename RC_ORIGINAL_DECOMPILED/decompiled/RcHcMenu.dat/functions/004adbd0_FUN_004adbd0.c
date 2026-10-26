/*
 * FUN_004adbd0 at 004adbd0
 * int * __register FUN_004adbd0(int * param_1, char param_2, int * param_3)
 * Address ranges: 004adbd0-004adcfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004adbd0(int *param_1,char param_2,int *param_3)

{
  int *piVar1;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  char extraout_DL;
  char cVar2;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe0;
  undefined4 in_stack_ffffffe4;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe0,in_stack_ffffffe4);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_004a88f4(param_1,'\0',param_3);
  piVar1 = FUN_0049a2d4((int *)&LAB_0049893c,'\x01',extraout_ECX_00);
  param_1[0x5f] = (int)piVar1;
  FUN_0049b884((int *)param_1[0x5f],(int *)&DAT_00000064,0x32,(undefined *)0x20);
  FUN_00431f78(param_1,100);
  FUN_00431f98(param_1,0x32);
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 0;
  param_1[0x10] = param_1[0x10] & 0xffffff7f;
  piVar1 = FUN_004a9908((int *)&PTR_FUN_004a95f8,'\x01',param_1);
  param_1[0x62] = (int)piVar1;
  param_1[100] = 0x3c;
  if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
    piVar1 = FUN_0049c9d8((int *)&PTR_FUN_0049c868,'\x01',param_1);
    param_1[0x61] = (int)piVar1;
    FUN_0049cb50(param_1[0x61],param_1[100],extraout_ECX_01);
    FUN_0049cb7c(param_1[0x61],extraout_EDX,extraout_ECX_02,&LAB_004addcc,param_1);
  }
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe0;
  }
  return param_1;
}

