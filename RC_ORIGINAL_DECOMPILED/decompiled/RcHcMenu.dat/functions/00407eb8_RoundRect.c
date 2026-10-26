/*
 * GDI32.DLL::RoundRect at 00407eb8
 * BOOL __stdcall RoundRect(HDC hdc, int left, int top, int right, int bottom, int width, int height)
 * Address ranges: 00407eb8-00407ebd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::RoundRect
 */

BOOL __stdcall RoundRect(HDC hdc,int left,int top,int right,int bottom,int width,int height)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = RoundRect(hdc,left,top,right,bottom,width,height);
  return BVar1;
}

