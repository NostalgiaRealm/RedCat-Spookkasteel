/*
 * FUN_004ac560 at 004ac560
 * undefined FUN_004ac560(void)
 * Address ranges: 004ac560-004ac582
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e9f4 slot 6 for .?AVCAdam3DSoundCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e9f4 slot 6 for
   .?AVCAdam3DSoundCell@@. Original bytes unchanged; names and types still inferred. */

bool __fastcall FUN_004ac560(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 100) != 0) {
    FUN_00425080();
    cVar1 = FUN_005530e0();
    return cVar1 == '\0';
  }
  return true;
}

