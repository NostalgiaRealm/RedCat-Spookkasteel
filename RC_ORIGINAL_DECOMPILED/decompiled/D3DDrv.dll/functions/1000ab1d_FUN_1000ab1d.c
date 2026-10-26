/*
 * FUN_1000ab1d at 1000ab1d
 * undefined __cdecl FUN_1000ab1d(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 1000ab1d-1000ab36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_1000ab1d(undefined4 *param_1,undefined4 *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

