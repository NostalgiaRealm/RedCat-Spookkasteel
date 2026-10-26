/*
 * GDI32.DLL::GetObjectA at 00407df8
 * int __stdcall GetObjectA(HANDLE h, int c, LPVOID pv)
 * Address ranges: 00407df8-00407dfd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetObjectA
 */

int __stdcall GetObjectA(HANDLE h,int c,LPVOID pv)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetObjectA(h,c,pv);
  return iVar1;
}

