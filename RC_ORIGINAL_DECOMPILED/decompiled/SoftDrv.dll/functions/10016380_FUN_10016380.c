/*
 * FUN_10016380 at 10016380
 * undefined FUN_10016380(void)
 * Address ranges: 10016380-1001644e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10016380(int param_1,int param_2,int param_3)

{
  FUN_100162f0();
  DAT_10025c7c = param_2;
  _DAT_10025c88 = param_3;
  DAT_10025c78 = FUN_10002c10(param_2 << 2);
  if (DAT_10025c78 == 0) {
    return 0;
  }
  DAT_10025c84 = FUN_10002c10(param_3 * 0xc);
  if (DAT_10025c78 == 0) {
    FUN_10002c60(0);
    _DAT_1020e9dc = 0;
    DAT_10025c78 = 0;
    return 0;
  }
  DAT_1020e4a0 = FUN_10002c10(param_1 / 2 << 3);
  if (DAT_1020e4a0 == 0) {
    FUN_10002c60(DAT_10025c78);
    _DAT_1020e9dc = 0;
    DAT_10025c78 = 0;
    FUN_10002c60(DAT_10025c84);
    _DAT_1020e9dc = 0;
    DAT_10025c84 = 0;
    return 0;
  }
  FUN_10016350();
  return 1;
}

