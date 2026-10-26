/*
 * FUN_0041c42c at 0041c42c
 * undefined4 __register FUN_0041c42c(int param_1)
 * Address ranges: 0041c42c-0041c432
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041c42c(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x1c));
}

