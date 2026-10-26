/*
 * GDI32.DLL::GetTextAlign at 00407e20
 * UINT __stdcall GetTextAlign(HDC hdc)
 * Address ranges: 00407e20-00407e25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetTextAlign
 */

UINT __stdcall GetTextAlign(HDC hdc)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = GetTextAlign(hdc);
  return UVar1;
}

