/*
 * GDI32.DLL::CreatePalette at 00407d38
 * HPALETTE __stdcall CreatePalette(LOGPALETTE * plpal)
 * Address ranges: 00407d38-00407d3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreatePalette
 */

HPALETTE __stdcall CreatePalette(LOGPALETTE *plpal)

{
  HPALETTE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePalette(plpal);
  return pHVar1;
}

