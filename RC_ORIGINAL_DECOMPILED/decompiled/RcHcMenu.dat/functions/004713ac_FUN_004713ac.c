/*
 * FUN_004713ac at 004713ac
 * undefined __register FUN_004713ac(int param_1, undefined1 param_2)
 * Address ranges: 004713ac-004713bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004713ac(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x8d) = param_2;
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
  *(undefined1 *)(param_1 + 0x92) = 0;
  return;
}

