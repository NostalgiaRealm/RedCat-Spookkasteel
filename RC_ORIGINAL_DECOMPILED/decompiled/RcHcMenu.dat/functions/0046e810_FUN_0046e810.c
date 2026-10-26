/*
 * FUN_0046e810 at 0046e810
 * undefined4 __register FUN_0046e810(int param_1)
 * Address ranges: 0046e810-0046e81d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046e810(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 4) + 0x24);
  }
  return 0;
}

