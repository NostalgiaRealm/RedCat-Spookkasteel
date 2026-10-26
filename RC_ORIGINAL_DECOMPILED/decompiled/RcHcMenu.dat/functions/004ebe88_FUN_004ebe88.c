/*
 * FUN_004ebe88 at 004ebe88
 * undefined __register FUN_004ebe88(undefined4 param_1, int param_2)
 * Address ranges: 004ebe88-004ebeea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ebe88(undefined4 param_1,int param_2)

{
  FUN_00403e04((int *)(param_2 + 4),(undefined4 *)&DAT_004ebef4);
  *(undefined1 *)(param_2 + 8) = 1;
  FUN_00403e04((int *)(param_2 + 0xc),(undefined4 *)&DAT_004ebef4);
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(undefined1 *)(param_2 + 0x11) = 0x3a;
  *(undefined1 *)(param_2 + 0x12) = 0x20;
  FUN_00403e04((int *)(param_2 + 0x14),(undefined4 *)&LAB_004ebf00);
  *(undefined1 *)(param_2 + 0x18) = 0x2a;
  return;
}

