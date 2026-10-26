/*
 * FUN_0050d434 at 0050d434
 * undefined4 __register FUN_0050d434(int param_1)
 * Address ranges: 0050d434-0050d452
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050d434(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x280) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x280) + 0x4b));
}

