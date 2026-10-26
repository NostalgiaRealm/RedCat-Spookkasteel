/*
 * FUN_005a3150 at 005a3150
 * undefined FUN_005a3150(void)
 * Address ranges: 005a3150-005a3314
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005a3150(undefined1 *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_2c [4];
  int iStack_28;
  int local_24;
  undefined1 local_1c [4];
  int local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006451e0;
  pvStack_c = ExceptionList;
  local_2c[0] = (undefined1)param_2;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  uVar3 = FUN_005a2f50(local_1c);
  local_4._0_1_ = 1;
  FUN_0040cc00(uVar3,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != 0) {
    cVar2 = *(char *)(local_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(local_18 + -1));
    }
    else {
      *(char *)(local_18 + -1) = cVar2 + -1;
    }
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_006a1548;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar4 = ~uVar4 - 1;
  if (-local_24 - 1U <= uVar4) {
    FUN_005fe5fb();
  }
  if (uVar4 != 0) {
    iVar1 = local_24 + uVar4;
    cVar2 = FUN_00401940(iVar1,0);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006a1548;
      puVar8 = (undefined4 *)(iStack_28 + local_24);
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
      *(undefined1 *)(iStack_28 + iVar1) = 0;
      local_24 = iVar1;
    }
  }
  uVar4 = 0xffffffff;
  if (*(uint *)(param_2 + 8) != 0xffffffff) {
    uVar4 = *(uint *)(param_2 + 8);
  }
  if (-local_24 - 1U <= uVar4) {
    FUN_005fe5fb();
  }
  if (uVar4 != 0) {
    iVar1 = local_24 + uVar4;
    cVar2 = FUN_00401940(iVar1,0);
    if (cVar2 != '\0') {
      puVar6 = *(undefined4 **)(param_2 + 4);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar8 = (undefined4 *)(iStack_28 + local_24);
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
      FUN_00404190(iVar1);
    }
  }
  *param_1 = local_2c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_0040cc00(local_2c,0,0xffffffff);
  if (iStack_28 != 0) {
    cVar2 = *(char *)(iStack_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(iStack_28 + -1);
    }
    else {
      *(char *)(iStack_28 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

