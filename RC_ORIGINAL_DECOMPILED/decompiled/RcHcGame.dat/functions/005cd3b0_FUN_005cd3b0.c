/*
 * FUN_005cd3b0 at 005cd3b0
 * undefined FUN_005cd3b0(void)
 * Address ranges: 005cd3b0-005cd3ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005cd3b0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x38))(param_2);
  return uVar1;
}

