/*
 * GDI32.DLL::CreateFontIndirectA at 00407d28
 * HFONT __stdcall CreateFontIndirectA(LOGFONTA * lplf)
 * Address ranges: 00407d28-00407d2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreateFontIndirectA
 */

HFONT __stdcall CreateFontIndirectA(LOGFONTA *lplf)

{
  HFONT pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateFontIndirectA(lplf);
  return pHVar1;
}

