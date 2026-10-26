/*
 * FUN_00471648 at 00471648
 * undefined __register FUN_00471648(int * param_1, char param_2)
 * Address ranges: 00471648-00471663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471648(int *param_1,char param_2)

{
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x1d8))();
    return;
  }
  if (*(char *)((int)param_1 + 0x8d) != '\f') {
    FUN_00471594(param_1);
  }
  return;
}

