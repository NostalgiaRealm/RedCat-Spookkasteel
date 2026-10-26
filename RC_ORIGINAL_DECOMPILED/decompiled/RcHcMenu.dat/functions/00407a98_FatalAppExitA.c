/*
 * KERNEL32.DLL::FatalAppExitA at 00407a98
 * void __stdcall FatalAppExitA(UINT uAction, LPCSTR lpMessageText)
 * Address ranges: 00407a98-00407a9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::FatalAppExitA
 */

void __stdcall FatalAppExitA(UINT uAction,LPCSTR lpMessageText)

{
                    /* WARNING: Could not recover jumptable at 0x00407a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FatalAppExitA(uAction,lpMessageText);
  return;
}

