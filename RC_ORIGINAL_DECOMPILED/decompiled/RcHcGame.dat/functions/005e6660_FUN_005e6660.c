/*
 * FUN_005e6660 at 005e6660
 * undefined FUN_005e6660(void)
 * Address ranges: 005e6660-005e668e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6515f4 slot 0 for .?AV?$basic_istream@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6515f4 slot 0 for
   .?AV?$basic_istream@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

int * __thiscall FUN_005e6660(int param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -8);
  *(undefined ***)(*(int *)(*piVar1 + 4) + -8 + param_1) = &PTR_FUN_006515f4;
  FUN_005e4530();
  if ((param_2 & 1) != 0) {
    FUN_005fe5f0(piVar1);
  }
  return piVar1;
}

