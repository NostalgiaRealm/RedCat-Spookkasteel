/*
 * USER32.DLL::GetKeyboardState at 00408170
 * BOOL __stdcall GetKeyboardState(PBYTE lpKeyState)
 * Address ranges: 00408170-00408175
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetKeyboardState
 */

BOOL __stdcall GetKeyboardState(PBYTE lpKeyState)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetKeyboardState(lpKeyState);
  return BVar1;
}

