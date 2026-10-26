/*
 * FUN_005f07a0 at 005f07a0
 * undefined FUN_005f07a0(void)
 * Address ranges: 005f07a0-005f0a25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005f09b9) */
/* WARNING: Removing unreachable block (ram,0x005f09d4) */
/* WARNING: Removing unreachable block (ram,0x005f09e3) */
/* WARNING: Removing unreachable block (ram,0x005f09ea) */

undefined4 * __thiscall FUN_005f07a0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int iVar8;
  uint local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006478ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = (undefined1)param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_00650b88;
  local_4 = 0;
  if (*(int *)(param_2 + 8) == 0) {
    local_1c = 0;
  }
  else {
    local_1c = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2;
  }
  if (param_1[2] == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (int)(param_1[4] - param_1[2]) >> 2;
  }
  local_14 = param_1;
  if (uVar2 < local_1c) {
    uVar2 = local_1c;
    if ((int)local_1c < 0) {
      uVar2 = 0;
    }
    pvVar3 = operator_new(uVar2 * 4);
    iVar8 = param_1[2];
    local_18 = (undefined4 *)param_1[3];
    pvVar7 = pvVar3;
    if ((undefined4 *)iVar8 != local_18) {
      do {
        FUN_005f0760(pvVar7,iVar8);
        iVar8 = iVar8 + 4;
        pvVar7 = (void *)((int)pvVar7 + 4);
      } while ((undefined4 *)iVar8 != local_18);
    }
    local_10 = param_1[2];
    FUN_005fe5f0(local_10);
    param_1[4] = (void *)((int)pvVar3 + local_1c * 4);
    iVar8 = FUN_0044e4c0();
    param_1[3] = (void *)((int)pvVar3 + iVar8 * 4);
    param_1[2] = pvVar3;
  }
  puVar6 = *(undefined4 **)(param_2 + 8);
  if (puVar6 != *(undefined4 **)(param_2 + 0xc)) {
    do {
      local_18 = puVar6;
      local_1c = (**(code **)(*(int *)*puVar6 + 0x28))();
      puVar5 = (uint *)param_1[3];
      if (param_1[4] - (int)puVar5 >> 2 == 0) {
        uVar2 = FUN_0044e4c0();
        if (uVar2 < 2) {
          iVar8 = 1;
        }
        else {
          iVar8 = FUN_0044e4c0();
        }
        iVar4 = FUN_0044e4c0();
        iVar4 = iVar4 + iVar8;
        iVar8 = iVar4;
        if (iVar4 < 0) {
          iVar8 = 0;
        }
        pvVar7 = operator_new(iVar8 * 4);
        local_10 = FUN_004dddf0(param_1[2],puVar5,pvVar7);
        FUN_004a7300(local_10,1,&local_1c);
        FUN_004dddf0(puVar5,param_1[3],local_10 + 4);
        FUN_00587d50(param_1[2],param_1[3]);
        FUN_005fe5f0(param_1[2]);
        param_1[4] = (void *)((int)pvVar7 + iVar4 * 4);
        iVar8 = FUN_0044e4c0();
        param_1[2] = pvVar7;
        param_1[3] = (int)pvVar7 + iVar8 * 4 + 4;
        puVar6 = local_18;
      }
      else {
        FUN_004dddf0(puVar5,puVar5,puVar5 + 1);
        FUN_004a7300(param_1[3],1 - (param_1[3] - (int)puVar5 >> 2),&local_1c);
        puVar1 = (uint *)param_1[3];
        for (; puVar5 != puVar1; puVar5 = puVar5 + 1) {
          *puVar5 = local_1c;
        }
        param_1[3] = param_1[3] + 4;
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != *(undefined4 **)(param_2 + 0xc));
  }
  ExceptionList = local_c;
  return local_14;
}

