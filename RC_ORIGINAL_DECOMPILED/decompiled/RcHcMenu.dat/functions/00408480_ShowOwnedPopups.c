/*
 * USER32.DLL::ShowOwnedPopups at 00408480
 * BOOL __stdcall ShowOwnedPopups(HWND hWnd, BOOL fShow)
 * Address ranges: 00408480-00408485
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ShowOwnedPopups
 */

BOOL __stdcall ShowOwnedPopups(HWND hWnd,BOOL fShow)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ShowOwnedPopups(hWnd,fShow);
  return BVar1;
}

