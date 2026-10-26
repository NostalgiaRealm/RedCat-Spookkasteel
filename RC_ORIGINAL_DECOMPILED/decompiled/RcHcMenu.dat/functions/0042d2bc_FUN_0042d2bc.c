/*
 * FUN_0042d2bc at 0042d2bc
 * undefined __register FUN_0042d2bc(int param_1)
 * Address ranges: 0042d2bc-0042d2d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042d2bc(int param_1)

{
  if ((*(int *)(param_1 + 4) != 0) && (*(char *)(param_1 + 0xd) == '\0')) {
    FUN_0042d278(param_1);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}

