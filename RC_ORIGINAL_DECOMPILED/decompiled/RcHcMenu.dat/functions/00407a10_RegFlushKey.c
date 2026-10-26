/*
 * ADVAPI32.DLL::RegFlushKey at 00407a10
 * LSTATUS __stdcall RegFlushKey(HKEY hKey)
 * Address ranges: 00407a10-00407a15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to ADVAPI32.DLL::RegFlushKey
 */

LSTATUS __stdcall RegFlushKey(HKEY hKey)

{
  LSTATUS LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = RegFlushKey(hKey);
  return LVar1;
}

