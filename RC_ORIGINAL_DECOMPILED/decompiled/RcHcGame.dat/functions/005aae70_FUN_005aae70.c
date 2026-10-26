/*
 * FUN_005aae70 at 005aae70
 * undefined FUN_005aae70(void)
 * Address ranges: 005aae70-005ab1c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005aae70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00645b18;
  pvStack_c = ExceptionList;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  ExceptionList = &pvStack_c;
  if (param_1 == (undefined4 *)0x0) {
    local_2c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    local_28 = (undefined4 *)0x0;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &pvStack_c;
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s__a_Source____0_006a8c4c,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8c5c,0x28,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
  }
  if (param_2 == 0) {
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = local_28;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)local_28 + uVar4) = 0;
      local_24 = uVar4;
    }
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s__a_Target____0_006a8c3c,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a8c5c,0x29,local_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
  }
  if (param_4 == (undefined4 *)0x0) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      puVar8 = puStack_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
      *(undefined1 *)((int)puStack_18 + uVar4) = 0;
      uStack_14 = uVar4;
    }
    local_4 = 2;
    pcVar2 = (code *)FUN_005a07f0(s__a_Out____0_006a8c30,s_D__Work_RCHorror_AdamSource_Davi_006a8c5c
                                  ,0x2a,auStack_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_005b2fe0(&uStack_50);
  iVar3 = FUN_005b2ec0(0x3d4ccccd);
  if (iVar3 != 0) {
    uStack_4c = 0xbf800000;
  }
  FUN_005b30c0();
  FUN_005b2f20();
  param_4[2] = uStack_50;
  param_4[5] = uStack_4c;
  param_4[8] = uStack_48;
  uStack_5c = 0;
  uStack_58 = 0x3f800000;
  uStack_54 = 0;
  FUN_005b2e60(&uStack_44);
  FUN_005b2f20();
  iVar3 = FUN_005b2ec0(0x3d4ccccd);
  if (iVar3 != 0) {
    uStack_5c = 0x3f800000;
    uStack_58 = 0;
    uStack_54 = 0;
    FUN_005b2e60(&uStack_44);
    FUN_005b2f20();
  }
  *param_4 = uStack_44;
  param_4[6] = uStack_3c;
  param_4[3] = uStack_40;
  FUN_005b2e60(&uStack_5c);
  FUN_005b2f20();
  param_4[1] = uStack_5c;
  param_4[4] = uStack_58;
  param_4[7] = uStack_54;
  param_4[9] = *param_1;
  param_4[10] = param_1[1];
  param_4[0xb] = param_1[2];
  ExceptionList = pvStack_c;
  return 1;
}

