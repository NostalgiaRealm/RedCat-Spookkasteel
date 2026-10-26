/*
 * FUN_0042e330 at 0042e330
 * undefined FUN_0042e330(void)
 * Address ranges: 0042e330-0042e35a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0042e330(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0049d890(param_2,param_3);
  if (*(int **)(param_1 + 0x294) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x294) + 8))(param_2,param_3);
  }
  return;
}

