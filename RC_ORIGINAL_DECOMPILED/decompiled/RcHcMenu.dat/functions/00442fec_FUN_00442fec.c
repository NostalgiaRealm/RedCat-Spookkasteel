/*
 * FUN_00442fec at 00442fec
 * undefined4 __register FUN_00442fec(int param_1)
 * Address ranges: 00442fec-00442ff9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00442fec(int param_1)

{
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x50) + 8);
}

