/*
 * FUN_004a3d94 at 004a3d94
 * undefined __register FUN_004a3d94(int * param_1)
 * Address ranges: 004a3d94-004a3e27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a3b08 slot 2 for TDataObject. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a3b08 slot 2 for
   TDataObject. Original bytes unchanged; names and types still inferred. */

void FUN_004a3d94(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  undefined4 *local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = (undefined4 *)0x0;
  puStack_11c = &LAB_004a3e28;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  local_8 = param_1;
  (**(code **)(*(int *)param_1[1] + 0x40))();
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4((int *)&local_14,local_114);
  FUN_0040407c(&local_10,(undefined4 *)"---Class: ",local_14);
  (**(code **)(*(int *)local_8[1] + 0x34))((int *)local_8[1],local_10);
  (**(code **)*local_8)();
  local_c = local_8[1];
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004a3e2f;
  puStack_11c = (undefined1 *)0x4a3e27;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

