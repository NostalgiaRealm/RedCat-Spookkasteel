/*
 * FUN_00487734 at 00487734
 * undefined4 __register FUN_00487734(int param_1)
 * Address ranges: 00487734-00487744
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00487734(int param_1)

{
  if (*(int *)(param_1 + 0x22c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x22c) + 0x70);
  }
  return 0;
}

