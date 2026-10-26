/*
 * FUN_004a0ed8 at 004a0ed8
 * undefined __register FUN_004a0ed8(int * param_1, char param_2)
 * Address ranges: 004a0ed8-004a0f1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a0ed8(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte local_9;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4a0ee3;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_14 = &LAB_004a0f1e;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  local_9 = extraout_DL;
  FUN_0040e4b4(local_8 + 3);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004a0f25;
  puStack_14 = (undefined1 *)0x4a0f1d;
  FUN_00412a48(local_8,local_9 & 0xfc);
  return;
}

