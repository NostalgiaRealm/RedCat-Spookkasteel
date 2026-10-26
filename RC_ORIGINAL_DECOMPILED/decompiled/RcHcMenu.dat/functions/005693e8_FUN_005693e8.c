/*
 * FUN_005693e8 at 005693e8
 * undefined __register FUN_005693e8(int * param_1)
 * Address ranges: 005693e8-005694ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005693e8(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  undefined4 *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  local_c = (undefined *)0x0;
  puStack_120 = &LAB_005694ef;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  if (local_8[0x46] == 0) {
    FUN_00403d94(" Player = nil: SavePlayer");
  }
  FUN_004b0344(*(undefined4 *)(local_8[0x47] + 0x28),(int *)&local_118);
  FUN_0040407c((int *)&local_c,(undefined4 *)local_8[0x44],local_118);
  FUN_00566158((int *)local_8[0x46],local_c);
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "SavePlayer";
  FUN_00403db0((int *)&local_118);
  FUN_00403dd4(&local_14,3);
  return;
}

