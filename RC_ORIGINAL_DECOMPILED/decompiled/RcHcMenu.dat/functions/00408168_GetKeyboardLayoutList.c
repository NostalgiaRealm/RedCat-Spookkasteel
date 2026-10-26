/*
 * USER32.DLL::GetKeyboardLayoutList at 00408168
 * int __stdcall GetKeyboardLayoutList(int nBuff, HKL * lpList)
 * Address ranges: 00408168-0040816d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetKeyboardLayoutList
 */

int __stdcall GetKeyboardLayoutList(int nBuff,HKL *lpList)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = GetKeyboardLayoutList(nBuff,lpList);
  return iVar1;
}

