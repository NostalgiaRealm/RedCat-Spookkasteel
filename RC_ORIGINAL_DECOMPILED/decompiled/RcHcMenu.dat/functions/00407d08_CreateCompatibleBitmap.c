/*
 * GDI32.DLL::CreateCompatibleBitmap at 00407d08
 * HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc, int cx, int cy)
 * Address ranges: 00407d08-00407d0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreateCompatibleBitmap
 */

HBITMAP __stdcall CreateCompatibleBitmap(HDC hdc,int cx,int cy)

{
  HBITMAP pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleBitmap(hdc,cx,cy);
  return pHVar1;
}

