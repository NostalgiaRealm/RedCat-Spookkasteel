/*
 * USER32.DLL::DrawTextExA at 00408078
 * int __stdcall DrawTextExA(HDC hdc, LPSTR lpchText, int cchText, LPRECT lprc, UINT format, LPDRAWTEXTPARAMS lpdtp)
 * Address ranges: 00408078-0040807d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DrawTextExA
 */

int __stdcall
DrawTextExA(HDC hdc,LPSTR lpchText,int cchText,LPRECT lprc,UINT format,LPDRAWTEXTPARAMS lpdtp)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = DrawTextExA(hdc,lpchText,cchText,lprc,format,lpdtp);
  return iVar1;
}

