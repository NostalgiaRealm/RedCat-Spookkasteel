/*
 * USER32.DLL::DrawIcon at 00408058
 * BOOL __stdcall DrawIcon(HDC hDC, int X, int Y, HICON hIcon)
 * Address ranges: 00408058-0040805d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DrawIcon
 */

BOOL __stdcall DrawIcon(HDC hDC,int X,int Y,HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DrawIcon(hDC,X,Y,hIcon);
  return BVar1;
}

