/*
 * FUN_004046b8 at 004046b8
 * undefined __register FUN_004046b8(UINT param_1)
 * Address ranges: 004046b8-004046cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004046b8(UINT param_1)

{
  BSTR pOVar1;
  
  if (param_1 != 0) {
    pOVar1 = SysAllocStringLen((OLECHAR *)0x0,param_1);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402874(1);
      return;
    }
  }
  return;
}

