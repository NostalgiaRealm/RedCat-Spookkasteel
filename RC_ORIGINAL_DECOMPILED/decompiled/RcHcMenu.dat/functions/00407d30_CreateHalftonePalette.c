/*
 * GDI32.DLL::CreateHalftonePalette at 00407d30
 * HPALETTE __stdcall CreateHalftonePalette(HDC hdc)
 * Address ranges: 00407d30-00407d35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreateHalftonePalette
 */

HPALETTE __stdcall CreateHalftonePalette(HDC hdc)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateHalftonePalette(hdc);
  return pHVar1;
}

