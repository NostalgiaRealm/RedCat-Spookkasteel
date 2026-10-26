/*
 * FUN_0052a800 at 0052a800
 * undefined FUN_0052a800(void)
 * Address ranges: 0052a800-0052ab1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0052a800(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639d30;
  pvStack_c = ExceptionList;
  if ((param_2 < 1) || (ExceptionList = &pvStack_c, 100 < param_2)) {
    local_2c[0] = (undefined1)param_3;
    ExceptionList = &pvStack_c;
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
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_LevelNr_>__MIN_LEVEL_NR____a_L_006a0248,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x378,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((param_3 < 1) || (100 < param_3)) {
    local_2c[0] = (undefined1)param_3;
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
    pcVar3 = (code *)FUN_005a07f0(s_a_SubLevelNr_>__MIN_SUB_LEVEL_NR_006a0280,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x379,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((param_4 < 1) || (0x1a < param_4)) {
    local_2c[0] = (undefined1)param_3;
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
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_a_SubSubLevelNr_>__MIN_SUB_SUB_L_006a03b4,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x37a,local_2c);
    (*pcVar3)();
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
  if (param_4 == 1) {
    FUN_005ae390(param_1,s_SubLevel_d__d_006a0320,param_2,param_3);
  }
  else {
    cVar1 = (char)param_4 + '`';
    if ((cVar1 < 'b') || ('z' < cVar1)) {
      auStack_1c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar4 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar2 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      uVar4 = ~uVar4 - 1;
      cVar2 = FUN_00401940(uVar4,1);
      if (cVar2 != '\0') {
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
      local_4 = 3;
      pcVar3 = (code *)FUN_005a07f0(s_subSubLevelChar_>___b_____subSub_006a0380,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069fb00,0x382,auStack_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_005ae390(param_1,s_SubLevel_d__d_c_006a0370,param_2,param_3,(int)cVar1);
  }
  ExceptionList = pvStack_c;
  return param_1;
}

