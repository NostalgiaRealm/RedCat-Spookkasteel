/*
 * FUN_00406d20 at 00406d20
 * undefined FUN_00406d20(void)
 * Address ranges: 00406d20-00406d69
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a778 slot 1 for .?AVCRcPlantWait@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a778 slot 1 for
   .?AVCRcPlantWait@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00406d20(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_00404020(param_2,param_3);
  cVar1 = FUN_00402d10();
  if (cVar1 == '\0') {
    FUN_00423700();
    cVar1 = FUN_004a0d00();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x24) + 0x8c))(1,0,0x7f7fffff);
    }
  }
  return;
}

