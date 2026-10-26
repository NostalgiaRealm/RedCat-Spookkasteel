/*
 * FUN_00521710 at 00521710
 * undefined __register FUN_00521710(int param_1, char param_2)
 * Address ranges: 00521710-00521773
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00521710(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x22d) != param_2) {
    *(char *)(param_1 + 0x22d) = param_2;
    (**(code **)(**(int **)(param_1 + 0x274) + 0x74))();
    if (*(char *)(param_1 + 0x22d) == '\0') {
      FUN_00516508(*(int *)(*(int *)(param_1 + 0x274) + 0x208));
    }
    else {
      FUN_00521894(param_1,'\x01');
    }
  }
  return;
}

