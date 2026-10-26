/*
 * GDI32.DLL::Ellipse at 00407d78
 * BOOL __stdcall Ellipse(HDC hdc, int left, int top, int right, int bottom)
 * Address ranges: 00407d78-00407d7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::Ellipse
 */

BOOL __stdcall Ellipse(HDC hdc,int left,int top,int right,int bottom)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = Ellipse(hdc,left,top,right,bottom);
  return BVar1;
}

