/*
 * DriverHook at 10005df0
 * undefined4 __cdecl DriverHook(undefined4 * param_1)
 * Address ranges: 10005df0-10005e36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl DriverHook(undefined4 *param_1)

{
                    /* 0x5df0  1  DriverHook */
  _DAT_10028ab0 = 3;
  _DAT_10028ab4 = 0;
  _DAT_100188ec = &DAT_10028ab0;
  *param_1 = &PTR_s_D3D_driver__v100_2__Copyright_19_10018848;
  _DAT_10018858 = &DAT_10028958;
  FUN_10005e40(0,s_D3DDrv__No_error__10018948);
  return 1;
}

