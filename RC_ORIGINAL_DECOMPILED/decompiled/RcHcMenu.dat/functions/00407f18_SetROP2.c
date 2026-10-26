/*
 * GDI32.DLL::SetROP2 at 00407f18
 * int __stdcall SetROP2(HDC hdc, int rop2)
 * Address ranges: 00407f18-00407f1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetROP2
 */

int __stdcall SetROP2(HDC hdc,int rop2)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = SetROP2(hdc,rop2);
  return iVar1;
}

