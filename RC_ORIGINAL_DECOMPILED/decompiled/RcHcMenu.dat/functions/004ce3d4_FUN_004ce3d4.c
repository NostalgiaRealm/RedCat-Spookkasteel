/*
 * FUN_004ce3d4 at 004ce3d4
 * undefined __register FUN_004ce3d4(int param_1, int param_2)
 * Address ranges: 004ce3d4-004ce429
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ce3d4(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  FUN_00403e04((int *)(param_1 + 0x10),*(undefined4 **)(param_2 + 0x10));
  FUN_00403e04((int *)(param_1 + 0x14),*(undefined4 **)(param_2 + 0x14));
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  return;
}

