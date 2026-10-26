/*
 * FUN_10002830 at 10002830
 * undefined FUN_10002830(void)
 * Address ranges: 10002830-1000289c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10002830(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_10014360(*(int *)(param_1 + 0x3c));
    *(undefined4 *)(param_1 + 0x3c) = 0;
    _DAT_1003fde8 = 0;
  }
  puVar2 = *(undefined4 **)(param_1 + 0xc);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_1000d930(puVar2);
    puVar2 = puVar1;
  }
  puVar2 = *(undefined4 **)(param_1 + 100);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_10001790(puVar2);
    puVar2 = puVar1;
  }
  FUN_10014360(param_1);
  _DAT_1003fde8 = 0;
  return;
}

