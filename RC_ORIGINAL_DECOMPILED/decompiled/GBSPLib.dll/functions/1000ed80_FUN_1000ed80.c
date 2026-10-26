/*
 * FUN_1000ed80 at 1000ed80
 * undefined FUN_1000ed80(void)
 * Address ranges: 1000ed80-1000edbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000ed80(int *param_1)

{
  if (*param_1 == 0) {
    (*DAT_1014e358)(s_FreePortal__Portal_with_NULL_Pol_10039090);
    return 0;
  }
  FUN_1000c2e0(*param_1);
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return 1;
}

