/*
 * FUN_00586ed0 at 00586ed0
 * undefined FUN_00586ed0(void)
 * Address ranges: 00586ed0-005870f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0058707c) */
/* WARNING: Removing unreachable block (ram,0x00587093) */
/* WARNING: Removing unreachable block (ram,0x005870b7) */
/* WARNING: Removing unreachable block (ram,0x005870c0) */

void __thiscall FUN_00586ed0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = *param_3;
  local_c = param_3[1];
  local_8 = param_3[2];
  local_4 = param_2;
  puVar7 = *(undefined4 **)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x20) - (int)puVar7 >> 4 != 0) {
    FUN_00587d60(puVar7,puVar7,puVar7 + 4);
    FUN_00587db0(*(int *)(param_1 + 0x1c),1 - (*(int *)(param_1 + 0x1c) - (int)puVar7 >> 4),
                 &local_10);
    puVar4 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar7 == puVar4) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 0x10;
      return;
    }
    do {
      puVar8 = puVar7 + 4;
      *puVar7 = local_10;
      puVar7[1] = local_c;
      puVar7[2] = local_8;
      puVar7[3] = local_4;
      puVar7 = puVar8;
    } while (puVar8 != puVar4);
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 0x10;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((iVar1 == 0) || (uVar5 = (int)puVar7 - iVar1 >> 4, uVar5 < 2)) {
    uVar5 = 1;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)puVar7 - iVar1 >> 4;
  }
  iVar1 = iVar1 + uVar5;
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = 0;
  }
  pvVar3 = operator_new(iVar2 << 4);
  pvVar6 = pvVar3;
  for (puVar4 = *(undefined4 **)(param_1 + 0x18); puVar4 != puVar7; puVar4 = puVar4 + 4) {
    FUN_00587df0(pvVar6,puVar4);
    pvVar6 = (void *)((int)pvVar6 + 0x10);
  }
  FUN_00587db0(pvVar6,1,&local_10);
  FUN_00587d60(puVar7,*(undefined4 *)(param_1 + 0x1c),(int)pvVar6 + 0x10);
  FUN_00587d50(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x18));
  iVar2 = *(int *)(param_1 + 0x18);
  *(void **)(param_1 + 0x20) = (void *)(iVar1 * 0x10 + (int)pvVar3);
  if (iVar2 != 0) {
    *(void **)(param_1 + 0x18) = pvVar3;
    *(void **)(param_1 + 0x1c) =
         (void *)(((*(int *)(param_1 + 0x1c) - iVar2 >> 4) + 1) * 0x10 + (int)pvVar3);
    return;
  }
  *(void **)(param_1 + 0x18) = pvVar3;
  *(int *)(param_1 + 0x1c) = (int)pvVar3 + 0x10;
  return;
}

