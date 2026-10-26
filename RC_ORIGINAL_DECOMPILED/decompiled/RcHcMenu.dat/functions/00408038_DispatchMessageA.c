/*
 * USER32.DLL::DispatchMessageA at 00408038
 * LRESULT __stdcall DispatchMessageA(MSG * lpMsg)
 * Address ranges: 00408038-0040803d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DispatchMessageA
 */

LRESULT __stdcall DispatchMessageA(MSG *lpMsg)

{
  LRESULT LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = DispatchMessageA(lpMsg);
  return LVar1;
}

