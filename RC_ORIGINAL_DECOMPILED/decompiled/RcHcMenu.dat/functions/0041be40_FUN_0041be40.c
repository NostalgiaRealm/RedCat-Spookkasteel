/*
 * FUN_0041be40 at 0041be40
 * undefined4 __register FUN_0041be40(int param_1)
 * Address ranges: 0041be40-0041be46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041be40(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x18));
}

