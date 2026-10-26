/*
 * FUN_004a6930 at 004a6930
 * undefined __register FUN_004a6930(int * param_1, char param_2)
 * Address ranges: 004a6930-004a69d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a62a0 slot -1 for TResourceManager. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a62a0 slot -1 for
   TResourceManager. Original bytes unchanged; names and types still inferred. */

void FUN_004a6930(int *param_1,char param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  byte local_9;
  int *local_8;
  
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_118 = (undefined1 *)0x4a6946;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_11c = &LAB_004a69d5;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puStack_118 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,2);
  xvga_exit_fileio();
  FUN_00403084(local_8,local_9 & 0xfc);
  *in_FS_OFFSET = "Destroy";
  FUN_00403dd4(&local_14,2);
  return;
}

