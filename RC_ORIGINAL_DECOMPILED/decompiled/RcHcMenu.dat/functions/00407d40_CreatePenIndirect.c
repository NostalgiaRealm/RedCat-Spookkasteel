/*
 * GDI32.DLL::CreatePenIndirect at 00407d40
 * HPEN __stdcall CreatePenIndirect(LOGPEN * plpen)
 * Address ranges: 00407d40-00407d45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreatePenIndirect
 */

HPEN __stdcall CreatePenIndirect(LOGPEN *plpen)

{
  HPEN pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreatePenIndirect(plpen);
  return pHVar1;
}

