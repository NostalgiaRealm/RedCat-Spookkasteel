/*
 * FUN_00404bd0 at 00404bd0
 * undefined FUN_00404bd0(void)
 * Address ranges: 00404bd0-00404c15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00404bd0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_0041e1e0();
  uVar2 = 1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x9c))(1);
  FUN_0041e580(uVar1);
  FUN_00477cd0(uVar1,uVar2);
  FUN_0041e6e0(0,0,0x3f800000);
  FUN_00402a10(2,0);
  return;
}

