/*
 * FUN_004e8ee8 at 004e8ee8
 * undefined __register FUN_004e8ee8(int param_1)
 * Address ranges: 004e8ee8-004e8f39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e8ee8(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint local_18;
  undefined1 local_14;
  undefined1 local_9;
  int local_8;
  
  puStack_1c = (undefined1 *)0x4e8eff;
  local_8 = param_1;
  FUN_00404780((int)&local_18,(int)&DAT_004e7d2c);
  puStack_20 = &LAB_004e8f3a;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004e9030(local_8,&local_18);
  local_9 = local_14;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004e8f41;
  puStack_20 = (undefined1 *)0x4e8f39;
  FUN_0040484c((int)&local_18,(int)&DAT_004e7d2c);
  return;
}

