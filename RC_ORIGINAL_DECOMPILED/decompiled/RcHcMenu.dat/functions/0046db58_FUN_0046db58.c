/*
 * FUN_0046db58 at 0046db58
 * undefined4 __register FUN_0046db58(int param_1)
 * Address ranges: 0046db58-0046db82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046db58(int param_1)

{
  if (*(int *)(param_1 + 0xdc) == 0) {
    FUN_0046daec(*(int *)(param_1 + 0xd0),(int *)(param_1 + 0xdc));
  }
  return *(undefined4 *)(param_1 + 0xdc);
}

