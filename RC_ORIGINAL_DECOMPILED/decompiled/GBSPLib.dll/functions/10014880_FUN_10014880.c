/*
 * FUN_10014880 at 10014880
 * undefined FUN_10014880(void)
 * Address ranges: 10014880-1001498c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_10014880(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *unaff_EBP;
  int *piVar5;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  iVar1 = FUN_10014830();
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  piVar5 = *(int **)(param_1 + 0x10);
  if ((param_3 & 4) == 0) {
    if (piVar5 == (int *)0x0) {
      return (undefined4 *)0x0;
    }
    while( true ) {
      param_1 = *piVar5;
      iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x24))(param_2);
      if (iVar1 != 0) break;
      piVar5 = (int *)piVar5[1];
      if (piVar5 == (int *)0x0) {
        return (undefined4 *)0x0;
      }
    }
  }
  if (piVar5 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 4) + 0x18))(param_2,0,param_3);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_10014310(0x30);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = puVar2;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    *puVar2 = 0;
    puVar2[1] = *(undefined4 *)(param_1 + 4);
    puVar2[2] = iVar1;
    puVar3 = (undefined4 *)FUN_10014310(8);
    puVar2[4] = puVar3;
    puVar2[3] = param_1;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = puVar2;
      *(undefined4 *)(puVar2[4] + 4) = *unaff_EBP;
      return puVar2;
    }
    FUN_10014360(puVar2);
    _DAT_1003fde8 = 0;
    (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
    return (undefined4 *)0x0;
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x2c))();
  return (undefined4 *)0x0;
}

