/*
 * GDI32.DLL::CreateCompatibleDC at 00407d10
 * HDC __stdcall CreateCompatibleDC(HDC hdc)
 * Address ranges: 00407d10-00407d15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreateCompatibleDC
 */

HDC __stdcall CreateCompatibleDC(HDC hdc)

{
  HDC pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateCompatibleDC(hdc);
  return pHVar1;
}

