/*
 * FUN_005b0090 at 005b0090
 * undefined FUN_005b0090(void)
 * Address ranges: 005b0090-005b00b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_005b0090(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return 1;
  }
  return (*param_1 <= *param_2) - 1U & 2;
}

