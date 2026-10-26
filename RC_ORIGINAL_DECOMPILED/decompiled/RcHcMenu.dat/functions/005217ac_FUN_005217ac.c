/*
 * FUN_005217ac at 005217ac
 * undefined __register FUN_005217ac(int param_1, char param_2)
 * Address ranges: 005217ac-005217f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005217ac(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x22c) != param_2) {
    *(char *)(param_1 + 0x22c) = param_2;
    (**(code **)(**(int **)(param_1 + 0x274) + 0x74))();
    (**(code **)(**(int **)(param_1 + 0x284) + 0x74))();
  }
  return;
}

