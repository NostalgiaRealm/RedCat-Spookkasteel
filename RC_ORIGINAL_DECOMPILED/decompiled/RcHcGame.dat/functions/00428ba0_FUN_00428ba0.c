/*
 * FUN_00428ba0 at 00428ba0
 * undefined FUN_00428ba0(void)
 * Address ranges: 00428ba0-00429127
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00428ba0(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined1 *puVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622e3f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 == 0) {
    local_2c[0] = (undefined1)param_1;
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      puVar9 = (undefined4 *)&DAT_006b3f70;
      puVar11 = local_28;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        puVar11 = (undefined4 *)((int)puVar11 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Entity____0_0068f604,
                                  s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0x1ab,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = FUN_005a1d60();
  puVar4 = *(undefined1 **)(iVar3 + 4);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  FUN_005033f0(auStack_3c,*(undefined4 *)(param_2 + 0xc),puVar4);
  local_4 = 1;
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 1:
    iVar3 = *(int *)(param_2 + 0x2c);
    if ((iVar3 == 1) || (iVar3 == 2)) {
      pvVar5 = operator_new(0x1e0);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (pvVar5 != (void *)0x0) {
        uVar6 = FUN_004176c0(auStack_3c,param_2,param_1);
        goto LAB_00428d52;
      }
    }
    else {
      if (iVar3 != 3) {
LAB_00428e31:
        uVar6 = FUN_005ae390(auStack_1c,s_Unknown_enemy_subtype_in_Entity___0068fe00,iVar3);
        local_4 = CONCAT31(local_4._1_3_,0x10);
        pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,
                                      0x1ea,uVar6);
        (*pcVar2)();
        if (iStack_18 != 0) {
          cVar1 = *(char *)(iStack_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)(iStack_18 + -1));
          }
          else {
            *(char *)(iStack_18 + -1) = cVar1 + -1;
          }
        }
LAB_004290ef:
        if (iStack_38 != 0) {
          cVar1 = *(char *)(iStack_38 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0(iStack_38 + -1);
          }
          else {
            *(char *)(iStack_38 + -1) = cVar1 + -1;
          }
        }
        ExceptionList = pvStack_c;
        return 0;
      }
      pvVar5 = operator_new(500);
      local_4 = CONCAT31(local_4._1_3_,3);
      if (pvVar5 != (void *)0x0) {
        uVar6 = FUN_00413570(auStack_3c,param_2,param_1);
        goto LAB_00428d52;
      }
    }
    goto LAB_00428d50;
  case 2:
    iVar3 = *(int *)(param_2 + 0x2c);
    if (iVar3 != 1) {
      if ((iVar3 != 2) && (iVar3 != 3)) goto LAB_00428e31;
      pvVar5 = operator_new(0x1e8);
      local_4 = CONCAT31(local_4._1_3_,5);
      if (pvVar5 == (void *)0x0) goto LAB_00428db4;
      uVar6 = FUN_00410a80(auStack_3c,param_2,param_1);
      break;
    }
    pvVar5 = operator_new(0x1d4);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_00415680(auStack_3c,param_2,param_1);
      goto LAB_00428d52;
    }
LAB_00428d50:
    uVar6 = 0;
LAB_00428d52:
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    ExceptionList = pvStack_c;
    return uVar6;
  case 3:
    iVar3 = *(int *)(param_2 + 0x2c);
    if (iVar3 == 1) {
      pvVar5 = operator_new(0x1d4);
      local_4 = CONCAT31(local_4._1_3_,6);
      if (pvVar5 == (void *)0x0) goto LAB_00428db4;
      uVar6 = FUN_004161f0(auStack_3c,param_2,param_1);
    }
    else {
      if ((iVar3 != 2) && (iVar3 != 3)) goto LAB_00428e31;
      pvVar5 = operator_new(0x1e8);
      local_4 = CONCAT31(local_4._1_3_,7);
      if (pvVar5 == (void *)0x0) goto LAB_00428db4;
      uVar6 = FUN_00412000(auStack_3c,param_2,param_1);
    }
    break;
  case 4:
    pvVar5 = operator_new(0x1d4);
    local_4 = CONCAT31(local_4._1_3_,8);
    if (pvVar5 == (void *)0x0) {
LAB_00428db4:
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00418d50(auStack_3c,param_2,param_1);
    }
    break;
  case 5:
    pvVar5 = operator_new(0x1e8);
    local_4 = CONCAT31(local_4._1_3_,9);
    if (pvVar5 == (void *)0x0) goto LAB_00428db4;
    uVar6 = FUN_0040fba0(auStack_3c,param_2,param_1);
    break;
  case 6:
    pvVar5 = operator_new(0x1ec);
    local_4 = CONCAT31(local_4._1_3_,10);
    if (pvVar5 == (void *)0x0) goto LAB_00428db4;
    uVar6 = FUN_00414a90(auStack_3c,param_2,param_1);
    break;
  case 7:
    pvVar5 = operator_new(0x1e8);
    local_4 = CONCAT31(local_4._1_3_,0xb);
    if (pvVar5 == (void *)0x0) goto LAB_00428db4;
    uVar6 = FUN_0041f770(auStack_3c,param_2,param_1);
    break;
  case 8:
    pvVar5 = operator_new(0x1ec);
    local_4 = CONCAT31(local_4._1_3_,0xc);
    if (pvVar5 == (void *)0x0) goto LAB_00428db4;
    uVar6 = FUN_00419570(auStack_3c,param_2,param_1);
    break;
  case 9:
    pvVar5 = operator_new(0x1e8);
    local_4 = CONCAT31(local_4._1_3_,0xd);
    if (pvVar5 == (void *)0x0) {
LAB_0042903e:
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_00420240(auStack_3c,param_2,param_1);
    }
    goto LAB_00429040;
  case 10:
    pvVar5 = operator_new(0x1d4);
    local_4 = CONCAT31(local_4._1_3_,0xe);
    if (pvVar5 == (void *)0x0) goto LAB_0042903e;
    uVar6 = FUN_0040d660(auStack_3c,param_2,param_1);
LAB_00429040:
    if (iStack_38 == 0) {
      ExceptionList = pvStack_c;
      return uVar6;
    }
    cVar1 = *(char *)(iStack_38 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_38 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return uVar6;
    }
    goto LAB_0042906d;
  default:
    uVar6 = FUN_005ae390(local_2c,s_Unknown_moving_enemy_type_in_Ent_0068fdd4,
                         *(undefined4 *)(param_2 + 0x28));
    local_4 = CONCAT31(local_4._1_3_,0xf);
    pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcMovi_0068fda8,0x1e5
                                  ,uVar6);
    (*pcVar2)();
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    goto LAB_004290ef;
  }
  if (iStack_38 != 0) {
    cVar1 = *(char *)(iStack_38 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iStack_38 + -1) = cVar1 + -1;
      ExceptionList = pvStack_c;
      return uVar6;
    }
LAB_0042906d:
    FUN_005fe5f0(iStack_38 + -1);
  }
  ExceptionList = pvStack_c;
  return uVar6;
}

