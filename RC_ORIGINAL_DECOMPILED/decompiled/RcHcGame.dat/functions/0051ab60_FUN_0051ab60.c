/*
 * FUN_0051ab60 at 0051ab60
 * undefined FUN_0051ab60(void)
 * Address ranges: 0051ab60-0051aba0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f564 slot 1 for .?AVCAdamGameState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f564 slot 1 for
   .?AVCAdamGameState@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0051ab60(int *param_1)

{
  undefined4 uStack_10;
  
  if (DAT_006c8de0 == 0) {
    uStack_10 = 0x51ab74;
    FUN_0055b280();
  }
  uStack_10 = 0x51ab7d;
  FUN_005630f0();
  FUN_0052b470(&uStack_10);
  (**(code **)(*param_1 + 0x10))();
  FUN_005637b0();
  return;
}

