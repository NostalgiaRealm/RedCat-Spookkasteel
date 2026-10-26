/*
 * FUN_00512ab0 at 00512ab0
 * undefined4 __register FUN_00512ab0(int param_1)
 * Address ranges: 00512ab0-00512ace
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00512ab0(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x290) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x290) + 0x4b));
}

