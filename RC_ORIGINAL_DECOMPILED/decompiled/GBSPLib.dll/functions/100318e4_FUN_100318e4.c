/*
 * FUN_100318e4 at 100318e4
 * undefined FUN_100318e4(void)
 * Address ranges: 100318e4-10031927
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100318e4(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_1052a3ec = _DAT_1052a3ec + 1;
  pvVar1 = _malloc(0x1000);
  param_1[2] = pvVar1;
  if (pvVar1 == (void *)0x0) {
    param_1[3] = param_1[3] | 4;
    param_1[2] = param_1 + 5;
    param_1[6] = 2;
  }
  else {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
  }
  param_1[1] = 0;
  *param_1 = param_1[2];
  return;
}

