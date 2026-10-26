/*
 * FUN_00543a04 at 00543a04
 * undefined4 __register FUN_00543a04(int param_1)
 * Address ranges: 00543a04-00543a22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00543a04(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x2a4) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x2a4) + 0x4c));
}

