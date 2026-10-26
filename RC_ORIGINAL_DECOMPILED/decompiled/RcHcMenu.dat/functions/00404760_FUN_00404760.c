/*
 * FUN_00404760 at 00404760
 * undefined __register FUN_00404760(undefined4 * param_1)
 * Address ranges: 00404760-0040477e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00404760(undefined4 *param_1)

{
  OLECHAR *strIn;
  BSTR pOVar1;
  
  strIn = (OLECHAR *)*param_1;
  if (strIn != (OLECHAR *)0x0) {
    pOVar1 = SysAllocStringLen(strIn,*(uint *)(strIn + -2) >> 1);
    if (pOVar1 == (BSTR)0x0) {
      FUN_00402874(1);
      return;
    }
    *param_1 = pOVar1;
  }
  return;
}

