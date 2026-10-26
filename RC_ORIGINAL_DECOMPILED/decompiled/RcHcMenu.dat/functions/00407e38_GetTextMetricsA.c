/*
 * GDI32.DLL::GetTextMetricsA at 00407e38
 * BOOL __stdcall GetTextMetricsA(HDC hdc, LPTEXTMETRICA lptm)
 * Address ranges: 00407e38-00407e3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to GDI32.DLL::GetTextMetricsA
 */

BOOL __stdcall GetTextMetricsA(HDC hdc,LPTEXTMETRICA lptm)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetTextMetricsA(hdc,lptm);
  return BVar1;
}

