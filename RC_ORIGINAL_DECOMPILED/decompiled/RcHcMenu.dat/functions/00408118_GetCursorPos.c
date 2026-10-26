/*
 * USER32.DLL::GetCursorPos at 00408118
 * BOOL __stdcall GetCursorPos(LPPOINT lpPoint)
 * Address ranges: 00408118-0040811d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to USER32.DLL::GetCursorPos
 */

BOOL __stdcall GetCursorPos(LPPOINT lpPoint)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00408118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GetCursorPos(lpPoint);
  return BVar1;
}

