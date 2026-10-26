/*
 * GDI32.DLL::GetDeviceCaps at 00407dd8
 * int __stdcall GetDeviceCaps(HDC hdc, int index)
 * Address ranges: 00407dd8-00407ddd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetDeviceCaps
 */

int __stdcall GetDeviceCaps(HDC hdc,int index)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetDeviceCaps(hdc,index);
  return iVar1;
}

