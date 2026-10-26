/*
 * USER32.DLL::IsIconic at 00408288
 * BOOL __stdcall IsIconic(HWND hWnd)
 * Address ranges: 00408288-0040828d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::IsIconic
 */

BOOL __stdcall IsIconic(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsIconic(hWnd);
  return BVar1;
}

