/*
 * KERNEL32.DLL::GetFileSize at 004012d4
 * DWORD __stdcall GetFileSize(HANDLE hFile, LPDWORD lpFileSizeHigh)
 * Address ranges: 004012d4-004012d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetFileSize
 */

DWORD __stdcall GetFileSize(HANDLE hFile,LPDWORD lpFileSizeHigh)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004012d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileSize(hFile,lpFileSizeHigh);
  return DVar1;
}

