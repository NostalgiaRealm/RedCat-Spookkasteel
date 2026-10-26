/*
 * GDI32.DLL::RealizePalette at 00407e98
 * UINT __stdcall RealizePalette(HDC hdc)
 * Address ranges: 00407e98-00407e9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::RealizePalette
 */

UINT __stdcall RealizePalette(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RealizePalette(hdc);
  return UVar1;
}

