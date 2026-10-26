/*
 * ADVAPI32.DLL::RegCloseKey at 004013bc
 * LSTATUS __stdcall RegCloseKey(HKEY hKey)
 * Address ranges: 004013bc-004013c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to ADVAPI32.DLL::RegCloseKey
 */

LSTATUS __stdcall RegCloseKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegCloseKey(hKey);
  return LVar1;
}

