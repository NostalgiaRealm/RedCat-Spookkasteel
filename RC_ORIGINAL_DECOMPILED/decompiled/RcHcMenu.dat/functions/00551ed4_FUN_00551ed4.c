/*
 * FUN_00551ed4 at 00551ed4
 * undefined __register FUN_00551ed4(int * param_1, undefined4 * param_2)
 * Address ranges: 00551ed4-00551f9b;00551fba-00551fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00551ed4(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_154;
  undefined1 *puStack_150;
  undefined1 *puStack_14c;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined4 *puStack_140;
  char *pcStack_13c;
  undefined *puStack_138;
  int iStack_134;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  byte local_118 [256];
  int local_18;
  undefined4 *local_14;
  int *local_10;
  undefined4 *local_c;
  int *local_8;
  
  local_14 = (undefined4 *)0x0;
  local_18 = 0;
  puStack_128 = (undefined1 *)0x551ef6;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_12c = &LAB_00552004;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  iStack_134 = 0x551f14;
  puStack_128 = &stack0xfffffffc;
  FUN_00402fe0(*local_8,local_118);
  iStack_134 = 0x551f22;
  FUN_00403fd4(&local_18,local_118);
  iStack_134 = local_18;
  puStack_138 = &DAT_0055201c;
  pcStack_13c = "LoadFromIniFile";
  puStack_140 = (undefined4 *)0x551f3c;
  FUN_004040f0((int *)&local_14,3);
  puStack_140 = local_14;
  puStack_144 = (undefined1 *)0x551f45;
  uVar2 = FUN_004a418c();
  puVar1 = puStack_140;
  puStack_140 = (undefined4 *)0x551f51;
  FUN_004a48b8(uVar2,puVar1,0);
  local_10 = (int *)0x0;
  puStack_144 = &LAB_00551fd0;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  puStack_14c = (undefined1 *)0x551f73;
  puStack_140 = (undefined4 *)&stack0xfffffffc;
  local_10 = FUN_0045c5fc((int *)&PTR_FUN_004a4db4,'\x01',local_c);
  puStack_150 = &LAB_00551f9c;
  uStack_154 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_154;
  puStack_14c = &stack0xfffffffc;
  FUN_0056b850(local_8[2],local_10);
  *in_FS_OFFSET = uStack_154;
  *in_FS_OFFSET = uStack_148;
  puStack_140 = (undefined4 *)&LAB_00551fd7;
  puStack_144 = (undefined1 *)0x551fcf;
  FUN_00403094(local_10);
  return;
}

