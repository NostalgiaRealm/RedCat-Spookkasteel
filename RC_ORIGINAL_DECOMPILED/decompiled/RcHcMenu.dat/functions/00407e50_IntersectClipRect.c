/*
 * GDI32.DLL::IntersectClipRect at 00407e50
 * int __stdcall IntersectClipRect(HDC hdc, int left, int top, int right, int bottom)
 * Address ranges: 00407e50-00407e55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::IntersectClipRect
 */

int __stdcall IntersectClipRect(HDC hdc,int left,int top,int right,int bottom)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = IntersectClipRect(hdc,left,top,right,bottom);
  return iVar1;
}

