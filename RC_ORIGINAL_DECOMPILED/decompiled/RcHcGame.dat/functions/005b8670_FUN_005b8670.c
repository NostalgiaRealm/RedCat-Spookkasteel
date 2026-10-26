/*
 * FUN_005b8670 at 005b8670
 * undefined FUN_005b8670(void)
 * Address ranges: 005b8670-005b86a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005b8670(undefined4 param_1)

{
  int iVar1;
  
  DAT_006cc41c = param_1;
  iVar1 = FUN_005d1fd0(param_1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_005d1760();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_005d4720(param_1);
  return iVar1 != 0;
}

