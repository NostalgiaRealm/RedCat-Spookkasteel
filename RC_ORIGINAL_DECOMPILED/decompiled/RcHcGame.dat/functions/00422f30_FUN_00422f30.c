/*
 * FUN_00422f30 at 00422f30
 * undefined FUN_00422f30(void)
 * Address ranges: 00422f30-00422f62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_00422f30(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x164) != '\0') {
    return true;
  }
  if (*(int *)(param_1 + 0x168) == -1) {
    return false;
  }
  return param_2 - *(int *)(param_1 + 0x168) < *(int *)(param_1 + 0x144);
}

