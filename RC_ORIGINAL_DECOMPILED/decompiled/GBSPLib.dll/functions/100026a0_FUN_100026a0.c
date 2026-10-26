/*
 * FUN_100026a0 at 100026a0
 * undefined FUN_100026a0(void)
 * Address ranges: 100026a0-10002718
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100026a0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  DAT_10036408 = *param_2;
  DAT_1014e1f8 = param_2[1];
  _DAT_10312ff0 = 1;
  DAT_1014e628 = 0;
  DAT_1014e62c = 0;
  DAT_102487c8 = 0;
  DAT_1014e1fc = 0;
  DAT_1003fdf0 = DAT_10036408;
  iVar1 = FUN_1000ba50(param_1);
  if (iVar1 == 0) {
    FUN_1000b950();
    return 0;
  }
  FUN_10002610();
  FUN_10007180();
  iVar1 = FUN_10004400();
  if (iVar1 == 0) {
    FUN_100028a0();
    FUN_1000b950();
    return 0;
  }
  return 1;
}

