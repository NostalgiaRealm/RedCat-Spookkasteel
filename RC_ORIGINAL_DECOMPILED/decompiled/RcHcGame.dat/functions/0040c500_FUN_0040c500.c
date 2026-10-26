/*
 * FUN_0040c500 at 0040c500
 * undefined FUN_0040c500(void)
 * Address ranges: 0040c500-0040c51a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 34 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 34 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

uint FUN_0040c500(int param_1)

{
  if (((param_1 != 1) && (param_1 != 4)) && (param_1 - 6U != 0)) {
    return param_1 - 6U & 0xffffff00;
  }
  return 1;
}

