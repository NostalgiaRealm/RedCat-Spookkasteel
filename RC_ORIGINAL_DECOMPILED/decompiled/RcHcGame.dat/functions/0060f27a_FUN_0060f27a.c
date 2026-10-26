/*
 * FUN_0060f27a at 0060f27a
 * undefined FUN_0060f27a(void)
 * Address ranges: 0060f27a-0060f293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060f27a(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

