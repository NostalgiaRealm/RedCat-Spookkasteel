/*
 * FUN_005f7170 at 005f7170
 * undefined FUN_005f7170(void)
 * Address ranges: 005f7170-005f71a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f7170(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_005f78e0(param_2,param_3);
  uVar1 = FUN_005f65c0(param_2,param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_005f65c0(param_2,param_3);
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}

