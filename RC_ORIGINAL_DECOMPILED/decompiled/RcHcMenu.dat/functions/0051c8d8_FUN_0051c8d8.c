/*
 * FUN_0051c8d8 at 0051c8d8
 * undefined __register FUN_0051c8d8(int param_1, char param_2)
 * Address ranges: 0051c8d8-0051c909
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051c8d8(int param_1,char param_2)

{
  if (*(char *)(param_1 + 7) != param_2) {
    *(char *)(param_1 + 7) = param_2;
    FUN_0051f14c(*(int **)(param_1 + 0x3c),param_1);
  }
  return;
}

