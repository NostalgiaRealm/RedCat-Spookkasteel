/*
 * FUN_00512bbc at 00512bbc
 * undefined4 __register FUN_00512bbc(int param_1)
 * Address ranges: 00512bbc-00512bda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00512bbc(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x290) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x290) + 0x4c));
}

