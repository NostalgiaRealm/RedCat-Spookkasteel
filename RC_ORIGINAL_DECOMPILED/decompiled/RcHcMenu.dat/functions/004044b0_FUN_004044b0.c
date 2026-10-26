/*
 * FUN_004044b0 at 004044b0
 * BSTR * __register FUN_004044b0(BSTR * param_1, OLECHAR * param_2)
 * Address ranges: 0040445c-00404462;004044b0-004044d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

BSTR * FUN_004044b0(BSTR *param_1,OLECHAR *param_2)

{
  BSTR bstrString;
  BSTR *ppOVar1;
  
  if ((param_2 != (OLECHAR *)0x0) && (*(uint *)(param_2 + -2) >> 1 != 0)) {
    ppOVar1 = (BSTR *)SysReAllocStringLen(param_1,param_2,*(uint *)(param_2 + -2) >> 1);
    if (ppOVar1 != (BSTR *)0x0) {
      return ppOVar1;
    }
    ppOVar1 = (BSTR *)FUN_00402874(1);
    return ppOVar1;
  }
  bstrString = *param_1;
  if (bstrString != (BSTR)0x0) {
    *param_1 = (BSTR)0x0;
    SysFreeString(bstrString);
  }
  return param_1;
}

