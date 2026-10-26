/*
 * FUN_005e1470 at 005e1470
 * undefined FUN_005e1470(void)
 * Address ranges: 005e1470-005e14c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e1470(undefined4 *param_1)

{
  if (param_1[9] != 0) {
    FUN_005e1470(param_1[9]);
  }
  if (param_1[10] != 0) {
    FUN_005e1470(param_1[10]);
  }
  FUN_005cf400(*param_1);
  *param_1 = 0;
  _DAT_007203c0 = 0;
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return;
}

