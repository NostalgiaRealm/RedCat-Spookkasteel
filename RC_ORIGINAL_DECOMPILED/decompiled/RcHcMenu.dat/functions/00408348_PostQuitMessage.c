/*
 * USER32.DLL::PostQuitMessage at 00408348
 * void __stdcall PostQuitMessage(int nExitCode)
 * Address ranges: 00408348-0040834d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::PostQuitMessage
 */

void __stdcall PostQuitMessage(int nExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00408348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PostQuitMessage(nExitCode);
  return;
}

