/*
 * GDI32.DLL::LineTo at 00407e60
 * BOOL __stdcall LineTo(HDC hdc, int x, int y)
 * Address ranges: 00407e60-00407e65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::LineTo
 */

BOOL __stdcall LineTo(HDC hdc,int x,int y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LineTo(hdc,x,y);
  return BVar1;
}

