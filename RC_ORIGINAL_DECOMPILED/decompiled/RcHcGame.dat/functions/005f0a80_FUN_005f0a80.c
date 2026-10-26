/*
 * FUN_005f0a80 at 005f0a80
 * undefined FUN_005f0a80(void)
 * Address ranges: 005f0a80-005f0cbd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x005f0c5c) */
/* WARNING: Removing unreachable block (ram,0x005f0c77) */
/* WARNING: Removing unreachable block (ram,0x005f0c86) */
/* WARNING: Removing unreachable block (ram,0x005f0c8d) */

void __thiscall FUN_005f0a80(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  short local_e;
  undefined4 uStack_c;
  int local_8;
  int local_4;
  
  FUN_005e6f90(param_2,&local_e);
  uVar9 = (uint)local_e;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 8) >> 2;
  }
  if (uVar1 < uVar9) {
    uVar1 = uVar9;
    if ((int)uVar9 < 0) {
      uVar1 = 0;
    }
    puVar2 = operator_new(uVar1 * 4);
    puVar7 = *(undefined4 **)(param_1 + 0xc);
    puVar8 = puVar2;
    for (puVar3 = *(undefined4 **)(param_1 + 8); puVar3 != puVar7; puVar3 = puVar3 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar3;
      }
      puVar8 = puVar8 + 1;
    }
    local_4 = *(int *)(param_1 + 8);
    FUN_005fe5f0(local_4);
    *(undefined4 **)(param_1 + 0x10) = puVar2 + uVar9;
    if (*(int *)(param_1 + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
    }
    *(undefined4 **)(param_1 + 8) = puVar2;
    *(undefined4 **)(param_1 + 0xc) = puVar2 + iVar4;
  }
  local_8 = 0;
  if (0 < local_e) {
    do {
      uStack_c = FUN_005f7280(param_2,param_3);
      puVar7 = *(undefined4 **)(param_1 + 0xc);
      if (*(int *)(param_1 + 0x10) - (int)puVar7 >> 2 == 0) {
        uVar9 = FUN_0044e4c0();
        if (uVar9 < 2) {
          iVar4 = 1;
        }
        else {
          iVar4 = FUN_0044e4c0();
        }
        iVar5 = FUN_0044e4c0();
        iVar5 = iVar5 + iVar4;
        iVar4 = iVar5;
        if (iVar5 < 0) {
          iVar4 = 0;
        }
        pvVar6 = operator_new(iVar4 * 4);
        local_4 = FUN_004dddf0(*(undefined4 *)(param_1 + 8),puVar7,pvVar6);
        FUN_004a7300(local_4,1,&uStack_c);
        FUN_004dddf0(puVar7,*(undefined4 *)(param_1 + 0xc),local_4 + 4);
        FUN_00587d50(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
        FUN_005fe5f0(*(undefined4 *)(param_1 + 8));
        *(void **)(param_1 + 0x10) = (void *)((int)pvVar6 + iVar5 * 4);
        iVar4 = FUN_0044e4c0();
        *(void **)(param_1 + 8) = pvVar6;
        *(int *)(param_1 + 0xc) = (int)pvVar6 + iVar4 * 4 + 4;
      }
      else {
        FUN_004dddf0(puVar7,puVar7,puVar7 + 1);
        FUN_004a7300(*(int *)(param_1 + 0xc),1 - (*(int *)(param_1 + 0xc) - (int)puVar7 >> 2),
                     &uStack_c);
        puVar3 = *(undefined4 **)(param_1 + 0xc);
        for (; puVar7 != puVar3; puVar7 = puVar7 + 1) {
          *puVar7 = uStack_c;
        }
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
      }
      local_8 = local_8 + 1;
    } while (local_8 < local_e);
  }
  return;
}

