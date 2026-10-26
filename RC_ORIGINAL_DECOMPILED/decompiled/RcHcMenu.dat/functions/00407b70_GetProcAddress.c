/*
 * KERNEL32.DLL::GetProcAddress at 00407b70
 * FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
 * Address ranges: 00407b70-00407b75
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetProcAddress
 */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}

