/*
 * KERNEL32.DLL::GetFileAttributesA at 00407b30
 * DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)
 * Address ranges: 00407b30-00407b35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetFileAttributesA
 */

DWORD __stdcall GetFileAttributesA(LPCSTR lpFileName)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetFileAttributesA(lpFileName);
  return DVar1;
}

