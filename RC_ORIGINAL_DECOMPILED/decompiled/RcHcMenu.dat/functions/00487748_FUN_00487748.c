/*
 * FUN_00487748 at 00487748
 * undefined4 __register FUN_00487748(int param_1)
 * Address ranges: 00487748-00487758
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00487748(int param_1)

{
  if (*(int *)(param_1 + 0x22c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x22c) + 0x74);
  }
  return 0;
}

