/*
 * USER32.DLL::EmptyClipboard at 00408080
 * BOOL __stdcall EmptyClipboard(void)
 * Address ranges: 00408080-00408085
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::EmptyClipboard
 */

BOOL __stdcall EmptyClipboard(void)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = EmptyClipboard();
  return BVar1;
}

