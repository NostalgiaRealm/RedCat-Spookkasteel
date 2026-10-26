/*
 * GDI32.DLL::SetViewportOrgEx at 00407f38
 * BOOL __stdcall SetViewportOrgEx(HDC hdc, int x, int y, LPPOINT lppt)
 * Address ranges: 00407f38-00407f3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetViewportOrgEx
 */

BOOL __stdcall SetViewportOrgEx(HDC hdc,int x,int y,LPPOINT lppt)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetViewportOrgEx(hdc,x,y,lppt);
  return BVar1;
}

