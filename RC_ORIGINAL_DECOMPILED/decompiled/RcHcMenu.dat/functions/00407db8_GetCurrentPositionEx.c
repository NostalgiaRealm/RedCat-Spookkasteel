/*
 * GDI32.DLL::GetCurrentPositionEx at 00407db8
 * BOOL __stdcall GetCurrentPositionEx(HDC hdc, LPPOINT lppt)
 * Address ranges: 00407db8-00407dbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetCurrentPositionEx
 */

BOOL __stdcall GetCurrentPositionEx(HDC hdc,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCurrentPositionEx(hdc,lppt);
  return BVar1;
}

