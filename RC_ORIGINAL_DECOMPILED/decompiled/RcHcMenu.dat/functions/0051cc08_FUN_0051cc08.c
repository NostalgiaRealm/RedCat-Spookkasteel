/*
 * FUN_0051cc08 at 0051cc08
 * undefined __register FUN_0051cc08(int param_1, char param_2)
 * Address ranges: 0051cc08-0051cc44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051cc08(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x24) != param_2) {
    *(char *)(param_1 + 0x24) = param_2;
    FUN_0051f14c(*(int **)(param_1 + 0x3c),param_1);
    FUN_0051e908(*(int **)(param_1 + 0x3c));
  }
  return;
}

