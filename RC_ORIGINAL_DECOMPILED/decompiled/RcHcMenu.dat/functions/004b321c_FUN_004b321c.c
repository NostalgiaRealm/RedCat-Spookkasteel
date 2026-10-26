/*
 * FUN_004b321c at 004b321c
 * int * __register FUN_004b321c(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 004b321c-004b33b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004b321c(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  undefined4 extraout_ECX_09;
  undefined4 extraout_ECX_10;
  char extraout_DL;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_0045b418(param_1,'\0',param_3);
  FUN_00403e04(param_1 + 1,(undefined4 *)&DAT_004b33c4);
  *(undefined1 *)(param_1 + 2) = 1;
  FUN_00403e04(param_1 + 3,(undefined4 *)&DAT_004b33c4);
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined1 *)((int)param_1 + 0x11) = 0x3a;
  *(undefined1 *)((int)param_1 + 0x12) = 0x20;
  FUN_00403e04(param_1 + 5,(undefined4 *)&LAB_004b33d0);
  *(undefined1 *)(param_1 + 6) = 0x2a;
  piVar1 = FUN_004b5b0c((int *)&DAT_004b28a0,'\x01',5,0,'\x01');
  param_1[8] = (int)piVar1;
  iVar2 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_00);
  param_1[0x12] = iVar2;
  iVar2 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_01);
  param_1[0x13] = iVar2;
  piVar1 = FUN_004b59e4((int *)&PTR_FUN_004b29e8,'\x01',extraout_ECX_02);
  param_1[0xc] = (int)piVar1;
  iVar2 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_03);
  param_1[0x14] = iVar2;
  piVar1 = FUN_0046f014((int *)&PTR_FUN_004663b4,'\x01',extraout_ECX_04);
  param_1[0xd] = (int)piVar1;
  piVar1 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX_05);
  param_1[10] = (int)piVar1;
  piVar1 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',extraout_ECX_06);
  param_1[0xb] = (int)piVar1;
  iVar2 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_07);
  param_1[0x15] = iVar2;
  iVar2 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_08);
  param_1[0x16] = iVar2;
  iVar2 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_09);
  param_1[0x10] = iVar2;
  iVar2 = FUN_00403064((int *)&PTR_FUN_00410ca8,'\x01',extraout_ECX_10);
  param_1[0x17] = iVar2;
  piVar1 = FUN_004b138c((int *)&DAT_004b253c,'\x01',5,1);
  param_1[0x11] = (int)piVar1;
  param_1[7] = 0;
  param_1[0xf] = 0;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

