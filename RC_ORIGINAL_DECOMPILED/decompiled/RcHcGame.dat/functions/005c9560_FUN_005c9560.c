/*
 * FUN_005c9560 at 005c9560
 * undefined FUN_005c9560(void)
 * Address ranges: 005c9560-005c9572
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005c9560(int param_1)

{
  return *(int *)(&DAT_006cc4a4 + param_1 * 4) == 0;
}

