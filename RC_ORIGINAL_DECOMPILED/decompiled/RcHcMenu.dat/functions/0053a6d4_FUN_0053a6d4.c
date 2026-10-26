/*
 * FUN_0053a6d4 at 0053a6d4
 * undefined __register FUN_0053a6d4(int param_1)
 * Address ranges: 0053a6d4-0053a712
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053a6d4(int param_1)

{
  if ((*(char *)(*(int *)(param_1 + 0x290) + 0x18) != '\0') &&
     ((byte)(*(char *)(param_1 + 0x2d8) - 1U) < 3)) {
    FUN_00549860(*(int **)(param_1 + 0x290));
  }
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  return;
}

