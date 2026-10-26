/*
 * USER32.DLL::GetKeyNameTextA at 00408150
 * int __stdcall GetKeyNameTextA(LONG lParam, LPSTR lpString, int cchSize)
 * Address ranges: 00408150-00408155
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetKeyNameTextA
 */

int __stdcall GetKeyNameTextA(LONG lParam,LPSTR lpString,int cchSize)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyNameTextA(lParam,lpString,cchSize);
  return iVar1;
}

