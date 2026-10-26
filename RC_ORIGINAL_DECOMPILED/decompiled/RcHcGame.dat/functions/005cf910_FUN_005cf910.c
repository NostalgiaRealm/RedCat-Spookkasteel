/*
 * FUN_005cf910 at 005cf910
 * undefined FUN_005cf910(void)
 * Address ranges: 005cf910-005cf93a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005cf910(int param_1,int param_2)

{
  if (param_2 == -1) {
    return param_1 + 0x28;
  }
  return *(int *)(param_1 + 0x118) + param_2 * 0x8c;
}

