/*
 * FUN_00512b34 at 00512b34
 * undefined4 __register FUN_00512b34(int param_1)
 * Address ranges: 00512b34-00512b52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00512b34(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x290) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x290) + 0x49));
}

