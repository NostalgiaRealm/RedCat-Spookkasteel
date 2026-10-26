/*
 * USER32.DLL::TranslateMDISysAccel at 004084a8
 * BOOL __stdcall TranslateMDISysAccel(HWND hWndClient, LPMSG lpMsg)
 * Address ranges: 004084a8-004084ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::TranslateMDISysAccel
 */

BOOL __stdcall TranslateMDISysAccel(HWND hWndClient,LPMSG lpMsg)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004084a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = TranslateMDISysAccel(hWndClient,lpMsg);
  return BVar1;
}

