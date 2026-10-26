/*
 * USER32.DLL::SetKeyboardState at 004083f8
 * BOOL __stdcall SetKeyboardState(LPBYTE lpKeyState)
 * Address ranges: 004083f8-004083fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetKeyboardState
 */

BOOL __stdcall SetKeyboardState(LPBYTE lpKeyState)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetKeyboardState(lpKeyState);
  return BVar1;
}

