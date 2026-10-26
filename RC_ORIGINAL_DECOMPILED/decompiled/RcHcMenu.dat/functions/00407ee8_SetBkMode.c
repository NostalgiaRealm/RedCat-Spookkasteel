/*
 * GDI32.DLL::SetBkMode at 00407ee8
 * int __stdcall SetBkMode(HDC hdc, int mode)
 * Address ranges: 00407ee8-00407eed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetBkMode
 */

int __stdcall SetBkMode(HDC hdc,int mode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetBkMode(hdc,mode);
  return iVar1;
}

