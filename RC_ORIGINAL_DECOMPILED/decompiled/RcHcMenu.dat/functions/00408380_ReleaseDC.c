/*
 * USER32.DLL::ReleaseDC at 00408380
 * int __stdcall ReleaseDC(HWND hWnd, HDC hDC)
 * Address ranges: 00408380-00408385
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ReleaseDC
 */

int __stdcall ReleaseDC(HWND hWnd,HDC hDC)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = ReleaseDC(hWnd,hDC);
  return iVar1;
}

