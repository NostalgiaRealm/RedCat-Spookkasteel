/*
 * OLEAUT32.DLL::SysStringLen at 004013fc
 * UINT __stdcall SysStringLen(BSTR param_1)
 * Address ranges: 004013fc-00401401
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to OLEAUT32.DLL::SysStringLen
 */

UINT __stdcall SysStringLen(BSTR param_1)

{
  UINT UVar1;
  
                    /* WARNING: Could not recover jumptable at 0x004013fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  UVar1 = SysStringLen(param_1);
  return UVar1;
}

