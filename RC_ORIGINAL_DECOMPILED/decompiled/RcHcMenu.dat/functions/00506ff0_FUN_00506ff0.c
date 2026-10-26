/*
 * FUN_00506ff0 at 00506ff0
 * undefined4 __register FUN_00506ff0(int param_1)
 * Address ranges: 00506ff0-0050700e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00506ff0(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x280) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x280) + 0x48));
}

