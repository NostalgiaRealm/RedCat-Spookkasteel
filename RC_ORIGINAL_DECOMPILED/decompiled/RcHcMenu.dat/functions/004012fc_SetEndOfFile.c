/*
 * KERNEL32.DLL::SetEndOfFile at 004012fc
 * BOOL __stdcall SetEndOfFile(HANDLE hFile)
 * Address ranges: 004012fc-00401301
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::SetEndOfFile
 */

BOOL __stdcall SetEndOfFile(HANDLE hFile)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetEndOfFile(hFile);
  return BVar1;
}

