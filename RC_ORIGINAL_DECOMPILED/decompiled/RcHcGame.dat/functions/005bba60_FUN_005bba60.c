/*
 * FUN_005bba60 at 005bba60
 * undefined FUN_005bba60(void)
 * Address ranges: 005bba60-005bbaa8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005bba60(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_00453600();
    (**(code **)(*(int *)(param_1 + 0x33678) + 0x80))(uVar1,param_4);
    return;
  }
  (**(code **)(*(int *)(param_1 + 0x33678) + 0x78))(param_4);
  return;
}

