/*
 * FUN_00431b5c at 00431b5c
 * undefined4 __register FUN_00431b5c(int param_1)
 * Address ranges: 00431b5c-00431b69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00431b5c(int param_1)

{
  if (*(int *)(param_1 + 0x5c) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x10);
  }
  return 0;
}

