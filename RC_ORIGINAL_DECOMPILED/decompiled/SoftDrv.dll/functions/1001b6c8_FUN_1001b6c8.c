/*
 * FUN_1001b6c8 at 1001b6c8
 * undefined FUN_1001b6c8(void)
 * Address ranges: 1001b6c8-1001b6e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001b6c8(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

