/*
 * FUN_00437280 at 00437280
 * undefined4 __register FUN_00437280(int param_1)
 * Address ranges: 00437280-00437290
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00437280(int param_1)

{
  if (*(int *)(param_1 + 0x140) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x140) + 8);
  }
  return 0;
}

