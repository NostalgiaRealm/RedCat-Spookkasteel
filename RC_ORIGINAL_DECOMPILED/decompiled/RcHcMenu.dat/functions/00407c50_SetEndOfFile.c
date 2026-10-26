/*
 * KERNEL32.DLL::SetEndOfFile at 00407c50
 * BOOL __stdcall SetEndOfFile(HANDLE hFile)
 * Address ranges: 00407c50-00407c55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::SetEndOfFile
 */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}

