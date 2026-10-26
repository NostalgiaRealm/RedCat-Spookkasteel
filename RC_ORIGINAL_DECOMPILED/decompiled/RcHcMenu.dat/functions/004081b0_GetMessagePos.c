/*
 * USER32.DLL::GetMessagePos at 004081b0
 * DWORD __stdcall GetMessagePos(void)
 * Address ranges: 004081b0-004081b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetMessagePos
 */

DWORD __stdcall GetMessagePos(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004081b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetMessagePos();
  return DVar1;
}

