/*
 * FUN_0059d5d0 at 0059d5d0
 * undefined FUN_0059d5d0(void)
 * Address ranges: 0059d5d0-0059db3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0059d5d0(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  float10 extraout_ST0;
  float fStack_90;
  uint local_8c;
  int iStack_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int iStack_74;
  undefined1 local_70 [4];
  char *local_6c;
  uint uStack_68;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  void *pvStack_1c;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_006449f6;
  pvStack_c = ExceptionList;
  local_8c = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  iVar2 = FUN_005995c0();
  iVar3 = FUN_005995c0();
  if (iVar2 != iVar3) {
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar12 = s_Two_way_points_with_different_Su_006a74c4;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar1 = FUN_00401940(uVar9,1);
    if (cVar1 != '\0') {
      pcVar12 = s_Two_way_points_with_different_Su_006a74c4;
      pcVar13 = local_6c;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
        pcVar12 = pcVar12 + 4;
        pcVar13 = pcVar13 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar13 = *pcVar12;
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar13 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_a_PointA_>GetSubSystemId______a__006a7488,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a72cc,0x196,local_70);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  puVar5 = (undefined4 *)FUN_00597fb0();
  uStack_50 = *puVar5;
  uStack_4c = puVar5[1];
  uStack_48 = puVar5[2];
  puVar5 = (undefined4 *)FUN_00597fb0();
  uStack_44 = *puVar5;
  uStack_40 = puVar5[1];
  uStack_3c = puVar5[2];
  FUN_005b30a0();
  iVar2 = __ftol();
  if ((float10)iVar2 * (float10)param_4 < extraout_ST0) {
    iVar2 = iVar2 + 1;
  }
  iStack_88 = iVar2;
  FUN_005b2fe0(auStack_18);
  uStack_80 = param_2;
  iStack_74 = 1;
  if (1 < iVar2) {
    fStack_90 = (float)iStack_88;
    do {
      FUN_005b3020((float)iStack_74 / fStack_90,&uStack_38);
      uVar11 = 0;
      iVar3 = *(int *)(*(int *)(local_78 + 0x18) + 4);
      if (iVar3 == 0) {
        iStack_84 = 0;
      }
      else {
        iStack_84 = *(int *)(*(int *)(local_78 + 0x18) + 8) - iVar3 >> 2;
      }
      FUN_0059b1d0(&iStack_84);
      local_4._0_1_ = 2;
      pvStack_1c = operator_new(0xac);
      local_4._0_1_ = 3;
      if (pvStack_1c != (void *)0x0) {
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006a7484;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        uVar9 = ~uVar9 - 1;
        cVar1 = FUN_00401940(uVar9,1);
        if (cVar1 != '\0') {
          pcVar12 = &DAT_006a7484;
          pcVar13 = local_6c;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
            pcVar12 = pcVar12 + 4;
            pcVar13 = pcVar13 + 4;
          }
          for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar13 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            pcVar13 = pcVar13 + 1;
          }
          local_6c[uVar9] = '\0';
          uStack_68 = uVar9;
        }
        local_8c = local_8c | 1;
        local_4 = CONCAT31(local_4._1_3_,4);
        if (param_1 == 0) {
          FUN_004040a0(0);
          uVar9 = 0xffffffff;
          pcVar12 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4 = 5;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        auStack_2c);
          (*pcVar4)();
          local_4 = CONCAT31(local_4._1_3_,4);
          FUN_004040a0(1);
        }
        if (*(int *)(param_1 + 0x5c) == 0) {
          FUN_004040a0(0);
          uVar9 = 0xffffffff;
          pcVar12 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4 = 6;
          pcVar4 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                        s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,auStack_60);
          (*pcVar4)();
          local_4 = CONCAT31(local_4._1_3_,4);
          FUN_004040a0(1);
        }
        uVar11 = FUN_00597c00(*(undefined4 *)(param_1 + 0x5c),uStack_38,uStack_34,uStack_30,local_70
                              ,uStack_7c,local_78);
        iVar2 = iStack_88;
      }
      local_4 = 2;
      if ((local_8c & 1) != 0) {
        local_8c = local_8c & 0xfffffffe;
        FUN_004040a0(1);
      }
      uVar6 = FUN_005995c0();
      FUN_00599540(uVar6);
      FUN_0059c350(uVar11);
      FUN_00598c80(uStack_7c);
      local_4 = local_4 & 0xffffff00;
      uStack_80 = uVar11;
      FUN_005630e0();
      iStack_74 = iStack_74 + 1;
    } while (iStack_74 < iVar2);
  }
  puVar5 = (undefined4 *)FUN_00599450(&fStack_90);
  local_4._0_1_ = 8;
  FUN_00598c80(*puVar5);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005630e0();
  iVar7 = FUN_005195f0();
  iVar3 = *(int *)(iVar7 + 100);
  if (iVar3 == -0x80000000) {
    puVar8 = *(undefined1 **)(iVar7 + 0x18);
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar8);
    *(int *)(iVar7 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    FUN_00599450(&iStack_84);
    local_4._0_1_ = 9;
    FUN_00599450(&fStack_90);
    local_4._0_1_ = 10;
    uVar11 = FUN_0059b1e0();
    uVar11 = FUN_0059b1e0(uVar11);
    uVar11 = FUN_005ae390(auStack_60,s_Created__i_links_between_way_poi_006a7454,iVar2,uVar11);
    local_4 = CONCAT31(local_4._1_3_,0xb);
    FUN_005aff00(uVar11);
    if (iStack_5c != 0) {
      cVar1 = *(char *)(iStack_5c + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_5c + -1));
      }
      else {
        *(char *)(iStack_5c + -1) = cVar1 + -1;
      }
    }
    iStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    local_4._0_1_ = 9;
    FUN_005630e0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005630e0();
  }
  local_4 = 0xffffffff;
  if ((param_1 != 0) &&
     (iVar3 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return iVar2 + -1;
}

