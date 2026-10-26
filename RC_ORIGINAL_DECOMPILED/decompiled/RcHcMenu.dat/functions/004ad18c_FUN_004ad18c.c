/*
 * FUN_004ad18c at 004ad18c
 * int * __register FUN_004ad18c(int * param_1, char param_2, int * param_3)
 * Address ranges: 004ad18c-004ad31c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004ad18c(int *param_1,char param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 extraout_ECX_07;
  undefined4 extraout_ECX_08;
  char extraout_DL;
  char cVar3;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 *in_FS_OFFSET;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 in_stack_ffffffdc;
  undefined4 in_stack_ffffffe0;
  byte local_11;
  
  cVar3 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffdc,in_stack_ffffffe0);
    param_3 = extraout_ECX;
    cVar3 = extraout_DL;
  }
  FUN_00418f00(param_1,'\0',param_3);
  iVar1 = FUN_00403064((int *)&PTR_FUN_004ac324,'\x01',extraout_ECX_00);
  param_1[0x1a] = iVar1;
  iVar1 = param_1[0x1a];
  *(int **)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(*param_1 + 0x30);
  *(undefined1 *)((int)param_1 + 0x6d) = 1;
  *(undefined1 *)((int)param_1 + 0x6e) = 2;
  local_11 = 0;
  do {
    piVar2 = FUN_004a0e64((int *)&PTR_FUN_004a0d80,'\x01',param_1);
    param_1[local_11 + 9] = (int)piVar2;
    iVar1 = param_1[local_11 + 9];
    *(int **)(iVar1 + 0x1c) = param_1;
    *(undefined1 **)(iVar1 + 0x18) = &LAB_004ad7e0;
    local_11 = local_11 + 1;
  } while (local_11 != 7);
  pcVar4 = FUN_004ad660;
  piVar2 = param_1;
  iVar1 = FUN_004ad478((int)param_1,0);
  FUN_004a18e0(iVar1,extraout_EDX,extraout_ECX_01,pcVar4,piVar2);
  puVar5 = &LAB_004ad684;
  piVar2 = param_1;
  iVar1 = FUN_004ad478((int)param_1,1);
  FUN_004a18e0(iVar1,extraout_EDX_00,extraout_ECX_02,puVar5,piVar2);
  puVar5 = &LAB_004ad6a8;
  piVar2 = param_1;
  iVar1 = FUN_004ad478((int)param_1,2);
  FUN_004a18e0(iVar1,extraout_EDX_01,extraout_ECX_03,puVar5,piVar2);
  puVar5 = &LAB_004ad6cc;
  piVar2 = param_1;
  iVar1 = FUN_004ad478((int)param_1,3);
  FUN_004a18e0(iVar1,extraout_EDX_02,extraout_ECX_04,puVar5,piVar2);
  puVar5 = &LAB_004ad6f0;
  piVar2 = param_1;
  iVar1 = FUN_004ad478((int)param_1,4);
  FUN_004a18e0(iVar1,extraout_EDX_03,extraout_ECX_05,puVar5,piVar2);
  param_1[0x10] = 100;
  param_1[0x11] = 0x32;
  iVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_06);
  param_1[0x12] = iVar1;
  piVar2 = FUN_0041b974((int *)&PTR_FUN_0041a454,'\x01',extraout_ECX_07);
  param_1[0x13] = (int)piVar2;
  piVar2 = FUN_0041b974((int *)&PTR_FUN_0041a454,'\x01',extraout_ECX_08);
  param_1[0x14] = (int)piVar2;
  *(undefined1 *)((int)param_1 + 0x5d) = 0xff;
  if (cVar3 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffdc;
  }
  return param_1;
}

