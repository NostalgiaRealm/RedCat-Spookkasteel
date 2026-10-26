/*
 * KERNEL32.DLL::GetProcAddress at 00401374
 * FARPROC __stdcall GetProcAddress(HMODULE hModule, LPCSTR lpProcName)
 * Address ranges: 00401374-00401379
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetProcAddress
 */

FARPROC __stdcall GetProcAddress(HMODULE hModule,LPCSTR lpProcName)

{
  FARPROC pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00401374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = GetProcAddress(hModule,lpProcName);
  return pFVar1;
}

