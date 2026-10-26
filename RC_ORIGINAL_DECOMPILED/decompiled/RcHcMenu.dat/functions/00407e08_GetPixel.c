/*
 * GDI32.DLL::GetPixel at 00407e08
 * COLORREF __stdcall GetPixel(HDC hdc, int x, int y)
 * Address ranges: 00407e08-00407e0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetPixel
 */

COLORREF __stdcall GetPixel(HDC hdc,int x,int y)

{
  COLORREF CVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CVar1 = GetPixel(hdc,x,y);
  return CVar1;
}

