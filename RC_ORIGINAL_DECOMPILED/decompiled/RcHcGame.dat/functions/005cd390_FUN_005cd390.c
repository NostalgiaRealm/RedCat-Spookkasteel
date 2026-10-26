/*
 * FUN_005cd390 at 005cd390
 * undefined FUN_005cd390(void)
 * Address ranges: 005cd390-005cd3ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_005cd390(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x34))(param_2);
  return uVar1;
}

