/*
 * DriverHook at 10005300
 * undefined4 __cdecl DriverHook(undefined4 * param_1)
 * Address ranges: 10005300-10005346
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl DriverHook(undefined4 *param_1)

{
                    /* 0x5300  1  DriverHook */
  _DAT_10039000 = 3;
  _DAT_10039004 = 0;
  _DAT_10015440 = &DAT_10039000;
  *param_1 = &PTR_s_D3D_driver__v100_3__Copyright_19_10015398;
  _DAT_100153a8 = &DAT_10038ea8;
  FUN_10005350(0,s_D3DDrv__No_error__1001549c);
  return 1;
}

