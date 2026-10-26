/*
 * FUN_1001e530 at 1001e530
 * undefined FUN_1001e530(void)
 * Address ranges: 1001e530-1001e59b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001e530(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 8);
    while (puVar3 != (undefined4 *)0x0) {
      FUN_10014360(puVar3[1]);
      puVar3[1] = 0;
      _DAT_1003fde8 = 0;
      puVar2 = (undefined4 *)*puVar3;
      FUN_10014360(puVar3);
      _DAT_1003fde8 = 0;
      puVar3 = puVar2;
    }
    FUN_10014360(*(undefined4 *)(iVar1 + 0x18));
    *(undefined4 *)(iVar1 + 0x18) = 0;
    _DAT_1003fde8 = 0;
    FUN_10014360(iVar1);
    _DAT_1003fde8 = 0;
    *param_1 = 0;
  }
  return;
}

