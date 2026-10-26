/*
 * FUN_0040163a at 0040163a
 * undefined __cdecl FUN_0040163a(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 0040163a-00401653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_0040163a(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

