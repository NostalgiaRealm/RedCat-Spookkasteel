/*
 * FUN_004014b0 at 004014b0
 * undefined FUN_004014b0(void)
 * Address ranges: 004014b0-0040152a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004014b0(int param_1)

{
  char cVar1;
  
  FUN_00422d90();
  FUN_004288c0();
  FUN_005967f0();
  FUN_004288c0();
  cVar1 = FUN_00596d40();
  if (cVar1 != '\0') {
    FUN_004013d0();
    return;
  }
  FUN_00428b40();
  FUN_00428250();
  (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(2,1);
  FUN_00402a10(0,0);
  return;
}

