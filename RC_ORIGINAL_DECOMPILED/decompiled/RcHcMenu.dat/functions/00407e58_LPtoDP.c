/*
 * GDI32.DLL::LPtoDP at 00407e58
 * BOOL __stdcall LPtoDP(HDC hdc, LPPOINT lppt, int c)
 * Address ranges: 00407e58-00407e5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::LPtoDP
 */

BOOL __stdcall LPtoDP(HDC hdc,LPPOINT lppt,int c)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = LPtoDP(hdc,lppt,c);
  return BVar1;
}

