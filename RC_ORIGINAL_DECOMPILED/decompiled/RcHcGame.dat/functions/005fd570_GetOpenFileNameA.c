/*
 * COMDLG32.DLL::GetOpenFileNameA at 005fd570
 * BOOL __stdcall GetOpenFileNameA(LPOPENFILENAMEA param_1)
 * Address ranges: 005fd570-005fd575
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to COMDLG32.DLL::GetOpenFileNameA
 */

BOOL GetOpenFileNameA(LPOPENFILENAMEA param_1)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x005fd570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}

