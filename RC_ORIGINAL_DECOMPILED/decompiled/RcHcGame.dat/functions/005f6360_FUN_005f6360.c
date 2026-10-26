/*
 * FUN_005f6360 at 005f6360
 * undefined FUN_005f6360(void)
 * Address ranges: 005f6360-005f64b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_005f6360(int param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int local_24;
  undefined1 local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00648388;
  pvStack_c = ExceptionList;
  puVar2 = (undefined1 *)(*(int *)(param_1 + 8) + 0xc);
  local_1c[0] = *puVar2;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &pvStack_c;
  FUN_0040cc00(puVar2,0,0xffffffff);
  local_4 = 0;
  local_24 = 0;
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x40))();
  if (0 < iVar3) {
    do {
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b151c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4 - 1;
      if (-local_14 - 1U <= uVar4) {
        FUN_005fe5fb();
      }
      if (uVar4 != 0) {
        iVar3 = local_14 + uVar4;
        cVar1 = FUN_00401940(iVar3,0);
        if (cVar1 != '\0') {
          puVar6 = (undefined4 *)&DAT_006b151c;
          puVar8 = (undefined4 *)(local_14 + local_18);
          for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar8 = (undefined4 *)((int)puVar8 + 1);
          }
          *(undefined1 *)(local_18 + iVar3) = 0;
          local_14 = iVar3;
        }
      }
      local_24 = local_24 + 1;
      iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x40))();
    } while (local_24 < iVar3);
  }
  *param_2 = local_1c[0];
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != 0) {
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      *(char *)(local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_2;
}

