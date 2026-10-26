/*
 * FUN_10024800 at 10024800
 * undefined FUN_10024800(void)
 * Address ranges: 10024800-10024868
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10024800(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10014360(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    _DAT_1003fde8 = 0;
  }
  if (*param_2 != 0) {
    puVar1 = (undefined4 *)FUN_10014310(param_2[1]);
    *(undefined4 **)(param_1 + 0x14) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    uVar3 = param_2[1];
    puVar4 = (undefined4 *)*param_2;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar1 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    }
  }
  *(int *)(param_1 + 0x18) = param_2[1];
  return 1;
}

