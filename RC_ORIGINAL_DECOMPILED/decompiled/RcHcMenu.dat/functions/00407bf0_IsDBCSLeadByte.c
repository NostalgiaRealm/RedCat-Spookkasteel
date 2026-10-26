/*
 * KERNEL32.DLL::IsDBCSLeadByte at 00407bf0
 * BOOL __stdcall IsDBCSLeadByte(BYTE TestChar)
 * Address ranges: 00407bf0-00407bf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::IsDBCSLeadByte
 */

BOOL __stdcall IsDBCSLeadByte(BYTE TestChar)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = IsDBCSLeadByte(TestChar);
  return BVar1;
}

