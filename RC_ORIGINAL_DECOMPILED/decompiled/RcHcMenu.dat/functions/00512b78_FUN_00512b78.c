/*
 * FUN_00512b78 at 00512b78
 * undefined4 __register FUN_00512b78(int param_1)
 * Address ranges: 00512b78-00512b96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00512b78(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x290) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x290) + 0x4a));
}

