/*
 * FUN_1002e993 at 1002e993
 * undefined FUN_1002e993(void)
 * Address ranges: 1002e993-1002e9ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002e993(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

