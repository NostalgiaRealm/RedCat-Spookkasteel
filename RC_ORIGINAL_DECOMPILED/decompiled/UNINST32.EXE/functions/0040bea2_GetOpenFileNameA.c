/*
 * COMDLG32.DLL::GetOpenFileNameA at 0040bea2
 * BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
 * Address ranges: 0040bea2-0040bea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMDLG32.DLL::GetOpenFileNameA
 */

BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0040bea2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}

