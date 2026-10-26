/*
 * FUN_0055bbd8 at 0055bbd8
 * undefined __register FUN_0055bbd8(int * param_1, undefined4 param_2)
 * Address ranges: 0055bbd8-0055be20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot published:GDIFormShow for TfrmOptions. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x55af50 slot
   published:GDIFormShow for TfrmOptions. Original bytes unchanged; names and types still inferred.
    */

void FUN_0055bbd8(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_11c = &LAB_0055be21;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar2 = local_10;
  uVar3 = FUN_004a418c();
  FUN_004a48b8(uVar3,puVar2,1);
  FUN_0054ee68((int)local_8);
  FUN_00432744(local_8[0xc0],*(uint **)(PTR_DAT_00572404 + 0xa4));
  FUN_00432bec(*(int **)(local_8[199] + 0x214),extraout_EDX,extraout_ECX);
  iVar1 = *(int *)(local_8[0xc6] + 0x218);
  *(int **)(iVar1 + 0x10c) = local_8;
  *(code **)(iVar1 + 0x108) = FUN_0055b4b8;
  iVar1 = *(int *)(local_8[0xc6] + 0x21c);
  *(int **)(iVar1 + 0x10c) = local_8;
  *(code **)(iVar1 + 0x108) = FUN_0055b4b8;
  iVar1 = *(int *)(local_8[0xc6] + 0x220);
  *(int **)(iVar1 + 0x10c) = local_8;
  *(code **)(iVar1 + 0x108) = FUN_0055b4b8;
  iVar1 = *(int *)(local_8[199] + 0x218);
  *(int **)(iVar1 + 0x10c) = local_8;
  *(code **)(iVar1 + 0x108) = FUN_0055b6fc;
  iVar1 = *(int *)(local_8[199] + 0x21c);
  *(int **)(iVar1 + 0x10c) = local_8;
  *(code **)(iVar1 + 0x108) = FUN_0055b6fc;
  iVar1 = *(int *)(local_8[199] + 0x220);
  *(int **)(iVar1 + 0x10c) = local_8;
  *(code **)(iVar1 + 0x108) = FUN_0055b6fc;
  iVar1 = *(int *)(local_8[0xc6] + 0x214);
  *(int **)(iVar1 + 0x10c) = local_8;
  *(undefined1 **)(iVar1 + 0x108) = &LAB_0055b8b8;
  iVar1 = *(int *)(local_8[200] + 0x1fc);
  *(int **)(iVar1 + 0x1a4) = local_8;
  *(code **)(iVar1 + 0x1a0) = FUN_0055b98c;
  iVar1 = *(int *)(local_8[0xc9] + 0x1fc);
  *(int **)(iVar1 + 0x1a4) = local_8;
  *(code **)(iVar1 + 0x1a0) = FUN_0055baa0;
  DAT_00574898 = 1;
  FUN_0055b4b8((int)local_8,local_c);
  FUN_0055b6fc((int)local_8,local_c);
  DAT_00574898 = 0;
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"Mn_In01");
  uVar3 = FUN_004a418c();
  FUN_004a49b0(uVar3);
  *in_FS_OFFSET = "FormShow";
  FUN_00403dd4(&local_14,2);
  return;
}

