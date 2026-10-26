/*
 * USER32.DLL::GetPropA at 004081c8
 * HANDLE __stdcall GetPropA(HWND hWnd, LPCSTR lpString)
 * Address ranges: 004081c8-004081cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetPropA
 */

HANDLE __stdcall GetPropA(HWND hWnd,LPCSTR lpString)

{
  HANDLE pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004081c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = GetPropA(hWnd,lpString);
  return pvVar1;
}

