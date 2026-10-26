/*
 * FUN_005f0fc0 at 005f0fc0
 * undefined FUN_005f0fc0(void)
 * Address ranges: 005f0fc0-005f0fcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x651404 slot 1 for .?AVlength_error@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x651404 slot 1 for
   .?AVlength_error@std@@. Original bytes unchanged; names and types still inferred. */

undefined1 * __fastcall FUN_005f0fc0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_0064a3b4;
  }
  return puVar1;
}

