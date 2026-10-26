/*
 * USER32.DLL::DestroyIcon at 00408020
 * BOOL __stdcall DestroyIcon(HICON hIcon)
 * Address ranges: 00408020-00408025
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::DestroyIcon
 */

BOOL __stdcall DestroyIcon(HICON hIcon)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = DestroyIcon(hIcon);
  return BVar1;
}

