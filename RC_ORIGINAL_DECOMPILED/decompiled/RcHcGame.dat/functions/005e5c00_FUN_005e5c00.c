/*
 * FUN_005e5c00 at 005e5c00
 * undefined FUN_005e5c00(void)
 * Address ranges: 005e5c00-005e5c1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6514cc slot 0 for .?AVfacet@locale@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6514cc slot 0 for
   .?AVfacet@locale@std@@. Original bytes unchanged; names and types still inferred. */

undefined4 * __thiscall FUN_005e5c00(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_006514cc;
  if ((param_2 & 1) != 0) {
    FUN_005fe5f0(param_1);
  }
  return param_1;
}

