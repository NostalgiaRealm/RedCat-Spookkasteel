/*
 * KERNEL32.DLL::LoadLibraryA at 00407c00
 * HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)
 * Address ranges: 00407c00-00407c05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::LoadLibraryA
 */

HMODULE __stdcall LoadLibraryA(LPCSTR lpLibFileName)

{
  HMODULE pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadLibraryA(lpLibFileName);
  return pHVar1;
}

