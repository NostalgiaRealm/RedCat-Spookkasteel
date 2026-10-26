/*
 * FUN_005d1fd0 at 005d1fd0
 * undefined FUN_005d1fd0(void)
 * Address ranges: 005d1fd0-005d1ff8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005d1fd0(int param_1)

{
  DAT_006cefd8 = param_1;
  DAT_006cefd0 = *(undefined4 *)(param_1 + 0x3b0);
  _DAT_006cefc8 = *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c0);
  return 1;
}

