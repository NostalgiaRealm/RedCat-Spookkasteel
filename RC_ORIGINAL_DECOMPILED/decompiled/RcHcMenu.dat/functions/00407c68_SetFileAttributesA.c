/*
 * KERNEL32.DLL::SetFileAttributesA at 00407c68
 * BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName, DWORD dwFileAttributes)
 * Address ranges: 00407c68-00407c6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::SetFileAttributesA
 */

BOOL __stdcall SetFileAttributesA(LPCSTR lpFileName,DWORD dwFileAttributes)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetFileAttributesA(lpFileName,dwFileAttributes);
  return BVar1;
}

