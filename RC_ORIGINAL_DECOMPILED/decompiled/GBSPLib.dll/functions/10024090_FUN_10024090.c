/*
 * FUN_10024090 at 10024090
 * undefined FUN_10024090(void)
 * Address ranges: 10024090-100240e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10024090(undefined4 *param_1)

{
  if (param_1[9] != 0) {
    FUN_10024090(param_1[9]);
  }
  if (param_1[10] != 0) {
    FUN_10024090(param_1[10]);
  }
  FUN_10014360(*param_1);
  *param_1 = 0;
  _DAT_1003fde8 = 0;
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return;
}

