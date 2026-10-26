/*
 * FUN_004e8fa8 at 004e8fa8
 * undefined __register FUN_004e8fa8(int param_1, int * param_2)
 * Address ranges: 004e8fa8-004e9001
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e8fa8(int param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  uint local_18 [2];
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  puStack_1c = (undefined1 *)0x4e8fc2;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404780((int)local_18,(int)&DAT_004e7d2c);
  puStack_20 = &LAB_004e9002;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_004e9030(local_8,local_18);
  FUN_00403e04(local_c,local_10);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_004e9009;
  puStack_20 = (undefined1 *)0x4e9001;
  FUN_0040484c((int)local_18,(int)&DAT_004e7d2c);
  return;
}

