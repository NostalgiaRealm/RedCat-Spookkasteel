/*
 * GDI32.DLL::SetStretchBltMode at 00407f20
 * int __stdcall SetStretchBltMode(HDC hdc, int mode)
 * Address ranges: 00407f20-00407f25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetStretchBltMode
 */

int __stdcall SetStretchBltMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetStretchBltMode(hdc,mode);
  return iVar1;
}

