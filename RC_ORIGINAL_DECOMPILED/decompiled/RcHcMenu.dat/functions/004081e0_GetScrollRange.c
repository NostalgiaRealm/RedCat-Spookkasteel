/*
 * USER32.DLL::GetScrollRange at 004081e0
 * BOOL __stdcall GetScrollRange(HWND hWnd, int nBar, LPINT lpMinPos, LPINT lpMaxPos)
 * Address ranges: 004081e0-004081e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetScrollRange
 */

BOOL __stdcall GetScrollRange(HWND hWnd,int nBar,LPINT lpMinPos,LPINT lpMaxPos)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004081e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetScrollRange(hWnd,nBar,lpMinPos,lpMaxPos);
  return BVar1;
}

