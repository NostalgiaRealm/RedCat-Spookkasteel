/*
 * KERNEL32.DLL::GetFileType at 004012c4
 * DWORD __stdcall GetFileType(HANDLE hFile)
 * Address ranges: 004012c4-004012c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetFileType
 */

DWORD __stdcall GetFileType(HANDLE hFile)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileType(hFile);
  return DVar1;
}

