/*
 * VERSION.DLL::VerQueryValueA at 00407cd8
 * BOOL __stdcall VerQueryValueA(LPCVOID pBlock, LPCSTR lpSubBlock, LPVOID * lplpBuffer, PUINT puLen)
 * Address ranges: 00407cd8-00407cdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to VERSION.DLL::VerQueryValueA
 */

BOOL __stdcall VerQueryValueA(LPCVOID pBlock,LPCSTR lpSubBlock,LPVOID *lplpBuffer,PUINT puLen)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = VerQueryValueA(pBlock,lpSubBlock,lplpBuffer,puLen);
  return BVar1;
}

