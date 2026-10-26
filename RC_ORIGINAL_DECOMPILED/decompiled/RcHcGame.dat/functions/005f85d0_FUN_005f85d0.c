/*
 * FUN_005f85d0 at 005f85d0
 * undefined FUN_005f85d0(void)
 * Address ranges: 005f85d0-005f8600
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005f85d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_005f7170(param_2,param_3);
  uVar1 = FUN_005e9f10();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_005f65c0(param_2,param_3);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}

