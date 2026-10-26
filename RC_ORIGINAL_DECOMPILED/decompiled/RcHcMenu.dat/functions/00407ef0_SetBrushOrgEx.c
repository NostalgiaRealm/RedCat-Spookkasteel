/*
 * GDI32.DLL::SetBrushOrgEx at 00407ef0
 * BOOL __stdcall SetBrushOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * Address ranges: 00407ef0-00407ef5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetBrushOrgEx
 */

BOOL __stdcall SetBrushOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetBrushOrgEx(hdc,x,y,lppt);
  return BVar1;
}

