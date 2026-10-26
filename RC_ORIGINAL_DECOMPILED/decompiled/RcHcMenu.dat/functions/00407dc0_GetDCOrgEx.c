/*
 * GDI32.DLL::GetDCOrgEx at 00407dc0
 * BOOL __stdcall GetDCOrgEx(HDC hdc, LPPOINT lppt)
 * Address ranges: 00407dc0-00407dc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetDCOrgEx
 */

BOOL __stdcall GetDCOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407dc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetDCOrgEx(hdc,lppt);
  return BVar1;
}

