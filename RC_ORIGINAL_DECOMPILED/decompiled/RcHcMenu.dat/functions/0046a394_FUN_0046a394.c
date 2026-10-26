/*
 * FUN_0046a394 at 0046a394
 * undefined __register FUN_0046a394(int * param_1)
 * Address ranges: 0046a394-0046a3d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046a394(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  byte *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_14 = &LAB_0046a3d4;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  (**(code **)(*param_1 + 0x58))(param_1,&local_8);
  FUN_00409c44(local_8);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0046a3db;
  puStack_14 = (undefined1 *)0x46a3d3;
  FUN_00403db0((int *)&local_8);
  return;
}

