/*
 * FUN_005a5dd0 at 005a5dd0
 * undefined FUN_005a5dd0(void)
 * Address ranges: 005a5dd0-005a5e01
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005a5dd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0xffffffff;
  FUN_005a5d90();
  param_1[0x32] = 0x9999999a;
  param_1[0x33] = 0x3fb99999;
  uVar1 = FUN_005a5e10();
  *param_1 = uVar1;
  return param_1;
}

