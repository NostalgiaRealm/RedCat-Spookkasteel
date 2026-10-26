/*
 * FUN_005e60e0 at 005e60e0
 * undefined FUN_005e60e0(void)
 * Address ranges: 005e60e0-005e611c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005e60e0(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_00650a2c;
  if (param_1[1] != 0) {
    FUN_005e9720(s_OnUnLoad_006b0f0c);
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[1])(1);
    }
  }
  if ((param_2 & 1) != 0) {
    FUN_005fe5f0(param_1);
  }
  return param_1;
}

