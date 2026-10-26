/*
 * FUN_005b86b0 at 005b86b0
 * undefined FUN_005b86b0(void)
 * Address ranges: 005b86b0-005b86f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005b86b0(int param_1)

{
  int iVar1;
  
  DAT_006cc40c = param_1;
  DAT_006cc420 = param_1 + 200;
  iVar1 = FUN_005d2000(param_1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_005d1770();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_005d4730(param_1);
  return iVar1 != 0;
}

