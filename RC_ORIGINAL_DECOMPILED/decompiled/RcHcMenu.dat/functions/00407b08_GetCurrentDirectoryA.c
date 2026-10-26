/*
 * KERNEL32.DLL::GetCurrentDirectoryA at 00407b08
 * DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength, LPSTR lpBuffer)
 * Address ranges: 00407b08-00407b0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetCurrentDirectoryA
 */

DWORD __stdcall GetCurrentDirectoryA(DWORD nBufferLength,LPSTR lpBuffer)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentDirectoryA(nBufferLength,lpBuffer);
  return DVar1;
}

