/*
 * USER32.DLL::OpenClipboard at 00408330
 * BOOL __stdcall OpenClipboard(HWND hWndNewOwner)
 * Address ranges: 00408330-00408335
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::OpenClipboard
 */

BOOL __stdcall OpenClipboard(HWND hWndNewOwner)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = OpenClipboard(hWndNewOwner);
  return BVar1;
}

