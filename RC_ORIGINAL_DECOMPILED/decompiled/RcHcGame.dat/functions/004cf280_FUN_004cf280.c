/*
 * FUN_004cf280 at 004cf280
 * undefined FUN_004cf280(void)
 * Address ranges: 004cf280-004cf2b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_004cf280(int param_1,int param_2)

{
  if ((param_2 == *(int *)(param_1 + 0x17c)) && (*(int *)(param_1 + 0x168) == 1)) {
    return 1;
  }
  if ((param_2 == *(int *)(param_1 + 0x180)) && (*(int *)(param_1 + 0x168) == 5)) {
    return 1;
  }
  return 0;
}

