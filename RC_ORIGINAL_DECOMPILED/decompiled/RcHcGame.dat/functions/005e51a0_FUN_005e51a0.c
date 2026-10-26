/*
 * FUN_005e51a0 at 005e51a0
 * undefined FUN_005e51a0(void)
 * Address ranges: 005e51a0-005e51ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65163c slot 0 for .?AV?$basic_ostream@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x65163c slot 0 for
   .?AV?$basic_ostream@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

int * __thiscall FUN_005e51a0(int param_1,byte param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + -4);
  *(undefined ***)(*(int *)(*piVar1 + 4) + -4 + param_1) = &PTR_FUN_0065163c;
  FUN_005e4530();
  if ((param_2 & 1) != 0) {
    FUN_005fe5f0(piVar1);
  }
  return piVar1;
}

