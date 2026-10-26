/*
 * KERNEL32.DLL::ExitProcess at 00401324
 * noreturn void __stdcall ExitProcess(UINT uExitCode)
 * Address ranges: 00401324-00401329
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::ExitProcess
 */

void __stdcall ExitProcess(UINT uExitCode)

{
                    /* WARNING: Could not recover jumptable at 0x00401324. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  ExitProcess(uExitCode);
  return;
}

