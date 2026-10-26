/*
 * USER32.DLL::UnhookWindowsHookEx at 004084b8
 * BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)
 * Address ranges: 004084b8-004084bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::UnhookWindowsHookEx
 */

BOOL __stdcall UnhookWindowsHookEx(HHOOK hhk)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004084b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = UnhookWindowsHookEx(hhk);
  return BVar1;
}

