/*
 * FUN_0054f4b4 at 0054f4b4
 * undefined __register FUN_0054f4b4(int * param_1, int * param_2)
 * Address ranges: 0054f4b4-0054f59f;0054f5c0-0054f5e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054f4b4(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14c;
  undefined1 *puStack_148;
  undefined4 *puStack_144;
  char *pcStack_140;
  undefined *puStack_13c;
  undefined1 *puStack_138;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  byte local_11c [256];
  int local_1c;
  undefined4 *local_18;
  uint local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_18 = (undefined4 *)0x0;
  local_1c = 0;
  puStack_130 = &LAB_0054f5e5;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  puStack_138 = (undefined1 *)0x54f4ec;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_11c);
  puStack_138 = (undefined1 *)0x54f4fa;
  FUN_00403fd4(&local_1c,local_11c);
  puStack_138 = (undefined1 *)local_1c;
  puStack_13c = &DAT_0054f5fc;
  pcStack_140 = "StopSoundBuffer";
  puStack_144 = (undefined4 *)0x54f514;
  FUN_004040f0((int *)&local_18,3);
  puStack_144 = local_18;
  puStack_148 = (undefined1 *)0x54f51d;
  uVar2 = FUN_004a418c();
  puVar1 = puStack_144;
  puStack_144 = (undefined4 *)0x54f529;
  FUN_004a48b8(uVar2,puVar1,0);
  puStack_148 = &LAB_0054f5a0;
  uStack_14c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14c;
  uVar2 = *(int *)(local_8[7] + 8) - 1;
  puStack_144 = (undefined4 *)&stack0xfffffffc;
  if (SBORROW4(*(int *)(local_8[7] + 8),1)) {
    puStack_144 = (undefined4 *)&stack0xfffffffc;
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    do {
      local_14 = uVar2;
      local_10 = (int *)FUN_00412384((undefined4 *)local_8[7],local_14);
      if (local_10 == local_c) {
        (**(code **)(*(int *)local_10[1] + 0x48))();
        FUN_00412224((int *)local_8[7],local_14);
        FUN_00403094(local_10);
      }
      local_14 = local_14 - 1;
      uVar2 = local_14;
    } while (local_14 != 0xffffffff);
  }
  *in_FS_OFFSET = uStack_14c;
  puStack_144 = (undefined4 *)0x54f5c5;
  uVar2 = FUN_004a418c();
  puStack_144 = (undefined4 *)0x54f5ca;
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = pcStack_140;
  puStack_138 = &LAB_0054f5ec;
  puStack_13c = (undefined *)0x54f5e4;
  FUN_00403dd4(&local_1c,2);
  return;
}

