/*
 * USER32.DLL::DrawMenuBar at 00408068
 * BOOL __stdcall DrawMenuBar(HWND hWnd)
 * Address ranges: 00408068-0040806d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DrawMenuBar
 */

BOOL __stdcall DrawMenuBar(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawMenuBar(hWnd);
  return BVar1;
}

