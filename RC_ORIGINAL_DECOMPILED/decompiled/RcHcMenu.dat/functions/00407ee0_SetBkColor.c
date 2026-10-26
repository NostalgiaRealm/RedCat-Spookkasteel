/*
 * GDI32.DLL::SetBkColor at 00407ee0
 * COLORREF __stdcall SetBkColor(HDC hdc, COLORREF color)
 * Address ranges: 00407ee0-00407ee5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetBkColor
 */

COLORREF __stdcall SetBkColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetBkColor(hdc,color);
  return CVar1;
}

