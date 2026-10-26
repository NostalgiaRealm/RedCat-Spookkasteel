/*
 * FUN_0051ced4 at 0051ced4
 * undefined __register FUN_0051ced4(int param_1, char param_2)
 * Address ranges: 0051ced4-0051cf31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051ced4(int param_1,char param_2)

{
  if ((*(char *)(param_1 + 0x30) != param_2) && (*(char *)(param_1 + 8) == '\0')) {
    *(char *)(param_1 + 0x30) = param_2;
    FUN_0051e908(*(int **)(param_1 + 0x3c));
    FUN_0051eb30(*(int **)(param_1 + 0x3c),0);
    FUN_0051f124(*(int **)(param_1 + 0x3c));
    FUN_0052086c(*(int *)(param_1 + 0x3c),param_1);
  }
  return;
}

