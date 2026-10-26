/*
 * GDI32.DLL::SetMapMode at 00407f08
 * int __stdcall SetMapMode(HDC hdc, int iMode)
 * Address ranges: 00407f08-00407f0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetMapMode
 */

int __stdcall SetMapMode(HDC hdc,int iMode)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetMapMode(hdc,iMode);
  return iVar1;
}

