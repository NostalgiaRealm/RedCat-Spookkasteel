/*
 * USER32.DLL::GetWindowRgn at 00408238
 * int __stdcall GetWindowRgn(HWND hWnd, HRGN hRgn)
 * Address ranges: 00408238-0040823d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetWindowRgn
 */

int __stdcall GetWindowRgn(HWND hWnd,HRGN hRgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetWindowRgn(hWnd,hRgn);
  return iVar1;
}

