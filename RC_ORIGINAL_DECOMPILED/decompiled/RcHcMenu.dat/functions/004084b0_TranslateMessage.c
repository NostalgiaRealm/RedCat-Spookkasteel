/*
 * USER32.DLL::TranslateMessage at 004084b0
 * BOOL __stdcall TranslateMessage(MSG * lpMsg)
 * Address ranges: 004084b0-004084b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::TranslateMessage
 */

BOOL __stdcall TranslateMessage(MSG *lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004084b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMessage(lpMsg);
  return BVar1;
}

