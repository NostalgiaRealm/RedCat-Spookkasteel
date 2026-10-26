/*
 * USER32.DLL::CloseClipboard at 00407fd0
 * BOOL __stdcall CloseClipboard(void)
 * Address ranges: 00407fd0-00407fd5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::CloseClipboard
 */

BOOL __stdcall CloseClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseClipboard();
  return BVar1;
}

