/*
 * GDI32.DLL::SetTextAlign at 00407f28
 * UINT __stdcall SetTextAlign(HDC hdc, UINT align)
 * Address ranges: 00407f28-00407f2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::SetTextAlign
 */

UINT __stdcall SetTextAlign(HDC hdc,UINT align)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407f28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetTextAlign(hdc,align);
  return UVar1;
}

