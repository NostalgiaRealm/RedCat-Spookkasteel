/*
 * FUN_0061c6ae at 0061c6ae
 * undefined FUN_0061c6ae(void)
 * Address ranges: 0061c6ae-0061c6f1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0061c6ae(undefined4 *param_1)

{
  void *pvVar1;
  
  _DAT_0070ff78 = _DAT_0070ff78 + 1;
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

