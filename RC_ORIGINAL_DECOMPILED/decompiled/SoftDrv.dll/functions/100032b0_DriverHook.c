/*
 * DriverHook at 100032b0
 * undefined DriverHook(void)
 * Address ranges: 100032b0-100032c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 DriverHook(undefined4 *param_1)

{
                    /* 0x32b0  1  DriverHook */
  *param_1 = &PTR_s_Software_driver__v100_3__Copyrig_100212a8;
  _DAT_100212b8 = &DAT_1020e8e0;
  return 1;
}

