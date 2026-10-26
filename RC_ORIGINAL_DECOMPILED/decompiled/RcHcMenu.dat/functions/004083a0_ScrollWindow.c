/*
 * USER32.DLL::ScrollWindow at 004083a0
 * BOOL __stdcall ScrollWindow(HWND hWnd, int XAmount, int YAmount, RECT * lpRect, RECT * lpClipRect)
 * Address ranges: 004083a0-004083a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ScrollWindow
 */

BOOL __stdcall ScrollWindow(HWND hWnd,int XAmount,int YAmount,RECT *lpRect,RECT *lpClipRect)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = ScrollWindow(hWnd,XAmount,YAmount,lpRect,lpClipRect);
  return BVar1;
}

