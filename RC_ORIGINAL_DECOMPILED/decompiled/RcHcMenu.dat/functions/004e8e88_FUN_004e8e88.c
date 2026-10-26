/*
 * FUN_004e8e88 at 004e8e88
 * undefined __register FUN_004e8e88(int param_1)
 * Address ranges: 004e8e88-004e8ed9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e8e88(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint local_18 [3];
  uint local_c;
  int local_8;
  
  puStack_1c = (undefined1 *)0x4e8e9f;
  local_8 = param_1;
  FUN_00404780((int)local_18,(int)&DAT_004e7d2c);
  puStack_20 = &LAB_004e8eda;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004e9030(local_8,local_18);
  local_c = local_18[0];
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004e8ee1;
  puStack_20 = (undefined1 *)0x4e8ed9;
  FUN_0040484c((int)local_18,(int)&DAT_004e7d2c);
  return;
}

