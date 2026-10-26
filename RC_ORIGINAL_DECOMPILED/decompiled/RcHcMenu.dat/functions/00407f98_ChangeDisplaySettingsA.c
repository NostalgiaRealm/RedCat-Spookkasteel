/*
 * USER32.DLL::ChangeDisplaySettingsA at 00407f98
 * LONG __stdcall ChangeDisplaySettingsA(DEVMODEA * lpDevMode, DWORD dwFlags)
 * Address ranges: 00407f98-00407f9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ChangeDisplaySettingsA
 */

LONG __stdcall ChangeDisplaySettingsA(DEVMODEA *lpDevMode,DWORD dwFlags)

{
  LONG LVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LVar1 = ChangeDisplaySettingsA(lpDevMode,dwFlags);
  return LVar1;
}

