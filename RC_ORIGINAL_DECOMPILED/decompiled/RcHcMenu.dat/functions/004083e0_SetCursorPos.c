/*
 * USER32.DLL::SetCursorPos at 004083e0
 * BOOL __stdcall SetCursorPos(int X, int Y)
 * Address ranges: 004083e0-004083e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::SetCursorPos
 */

BOOL __stdcall SetCursorPos(int X,int Y)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004083e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = SetCursorPos(X,Y);
  return BVar1;
}

