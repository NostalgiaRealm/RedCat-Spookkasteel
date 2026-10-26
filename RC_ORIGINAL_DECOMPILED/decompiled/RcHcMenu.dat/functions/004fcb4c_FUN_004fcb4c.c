/*
 * FUN_004fcb4c at 004fcb4c
 * undefined __register FUN_004fcb4c(int param_1)
 * Address ranges: 004fcb4c-004fcb95;004fcbb6-004fcc03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004fcb4c(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = &stack0xfffffffc;
  if (*(int *)(param_1 + 0x250) != 0) {
    puStack_28 = &LAB_004fcb96;
    uStack_2c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_2c;
    FUN_0040ab80(*(undefined **)(param_1 + 0x250));
    *in_FS_OFFSET = uStack_2c;
  }
  return;
}

