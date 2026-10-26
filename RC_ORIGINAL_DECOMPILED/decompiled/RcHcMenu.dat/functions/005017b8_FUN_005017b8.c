/*
 * FUN_005017b8 at 005017b8
 * undefined4 __register FUN_005017b8(int param_1)
 * Address ranges: 005017b8-005017d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005017b8(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x234) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x234) + 8));
}

