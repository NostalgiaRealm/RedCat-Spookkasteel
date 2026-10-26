/*
 * USER32.DLL::IsWindowEnabled at 004082a0
 * BOOL __stdcall IsWindowEnabled(HWND hWnd)
 * Address ranges: 004082a0-004082a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::IsWindowEnabled
 */

BOOL __stdcall IsWindowEnabled(HWND hWnd)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004082a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsWindowEnabled(hWnd);
  return BVar1;
}

