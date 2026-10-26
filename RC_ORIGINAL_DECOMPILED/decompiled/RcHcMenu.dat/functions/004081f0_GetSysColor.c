/*
 * USER32.DLL::GetSysColor at 004081f0
 * DWORD __stdcall GetSysColor(int nIndex)
 * Address ranges: 004081f0-004081f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetSysColor
 */

DWORD __stdcall GetSysColor(int nIndex)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004081f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetSysColor(nIndex);
  return DVar1;
}

