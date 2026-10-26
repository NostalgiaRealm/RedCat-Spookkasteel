/*
 * KERNEL32.DLL::GetCommandLineA at 0040134c
 * LPSTR __stdcall GetCommandLineA(void)
 * Address ranges: 0040134c-00401351
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::GetCommandLineA
 */

LPSTR __stdcall GetCommandLineA(void)

{
  LPSTR pCVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040134c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pCVar1 = GetCommandLineA();
  return pCVar1;
}

