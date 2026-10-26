/*
 * USER32.DLL::GetScrollPos at 004081d8
 * int __stdcall GetScrollPos(HWND hWnd, int nBar)
 * Address ranges: 004081d8-004081dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetScrollPos
 */

int __stdcall GetScrollPos(HWND hWnd,int nBar)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004081d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetScrollPos(hWnd,nBar);
  return iVar1;
}

