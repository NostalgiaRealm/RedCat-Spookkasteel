/*
 * GDI32.DLL::GetBitmapBits at 00407d98
 * LONG __stdcall GetBitmapBits(HBITMAP hbit, LONG cb, LPVOID lpvBits)
 * Address ranges: 00407d98-00407d9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetBitmapBits
 */

LONG __stdcall GetBitmapBits(HBITMAP hbit,LONG cb,LPVOID lpvBits)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = GetBitmapBits(hbit,cb,lpvBits);
  return LVar1;
}

