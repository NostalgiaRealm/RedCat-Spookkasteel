/*
 * FUN_00535a70 at 00535a70
 * undefined4 __register FUN_00535a70(int param_1)
 * Address ranges: 00535a70-00535a8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00535a70(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x2fc) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x2fc) + 0x48));
}

