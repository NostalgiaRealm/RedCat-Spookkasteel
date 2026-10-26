/*
 * GDI32.DLL::CreateBrushIndirect at 00407d00
 * HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH * plbrush)
 * Address ranges: 00407d00-00407d05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreateBrushIndirect
 */

HBRUSH __stdcall CreateBrushIndirect(LOGBRUSH *plbrush)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateBrushIndirect(plbrush);
  return pHVar1;
}

