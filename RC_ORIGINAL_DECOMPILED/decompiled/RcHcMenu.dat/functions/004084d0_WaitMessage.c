/*
 * USER32.DLL::WaitMessage at 004084d0
 * BOOL __stdcall WaitMessage(void)
 * Address ranges: 004084d0-004084d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::WaitMessage
 */

BOOL __stdcall WaitMessage(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004084d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = WaitMessage();
  return BVar1;
}

