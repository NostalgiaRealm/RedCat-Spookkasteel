/*
 * FUN_005e1be0 at 005e1be0
 * undefined FUN_005e1be0(void)
 * Address ranges: 005e1be0-005e1c48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005e1be0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005cf400(*(int *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
    _DAT_007203c0 = 0;
  }
  if (*param_2 != 0) {
    puVar1 = (undefined4 *)FUN_005cf3b0(param_2[1]);
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

