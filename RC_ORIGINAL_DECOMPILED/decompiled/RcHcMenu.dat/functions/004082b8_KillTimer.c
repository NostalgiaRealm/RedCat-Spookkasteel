/*
 * USER32.DLL::KillTimer at 004082b8
 * BOOL __stdcall KillTimer(HWND hWnd, UINT_PTR uIDEvent)
 * Address ranges: 004082b8-004082bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::KillTimer
 */

BOOL __stdcall KillTimer(HWND hWnd,UINT_PTR uIDEvent)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004082b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = KillTimer(hWnd,uIDEvent);
  return BVar1;
}

