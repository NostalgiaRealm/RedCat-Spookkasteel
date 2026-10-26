/*
 * USER32.DLL::RegisterWindowMessageA at 00408370
 * UINT __stdcall RegisterWindowMessageA(LPCSTR lpString)
 * Address ranges: 00408370-00408375
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::RegisterWindowMessageA
 */

UINT __stdcall RegisterWindowMessageA(LPCSTR lpString)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = RegisterWindowMessageA(lpString);
  return UVar1;
}

