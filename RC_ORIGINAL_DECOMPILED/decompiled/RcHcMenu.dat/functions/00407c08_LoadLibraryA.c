/*
 * KERNEL32.DLL::LoadLibraryA at 00407c08
 * HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
 * Address ranges: 00407c08-00407c0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::LoadLibraryA
 */

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}

