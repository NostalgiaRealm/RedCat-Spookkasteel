/*
 * DriverHook at 100018d0
 * undefined4 __cdecl DriverHook(undefined4 * param_1)
 * Address ranges: 100018d0-10001916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl DriverHook(undefined4 *param_1)

{
                    /* 0x18d0  1  DriverHook */
  _DAT_101f5710 = 3;
  _DAT_101f5714 = 0;
  _DAT_1000e280 = &DAT_101f5710;
  *param_1 = &PTR_s_Glide_driver__v100_3__Copyright_1_1000e1d8;
  _DAT_1000e1e8 = &DAT_101f5600;
  FUN_10001920(0,s_GLIDE_DRV__No_error__1000e320);
  return 1;
}

