/*
 * FUN_005417f8 at 005417f8
 * undefined4 __register FUN_005417f8(int param_1)
 * Address ranges: 005417f8-00541819
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005417f8(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x280) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x280) + 0x204));
}

