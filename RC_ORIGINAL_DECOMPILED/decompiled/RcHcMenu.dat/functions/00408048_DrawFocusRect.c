/*
 * USER32.DLL::DrawFocusRect at 00408048
 * BOOL __stdcall DrawFocusRect(HDC hDC, RECT * lprc)
 * Address ranges: 00408048-0040804d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DrawFocusRect
 */

BOOL __stdcall DrawFocusRect(HDC hDC,RECT *lprc)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawFocusRect(hDC,lprc);
  return BVar1;
}

