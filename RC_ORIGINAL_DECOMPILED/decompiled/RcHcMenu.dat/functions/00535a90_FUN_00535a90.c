/*
 * FUN_00535a90 at 00535a90
 * undefined4 __register FUN_00535a90(int param_1)
 * Address ranges: 00535a90-00535aae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00535a90(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x2fc) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x2fc) + 0x49));
}

