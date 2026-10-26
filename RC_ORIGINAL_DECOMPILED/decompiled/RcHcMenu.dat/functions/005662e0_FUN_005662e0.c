/*
 * FUN_005662e0 at 005662e0
 * undefined __register FUN_005662e0(int * param_1)
 * Address ranges: 005662e0-005663aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005662e0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 *puStack_134;
  char *pcStack_130;
  undefined *puStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_120 = &LAB_005663e2;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  iStack_128 = 0x566318;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  iStack_128 = 0x566326;
  FUN_00403fd4(&local_14,local_114);
  iStack_128 = local_14;
  puStack_12c = &DAT_005663f8;
  pcStack_130 = "ReadInstalledResolution";
  puStack_134 = (undefined4 *)0x566340;
  FUN_004040f0((int *)&local_10,3);
  puStack_134 = local_10;
  uStack_138 = 0x566349;
  uVar2 = FUN_004a418c();
  puVar1 = puStack_134;
  puStack_134 = (undefined4 *)0x566355;
  FUN_004a48b8(uVar2,puVar1,0);
  puStack_134 = (undefined4 *)0x566372;
  FUN_0040407c((int *)&local_118,*(undefined4 **)(*(int *)PTR_DAT_00572108 + 0x110),
               (undefined4 *)"Settings\\Game.ini");
  puStack_134 = (undefined4 *)0x566384;
  local_c = FUN_0045c5fc((int *)&PTR_FUN_0045c5a0,'\x01',local_118);
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  *in_FS_OFFSET = uStack_13c;
  puStack_134 = (undefined4 *)&LAB_005663b2;
  uStack_138 = 0x5663aa;
  FUN_00403094(local_c);
  return;
}

