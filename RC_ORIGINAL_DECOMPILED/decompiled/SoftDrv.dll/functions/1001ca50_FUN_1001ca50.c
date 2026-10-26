/*
 * FUN_1001ca50 at 1001ca50
 * undefined FUN_1001ca50(void)
 * Address ranges: 1001ca50-1001ca93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ca50(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_10025e68 = _DAT_10025e68 + 1;
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

