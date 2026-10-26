/*
 * KERNEL32.DLL::DeleteFileA at 00407a80
 * BOOL __stdcall DeleteFileA(LPCSTR lpFileName)
 * Address ranges: 00407a80-00407a85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::DeleteFileA
 */

BOOL __stdcall DeleteFileA(LPCSTR lpFileName)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DeleteFileA(lpFileName);
  return BVar1;
}

