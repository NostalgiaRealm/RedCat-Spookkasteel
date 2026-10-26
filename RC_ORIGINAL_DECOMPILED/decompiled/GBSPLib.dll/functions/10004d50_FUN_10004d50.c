/*
 * FUN_10004d50 at 10004d50
 * undefined FUN_10004d50(void)
 * Address ranges: 10004d50-10004d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10004d50(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_10014a20(0xc);
  if (iVar1 != 1) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 8) * *(int *)(param_1 + 4);
  if ((0 < iVar1) && (param_2 != 0)) {
    iVar1 = FUN_10014a20(iVar1);
    if (iVar1 != 1) {
      return 0;
    }
  }
  return 1;
}

