/*
 * FUN_005b8630 at 005b8630
 * undefined FUN_005b8630(void)
 * Address ranges: 005b8630-005b8667
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005b8630(undefined4 param_1)

{
  int iVar1;
  
  DAT_006cc418 = param_1;
  iVar1 = FUN_005d1fc0(param_1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_005d1750();
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_005d4710(param_1);
  return iVar1 != 0;
}

