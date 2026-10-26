/*
 * FUN_005ac5a0 at 005ac5a0
 * undefined FUN_005ac5a0(void)
 * Address ranges: 005ac5a0-005ac5b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005ac5a0(int param_1,code *param_2)

{
  *(code **)(param_1 + 0x68) = param_2;
  if (param_2 != (code *)0x0) {
    (*param_2)(param_1);
  }
  return;
}

