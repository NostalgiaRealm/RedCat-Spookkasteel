/*
 * FUN_004f7790 at 004f7790
 * undefined FUN_004f7790(void)
 * Address ranges: 004f7790-004f80e0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f7790(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  DWORD DVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  int iVar13;
  char *pcVar14;
  float10 fVar15;
  undefined1 local_a1;
  uint uStack_a0;
  int local_9c;
  int iStack_98;
  undefined1 local_94 [18];
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [20];
  undefined1 local_4c [16];
  undefined **local_3c;
  DWORD local_28;
  undefined **local_24;
  DWORD local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634e83;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x471);
  local_4 = 0;
  local_4c[0] = local_a1;
  FUN_004040a0();
  uVar11 = 0xffffffff;
  pcVar14 = s_CAdamSubLevel__PreloadDataAfterG_0069cc2c;
  do {
    if (uVar11 == 0) break;
    uVar11 = uVar11 - 1;
    cVar2 = *pcVar14;
    pcVar14 = pcVar14 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_CAdamSubLevel__PreloadDataAfterG_0069cc2c,~uVar11 - 1);
  local_4._0_1_ = 1;
  FUN_005ab4a0();
  local_4._0_1_ = 2;
  local_10 = timeGetTime();
  local_24 = &PTR_FUN_0064e854;
  FUN_00442bf0(DAT_006b9940,local_4c);
  FUN_0051c180();
  FUN_00515ff0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    iVar3 = FUN_0049f950();
    puVar4 = *(undefined1 **)(iVar3 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_94,s_CAdamLoadUpdater_>>__s_00695190,puVar4);
    local_4._0_1_ = 3;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 2;
    FUN_004040a0();
  }
  local_4._0_1_ = 5;
  FUN_004040a0();
  FUN_00558b70();
  iVar3 = FUN_004337e0();
  if (iVar3 == 0) {
    FUN_00515ff0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      FUN_005afe30();
    }
    iVar3 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      iVar3 = FUN_004bc480();
    }
    if (*(int *)(iVar3 + 0x3a4) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_a1);
      local_4._0_1_ = 0xf;
      pcVar8 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,
                                    0x130,local_70);
      (*pcVar8)();
      local_4._0_1_ = 5;
      FUN_004040a0();
    }
    iVar7 = 0;
    iVar3 = FUN_00442d80();
    if (0 < iVar3) {
      do {
        FUN_004f70e0();
        iVar7 = iVar7 + 1;
        iVar3 = FUN_00442d80();
      } while (iVar7 < iVar3);
    }
  }
  else {
    local_60[0] = local_a1;
    FUN_004040a0();
    uVar11 = 0xffffffff;
    pcVar14 = s_CAdamSubLevel__PreloadDataAfterG_0069cbd4;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamSubLevel__PreloadDataAfterG_0069cbd4,~uVar11 - 1);
    local_4._0_1_ = 6;
    FUN_005ab4a0();
    local_4._0_1_ = 7;
    local_28 = timeGetTime();
    local_3c = &PTR_FUN_0064e854;
    FUN_00442bf0(DAT_006b9940,local_60);
    FUN_0051c180();
    FUN_00515ff0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      iVar3 = FUN_0049f950();
      puVar4 = *(undefined1 **)(iVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_94,s_CAdamLoadUpdater_>>__s_00695190,puVar4);
      local_4._0_1_ = 8;
      FUN_005aff00(uVar5);
      local_4._0_1_ = 7;
      FUN_004040a0();
    }
    local_4 = CONCAT31(local_4._1_3_,10);
    FUN_004040a0();
    FUN_00515ff0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      FUN_005afe30();
    }
    local_70[0] = local_a1;
    FUN_004040a0();
    uVar11 = 0xffffffff;
    pcVar14 = &DAT_0069cba4;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar2 = *pcVar14;
      pcVar14 = pcVar14 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_0069cba4,~uVar11 - 1);
    local_4._0_1_ = 0xb;
    FUN_004f70e0();
    local_4._0_1_ = 10;
    FUN_004040a0();
    local_3c = &PTR_FUN_0064e854;
    local_4._0_1_ = 0xc;
    FUN_00515ff0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      DVar6 = timeGetTime();
      iVar3 = FUN_0049f950();
      puVar4 = &DAT_0064a3b4;
      if (*(undefined1 **)(iVar3 + 4) != (undefined1 *)0x0) {
        puVar4 = *(undefined1 **)(iVar3 + 4);
      }
      uVar5 = FUN_00484d70(DVar6,local_28);
      fVar15 = (float10)FUN_00409e30(uVar5);
      uVar5 = FUN_005ae390(local_94,s_CAdamLoadUpdater____s__took__f_s_006951fc,puVar4,
                           (double)fVar15);
      local_4._0_1_ = 0xd;
      FUN_005aff00(uVar5);
      local_4._0_1_ = 0xc;
      FUN_004040a0();
    }
    FUN_004c4540();
    FUN_0051c180();
    FUN_00515ff0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      iVar3 = FUN_0049f950();
      puVar4 = *(undefined1 **)(iVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_94,s_CAdamLoadUpdater_<<__s_006951e4,puVar4);
      local_4._0_1_ = 0xe;
      FUN_005aff00(uVar5);
      local_4._0_1_ = 0xc;
      FUN_004040a0();
    }
    local_4._0_1_ = 5;
    FUN_005ab4d0();
  }
  local_80 = local_a1;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_4 = CONCAT31(local_4._1_3_,0x10);
  iVar3 = 0;
  while( true ) {
    iVar7 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar7 = FUN_0055b280();
    }
    if (*(int *)(iVar7 + 0xf8) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_a1);
      local_4._0_1_ = 0x11;
      pcVar8 = (code *)FUN_005a07f0(s_m_ActorDefMgr_00694c9c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x182);
      (*pcVar8)();
      local_4 = CONCAT31(local_4._1_3_,0x10);
      FUN_004040a0();
    }
    iVar7 = FUN_004a01d0();
    if (iVar7 <= iVar3) break;
    iVar7 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      iVar7 = FUN_0055b280();
    }
    if (*(int *)(iVar7 + 0xf8) == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_82);
      local_4._0_1_ = 0x12;
      pcVar8 = (code *)FUN_005a07f0(s_m_ActorDefMgr_00694c9c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x182);
      (*pcVar8)();
      local_4 = CONCAT31(local_4._1_3_,0x10);
      FUN_004040a0();
    }
    piVar9 = (int *)FUN_004a01f0(&uStack_a0,iVar3);
    local_4._0_1_ = 0x13;
    if (*piVar9 == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_81);
      local_4._0_1_ = 0x14;
      pcVar8 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar8)();
      local_4._0_1_ = 0x13;
      FUN_004040a0();
    }
    uVar5 = FUN_0059bd20();
    FUN_00442bf0(local_78,uVar5);
    local_4 = CONCAT31(local_4._1_3_,0x10);
    FUN_0057d310();
    iVar3 = iVar3 + 1;
  }
  iStack_98 = 0;
  for (uStack_a0 = 0;
      (iVar3 = local_78, local_7c != 0 && (uStack_a0 < (uint)(local_78 - local_7c >> 4)));
      uStack_a0 = uStack_a0 + 1) {
    iVar3 = FUN_004a1c80();
    if (0 < *(int *)(iVar3 + 100)) {
      iVar13 = 0;
      iVar7 = 1;
      do {
        FUN_00515ff0();
        iVar10 = FUN_004337e0();
        if (iVar10 != 0) {
          puVar4 = *(undefined1 **)(*(int *)(*(int *)(iVar3 + 0x150) + iVar13) + 0x18);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          uVar5 = FUN_005ae390(local_94,s_Preload_actor_particletype__d____0069cb38,iVar7,puVar4);
          local_4._0_1_ = 0x15;
          FUN_005aff00(uVar5);
          local_4 = CONCAT31(local_4._1_3_,0x10);
          FUN_004040a0();
        }
        cVar2 = FUN_004f6e60();
        if (cVar2 == '\0') {
          FUN_005ae390(local_60,s_ParticleType_d_0069550c);
          local_4._0_1_ = 0x16;
          puVar4 = *(undefined1 **)(local_7c + 4 + iStack_98);
          puVar12 = &DAT_0064a3b4;
          if (puVar4 != (undefined1 *)0x0) {
            puVar12 = puVar4;
          }
          puVar4 = *(undefined1 **)(*(int *)(*(int *)(iVar3 + 0x150) + iVar13) + 0x18);
          if (puVar4 == (undefined1 *)0x0) {
            puVar4 = &DAT_0064a3b4;
          }
          FUN_005ae390(local_70,s_PreLoadActorByFileName___s___fai_0069cae8,puVar4,puVar12);
          local_4._0_1_ = 0x17;
          FUN_004fc400();
          local_4._0_1_ = 0x16;
          FUN_004040a0();
          local_4 = CONCAT31(local_4._1_3_,0x10);
          FUN_004040a0();
        }
        FUN_004a19b0();
        if (local_9c != 0) {
          iVar10 = *(int *)(local_9c + 0x14) + -1;
          *(int *)(local_9c + 0x14) = iVar10;
          if (iVar10 == 0) {
            FUN_005abfc0();
          }
          local_9c = 0;
        }
        iVar13 = iVar13 + 4;
        bVar1 = iVar7 < *(int *)(iVar3 + 100);
        iVar7 = iVar7 + 1;
      } while (bVar1);
    }
    iStack_98 = iStack_98 + 0x10;
  }
  local_4._0_1_ = 5;
  for (iVar7 = local_7c; iVar7 != iVar3; iVar7 = iVar7 + 0x10) {
    FUN_004040a0();
  }
  FUN_005fe5f0();
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_24 = &PTR_FUN_0064e854;
  local_4._0_1_ = 0x18;
  FUN_00515ff0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    DVar6 = timeGetTime();
    iVar3 = FUN_0049f950();
    puVar4 = &DAT_0064a3b4;
    if (*(undefined1 **)(iVar3 + 4) != (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(iVar3 + 4);
    }
    uVar5 = FUN_00484d70(DVar6,local_10);
    fVar15 = (float10)FUN_00409e30(uVar5);
    uVar5 = FUN_005ae390(local_94,s_CAdamLoadUpdater____s__took__f_s_006951fc,puVar4,(double)fVar15)
    ;
    local_4._0_1_ = 0x19;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 0x18;
    FUN_004040a0();
  }
  FUN_004c4540();
  FUN_0051c180();
  FUN_00515ff0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    iVar3 = FUN_0049f950();
    puVar4 = *(undefined1 **)(iVar3 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_94,s_CAdamLoadUpdater_<<__s_006951e4,puVar4);
    local_4._0_1_ = 0x1a;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 0x18;
    FUN_004040a0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005ab4d0();
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return 1;
}

