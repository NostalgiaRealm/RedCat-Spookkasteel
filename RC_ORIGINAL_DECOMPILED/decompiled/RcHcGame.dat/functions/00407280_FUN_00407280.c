/*
 * FUN_00407280 at 00407280
 * undefined FUN_00407280(void)
 * Address ranges: 00407280-004072e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a7d4 slot 3 for .?AVCRcShooterAttack@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a7d4 slot 3 for
   .?AVCRcShooterAttack@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00407280(int *param_1)

{
  char cVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0x407289;
  (**(code **)(*param_1 + 0x18))();
  uStack_c = 0x407291;
  FUN_004288c0();
  uStack_c = 0x407298;
  cVar1 = FUN_00596d40();
  if (cVar1 != '\0') {
    uStack_c = 0x4072a3;
    (**(code **)(*param_1 + 0x10))();
    return;
  }
  uStack_c = 0x7f7fffff;
  puStack_10 = (undefined1 *)0x1;
  uStack_14 = 2;
  uStack_18 = 0x4072ba;
  (**(code **)(*(int *)param_1[10] + 0x8c))();
  puStack_10 = (undefined1 *)&uStack_18;
  uStack_18 = 0;
  FUN_00428250();
  uStack_18 = 0x4072d7;
  FUN_00428b40();
  uStack_18 = 0;
  FUN_00402a10(0);
  return;
}

