/*
 * GDI32.DLL::GetBrushOrgEx at 00407da0
 * BOOL __stdcall GetBrushOrgEx(HDC hdc, LPPOINT lppt)
 * Address ranges: 00407da0-00407da5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetBrushOrgEx
 */

BOOL __stdcall GetBrushOrgEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetBrushOrgEx(hdc,lppt);
  return BVar1;
}

