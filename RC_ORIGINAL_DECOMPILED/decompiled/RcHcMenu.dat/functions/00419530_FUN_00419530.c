/*
 * FUN_00419530 at 00419530
 * undefined4 __register FUN_00419530(int param_1)
 * Address ranges: 00419530-0041953d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00419530(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0x10) + 8);
  }
  return 0;
}

