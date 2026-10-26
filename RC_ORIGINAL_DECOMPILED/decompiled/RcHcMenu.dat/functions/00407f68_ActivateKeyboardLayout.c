/*
 * USER32.DLL::ActivateKeyboardLayout at 00407f68
 * HKL __stdcall ActivateKeyboardLayout(HKL hkl, UINT Flags)
 * Address ranges: 00407f68-00407f6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::ActivateKeyboardLayout
 */

HKL __stdcall ActivateKeyboardLayout(HKL hkl,UINT Flags)

{
  HKL pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = ActivateKeyboardLayout(hkl,Flags);
  return pHVar1;
}

