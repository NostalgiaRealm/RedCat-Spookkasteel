/*
 * FUN_005e5180 at 005e5180
 * undefined FUN_005e5180(void)
 * Address ranges: 005e5180-005e519a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 11 for .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65164c slot 11 for
   .?AV?$basic_filebuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

undefined4 __fastcall FUN_005e5180(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = FUN_0060e5c6(*(int *)(param_1 + 0x50));
    if (iVar1 < 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

