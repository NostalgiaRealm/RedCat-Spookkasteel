/*
 * ADVAPI32.DLL::RegOpenKeyExA at 00407a18
 * LSTATUS __stdcall RegOpenKeyExA(HKEY hKey, LPCSTR lpSubKey, DWORD ulOptions, REGSAM samDesired, PHKEY phkResult)
 * Address ranges: 00407a18-00407a1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to ADVAPI32.DLL::RegOpenKeyExA
 */

LSTATUS __stdcall
RegOpenKeyExA(HKEY hKey,LPCSTR lpSubKey,DWORD ulOptions,REGSAM samDesired,PHKEY phkResult)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegOpenKeyExA(hKey,lpSubKey,ulOptions,samDesired,phkResult);
  return LVar1;
}

