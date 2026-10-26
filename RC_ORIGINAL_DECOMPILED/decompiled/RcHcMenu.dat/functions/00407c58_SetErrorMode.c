/*
 * KERNEL32.DLL::SetErrorMode at 00407c58
 * UINT __stdcall SetErrorMode(UINT uMode)
 * Address ranges: 00407c58-00407c5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to KERNEL32.DLL::SetErrorMode
 */

UINT __stdcall SetErrorMode(UINT uMode)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00407c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SetErrorMode(uMode);
  return UVar1;
}

