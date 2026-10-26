/*
 * GDI32.DLL::GetClipBox at 00407da8
 * int __stdcall GetClipBox(HDC hdc, LPRECT lprect)
 * Address ranges: 00407da8-00407dad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetClipBox
 */

int __stdcall GetClipBox(HDC hdc,LPRECT lprect)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetClipBox(hdc,lprect);
  return iVar1;
}

