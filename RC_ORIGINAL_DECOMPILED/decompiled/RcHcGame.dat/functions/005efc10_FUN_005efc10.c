/*
 * FUN_005efc10 at 005efc10
 * undefined FUN_005efc10(void)
 * Address ranges: 005efc10-005efe0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005efd8f) */
/* WARNING: Removing unreachable block (ram,0x005efdaa) */
/* WARNING: Removing unreachable block (ram,0x005efdb9) */
/* WARNING: Removing unreachable block (ram,0x005efdc0) */

undefined1 * __thiscall FUN_005efc10(undefined1 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_20;
  undefined4 *local_1c;
  void *local_18;
  int local_14;
  undefined1 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar3 = ExceptionList;
  puStack_8 = &LAB_00647768;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = (undefined1)param_2;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  local_4 = 0;
  puVar5 = *(undefined4 **)(param_2 + 4);
  local_10 = param_1;
  if (puVar5 != *(undefined4 **)(param_2 + 8)) {
    do {
      local_20 = *puVar5;
      puVar6 = *(undefined4 **)(param_1 + 8);
      local_1c = puVar5;
      if (*(int *)(param_1 + 0xc) - (int)puVar6 >> 2 == 0) {
        iVar2 = *(int *)(param_1 + 4);
        if ((iVar2 == 0) || (uVar4 = (int)puVar6 - iVar2 >> 2, uVar4 < 2)) {
          uVar4 = 1;
        }
        if (iVar2 == 0) {
          local_14 = 0;
        }
        else {
          local_14 = (int)puVar6 - iVar2 >> 2;
        }
        local_14 = local_14 + uVar4;
        iVar2 = local_14;
        if (local_14 < 0) {
          iVar2 = 0;
        }
        pvVar3 = operator_new(iVar2 << 2);
        local_18 = pvVar3;
        for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != puVar6; puVar5 = puVar5 + 1) {
          FUN_005f0760(pvVar3,puVar5);
          pvVar3 = (void *)((int)pvVar3 + 4);
        }
        FUN_004a7300(pvVar3,1,&local_20);
        FUN_004dddf0(puVar6,*(undefined4 *)(param_1 + 8),(int)pvVar3 + 4);
        FUN_00587d50(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
        FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
        pvVar3 = local_18;
        *(void **)(param_1 + 0xc) = (void *)((int)local_18 + local_14 * 4);
        iVar2 = FUN_0044e4c0();
        *(void **)(param_1 + 4) = pvVar3;
        *(int *)(param_1 + 8) = (int)pvVar3 + iVar2 * 4 + 4;
        puVar5 = local_1c;
      }
      else {
        FUN_004dddf0(puVar6,puVar6,puVar6 + 1);
        FUN_004a7300(*(int *)(param_1 + 8),1 - (*(int *)(param_1 + 8) - (int)puVar6 >> 2),&local_20)
        ;
        puVar1 = *(undefined4 **)(param_1 + 8);
        for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          *puVar6 = local_20;
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_2 + 8));
    ExceptionList = local_c;
    return param_1;
  }
  ExceptionList = pvVar3;
  return param_1;
}

