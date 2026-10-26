/*
 * GDI32.DLL::SetPixel at 00407f10
 * COLORREF __stdcall SetPixel(HDC hdc, int x, int y, COLORREF color)
 * Address ranges: 00407f10-00407f15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetPixel
 */

COLORREF __stdcall SetPixel(HDC hdc,int x,int y,COLORREF color)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = SetPixel(hdc,x,y,color);
  return CVar1;
}

