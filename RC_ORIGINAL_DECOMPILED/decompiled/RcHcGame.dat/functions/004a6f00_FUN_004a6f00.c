/*
 * FUN_004a6f00 at 004a6f00
 * undefined FUN_004a6f00(void)
 * Address ranges: 004a6f00-004a70ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004a705d) */
/* WARNING: Removing unreachable block (ram,0x004a7074) */
/* WARNING: Removing unreachable block (ram,0x004a7083) */
/* WARNING: Removing unreachable block (ram,0x004a708c) */
/* WARNING: Removing unreachable block (ram,0x004a7090) */

void __thiscall FUN_004a6f00(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) - (int)puVar7 >> 2 != 0) {
    FUN_004dddf0(puVar7,puVar7,puVar7 + 1);
    FUN_004a7300(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)puVar7 >> 2),param_2);
    puVar6 = *(undefined4 **)(param_1 + 8);
    if (puVar7 != puVar6) {
      do {
        *puVar7 = *param_2;
        puVar7 = puVar7 + 1;
      } while (puVar7 != puVar6);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
      return;
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (uVar4 = (int)puVar7 - iVar1 >> 2, uVar4 < 2)) {
    uVar4 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar7 - iVar1 >> 2;
  }
  iVar1 = iVar1 + uVar4;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 * 4);
  pvVar5 = pvVar3;
  for (puVar6 = *(undefined4 **)(param_1 + 4); puVar6 != puVar7; puVar6 = puVar6 + 1) {
    FUN_005f0760(pvVar5,puVar6);
    pvVar5 = (void *)((int)pvVar5 + 4);
  }
  FUN_004a7300(pvVar5,1,param_2);
  FUN_004dddf0(puVar7,*(undefined4 *)(param_1 + 8),(int)pvVar5 + 4);
  FUN_00587d50(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  iVar2 = *(int *)(param_1 + 4);
  *(void **)(param_1 + 0xc) = (void *)((int)pvVar3 + iVar1 * 4);
  if (iVar2 == 0) {
    *(void **)(param_1 + 4) = pvVar3;
    *(int *)(param_1 + 8) = (int)pvVar3 + 4;
    return;
  }
  *(void **)(param_1 + 4) = pvVar3;
  *(int *)(param_1 + 8) = (int)pvVar3 + (*(int *)(param_1 + 8) - iVar2 >> 2) * 4 + 4;
  return;
}

