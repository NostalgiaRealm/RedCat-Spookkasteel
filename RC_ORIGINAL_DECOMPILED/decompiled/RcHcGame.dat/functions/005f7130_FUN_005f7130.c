/*
 * FUN_005f7130 at 005f7130
 * undefined FUN_005f7130(void)
 * Address ranges: 005f7130-005f7160
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f7130(int *param_1,undefined4 param_2)

{
  int *piVar1;
  
  FUN_005f78d0(param_2);
  piVar1 = (int *)(**(code **)(*param_1 + 0x14))();
  (**(code **)(*piVar1 + 0x20))(param_2);
  piVar1 = (int *)(**(code **)(*param_1 + 0x10))();
  (**(code **)(*piVar1 + 0x20))(param_2);
  return;
}

