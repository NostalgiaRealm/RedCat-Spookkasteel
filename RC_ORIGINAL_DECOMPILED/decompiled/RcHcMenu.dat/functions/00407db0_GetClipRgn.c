/*
 * GDI32.DLL::GetClipRgn at 00407db0
 * int __stdcall GetClipRgn(HDC hdc, HRGN hrgn)
 * Address ranges: 00407db0-00407db5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetClipRgn
 */

int __stdcall GetClipRgn(HDC hdc,HRGN hrgn)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipRgn(hdc,hrgn);
  return iVar1;
}

