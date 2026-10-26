/*
 * FUN_00564d50 at 00564d50
 * undefined FUN_00564d50(void)
 * Address ranges: 00564d50-00564fce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_00564d50(int param_1,undefined1 *param_2)

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
  undefined4 *local_28;
  int local_24;
  undefined1 local_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ff60;
  pvStack_c = ExceptionList;
  local_2c[0] = param_2._0_1_;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  if (*(char *)(param_1 + 0x123) != '\0') {
    uVar4 = 0xffffffff;
    pcVar7 = s_Glide_006a3bac;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Glide_006a3bac,~uVar4 - 1);
    goto LAB_00564e74;
  }
  if (*(char *)(param_1 + 0x124) == '\0') {
    if (*(char *)(param_1 + 0x121) == '\0') {
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_0069e12c;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar2 = FUN_00401940(uVar4,1);
      if (cVar2 == '\0') goto LAB_00564e74;
      puVar6 = (undefined4 *)&DAT_0069e12c;
      goto LAB_00564e58;
    }
    uVar4 = 0xffffffff;
    pcVar7 = (char *)&DAT_006a3ba4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 == '\0') goto LAB_00564e74;
    puVar6 = &DAT_006a3ba4;
    puVar8 = local_28;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  else {
    uVar4 = 0xffffffff;
    pcVar7 = (char *)&DAT_006a3178;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar2 = FUN_00401940(uVar4,1);
    if (cVar2 == '\0') goto LAB_00564e74;
    puVar6 = &DAT_006a3178;
LAB_00564e58:
    puVar8 = local_28;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  FUN_00404190(uVar4);
LAB_00564e74:
  if (*(char *)(param_1 + 0x122) != '\0') {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006a3184;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_00484c30(&DAT_006a3184,~uVar4 - 1);
  }
  if (*(char *)(param_1 + 0x120) != '\0') {
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006a3ba0;
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
        puVar6 = (undefined4 *)&DAT_006a3ba0;
        puVar8 = (undefined4 *)(local_24 + (int)local_28);
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
  }
  uVar3 = FUN_005ae390(local_1c,s___dx_d_006a3b98,*(undefined4 *)(param_1 + 0x40),
                       *(undefined4 *)(param_1 + 0x44));
  local_4._0_1_ = 1;
  FUN_0045db40(uVar3,0,0xffffffff);
  local_4 = (uint)local_4._1_3_ << 8;
  if (iStack_18 != 0) {
    cVar2 = *(char *)(iStack_18 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
    else {
      *(char *)(iStack_18 + -1) = cVar2 + -1;
    }
  }
  *param_2 = local_2c[0];
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_0040cc00(local_2c,0,0xffffffff);
  if (local_28 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_28 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((undefined1 *)((int)local_28 + -1));
    }
    else {
      *(char *)((int)local_28 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_2;
}

