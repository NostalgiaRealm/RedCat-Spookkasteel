/*
 * FUN_0042ad00 at 0042ad00
 * undefined FUN_0042ad00(void)
 * Address ranges: 0042ad00-0042b00e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0042ad00(int param_1)

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
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006230ff;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 == 0) {
    local_1c[0] = (undefined1)param_1;
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
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_18 = *puVar9;
        puVar9 = puVar9 + 1;
        local_18 = local_18 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_18 = *(undefined1 *)puVar9;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
        local_18 = (undefined4 *)((int)local_18 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Entity_0068ffb8,s_D__Work_RCHorror_RCSource_RcStan_0068ff88,
                                  0xc0,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar3 = FUN_005a1d60();
  puVar4 = *(undefined1 **)(iVar3 + 4);
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &DAT_0064a3b4;
  }
  FUN_005033f0(auStack_3c,*(undefined4 *)(param_1 + 0xc),puVar4);
  local_4 = 1;
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 1:
    pvVar5 = operator_new(0x230);
    local_4 = CONCAT31(local_4._1_3_,2);
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_0040ef40(auStack_3c,param_1);
      goto LAB_0042ae2c;
    }
    break;
  case 2:
    pvVar5 = operator_new(0x228);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_0040e110(auStack_3c,param_1);
      goto LAB_0042ae2c;
    }
    break;
  case 3:
    pvVar5 = operator_new(0x238);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_0040b880(auStack_3c,param_1);
      goto LAB_0042ae2c;
    }
    break;
  case 4:
    pvVar5 = operator_new(0x254);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (pvVar5 != (void *)0x0) {
      uVar6 = FUN_0041d6f0(auStack_3c,param_1);
      goto LAB_0042ae2c;
    }
    break;
  case 5:
    pvVar5 = operator_new(0x244);
    local_4 = CONCAT31(local_4._1_3_,6);
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0041b600(auStack_3c,param_1);
    }
    if (iStack_38 != 0) {
      cVar1 = *(char *)(iStack_38 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_38 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return uVar6;
      }
      FUN_005fe5f0(iStack_38 + -1);
    }
    ExceptionList = pvStack_c;
    return uVar6;
  default:
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    auStack_2c[0] = (undefined1)param_1;
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = CONCAT31(local_4._1_3_,7);
    pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcStan_0068ff88,0xd2,
                                  auStack_2c);
    (*pcVar2)();
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_28 + -1));
      }
      else {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
      }
    }
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
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
  uVar6 = 0;
LAB_0042ae2c:
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return uVar6;
}

