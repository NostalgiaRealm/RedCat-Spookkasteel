/*
 * USER32.DLL::LoadKeyboardLayoutA at 004082d8
 * HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID, UINT Flags)
 * Address ranges: 004082d8-004082dd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::LoadKeyboardLayoutA
 */

HKL __stdcall LoadKeyboardLayoutA(LPCSTR pwszKLID,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004082d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = LoadKeyboardLayoutA(pwszKLID,Flags);
  return pHVar1;
}

