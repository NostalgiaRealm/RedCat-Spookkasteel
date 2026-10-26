/*
 * FUN_0050d474 at 0050d474
 * undefined4 __register FUN_0050d474(int param_1)
 * Address ranges: 0050d474-0050d492
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050d474(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x280) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x280) + 0x48));
}

