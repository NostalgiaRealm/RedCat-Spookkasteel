/*
 * KERNEL32.DLL::FindClose at 00407ab0
 * BOOL __stdcall FindClose(HANDLE hFindFile)
 * Address ranges: 00407ab0-00407ab5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::FindClose
 */

BOOL __stdcall FindClose(HANDLE hFindFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FindClose(hFindFile);
  return BVar1;
}

