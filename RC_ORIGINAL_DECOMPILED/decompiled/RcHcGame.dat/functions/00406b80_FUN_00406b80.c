/*
 * FUN_00406b80 at 00406b80
 * undefined FUN_00406b80(void)
 * Address ranges: 00406b80-00406bc9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a74c slot 1 for .?AVCRcPlantShootVisual@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a74c slot 1 for
   .?AVCRcPlantShootVisual@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00406b80(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  FUN_00409ff0(param_2,param_3);
  cVar1 = FUN_00402d10();
  if (cVar1 == '\0') {
    FUN_00423700();
    cVar1 = FUN_004a0d00();
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(1,0,0x7f7fffff);
    }
  }
  return;
}

