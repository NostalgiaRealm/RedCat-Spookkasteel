/*
 * GDI32.DLL::SetWindowOrgEx at 00407f48
 * BOOL __stdcall SetWindowOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * Address ranges: 00407f48-00407f4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetWindowOrgEx
 */

BOOL __stdcall SetWindowOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetWindowOrgEx(hdc,x,y,lppt);
  return BVar1;
}

