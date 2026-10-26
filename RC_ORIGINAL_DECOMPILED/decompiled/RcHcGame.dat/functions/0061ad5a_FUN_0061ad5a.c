/*
 * FUN_0061ad5a at 0061ad5a
 * undefined FUN_0061ad5a(void)
 * Address ranges: 0061ad5a-0061ad81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_0061ad5a(char *param_1,int param_2)

{
  *param_1 = (char)(param_2 / 10) + '0';
  param_1[1] = (char)(param_2 % 10) + '0';
  return param_1 + 2;
}

