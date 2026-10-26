/*
 * USER32.DLL::WindowFromPoint at 004084e0
 * HWND __stdcall WindowFromPoint(POINT Point)
 * Address ranges: 004084e0-004084e5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::WindowFromPoint
 */

HWND __stdcall WindowFromPoint(POINT Point)

{
  HWND pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004084e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = WindowFromPoint(Point);
  return pHVar1;
}

