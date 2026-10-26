/*
 * GDI32.DLL::SetTextColor at 00407f30
 * COLORREF __stdcall SetTextColor(HDC hdc, COLORREF color)
 * Address ranges: 00407f30-00407f35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetTextColor
 */

COLORREF __stdcall SetTextColor(HDC hdc,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetTextColor(hdc,color);
  return CVar1;
}

