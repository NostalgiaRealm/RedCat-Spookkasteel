/*
 * KERNEL32.DLL::CopyFileA at 00407a50
 * BOOL __stdcall CopyFileA(LPCSTR lpExistingFileName, LPCSTR lpNewFileName, BOOL bFailIfExists)
 * Address ranges: 00407a50-00407a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::CopyFileA
 */

BOOL __stdcall CopyFileA(LPCSTR lpExistingFileName,LPCSTR lpNewFileName,BOOL bFailIfExists)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CopyFileA(lpExistingFileName,lpNewFileName,bFailIfExists);
  return BVar1;
}

