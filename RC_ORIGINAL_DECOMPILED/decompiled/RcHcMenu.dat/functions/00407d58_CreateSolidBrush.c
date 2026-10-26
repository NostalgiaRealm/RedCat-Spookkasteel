/*
 * GDI32.DLL::CreateSolidBrush at 00407d58
 * HBRUSH __stdcall CreateSolidBrush(COLORREF color)
 * Address ranges: 00407d58-00407d5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::CreateSolidBrush
 */

HBRUSH __stdcall CreateSolidBrush(COLORREF color)

{
  HBRUSH pHVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pHVar1 = CreateSolidBrush(color);
  return pHVar1;
}

