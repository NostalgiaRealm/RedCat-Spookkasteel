/*
 * FUN_00431fb0 at 00431fb0
 * undefined FUN_00431fb0(void)
 * Address ranges: 00431fb0-00432414
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00431fb0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  float10 fVar10;
  int *piStack_64;
  int local_60;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [4];
  undefined4 *puStack_20;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_3;
  puStack_8 = &LAB_00623a50;
  pvStack_c = ExceptionList;
  local_48 = (undefined1 *)&local_60;
  local_60 = param_3;
  ExceptionList = &pvStack_c;
  if (param_3 != 0) {
    ExceptionList = &pvStack_c;
    *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + 1;
  }
  local_44 = (undefined1 *)&piStack_64;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  piStack_64 = param_1;
  FUN_00449760(&param_2);
  local_4._0_1_ = 1;
  FUN_004d8ea0();
  local_44 = (undefined1 *)&local_60;
  local_60 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  }
  local_48 = (undefined1 *)&piStack_64;
  local_4._0_1_ = 3;
  FUN_00449760(&param_2);
  local_4 = CONCAT31(local_4._1_3_,1);
  (**(code **)(param_1[0x96] + 0xc))();
  if (iVar1 != 0) {
    if (param_1[0x7c] == 0) {
      auStack_24[0] = (undefined1)local_4;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      pvStack_c._0_1_ = 4;
      pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s___AdamSource_AdamPlayer_h_0068f988,0x15b,auStack_24);
      (*pcVar3)();
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
      FUN_004040a0(1);
    }
    FUN_0060a6f2(param_1[0x7c],0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                 &CRcPlayerProperties::RTTI_Type_Descriptor,0);
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x48))(&uStack_30);
    local_48 = (undefined1 *)*puVar4;
    local_44 = (undefined1 *)puVar4[1];
    uStack_40 = puVar4[2];
    puVar4 = (undefined4 *)FUN_004dbe60(auStack_24,&uStack_3c);
    uStack_30 = *puVar4;
    fStack_2c = (float)puVar4[1];
    local_44 = (undefined1 *)((float)local_44 - fStack_2c);
    uStack_28 = puVar4[2];
    fVar10 = (float10)FUN_004d6960();
    fVar10 = (float10)FUN_005b1840((float)fVar10);
    FUN_0043b030(&local_48,(float)fVar10);
    FUN_00439e30(100);
    if (param_1[0x94] != 0) {
      uVar5 = FUN_005ae390(auStack_24,s_Adding_GO_to_a_NewSubLevel_00690440);
      pvStack_c._0_1_ = 5;
      FUN_005aff00(uVar5);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
      FUN_004040a0(1);
      FUN_004f41c0(param_1[0x94]);
      FUN_00458b00();
    }
    if (param_1[0x95] != 0) {
      uVar5 = FUN_005ae390(auStack_24,s_Adding_Actor_GO_to_a_NewSubLevel_0069041c);
      pvStack_c._0_1_ = 7;
      FUN_005aff00(uVar5);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
      FUN_004040a0(1);
      puVar4 = (undefined4 *)PTR_DAT_00690130;
      auStack_24[0] = (undefined1)local_4;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = (char *)puVar4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar2 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar2 = FUN_00401940(uVar7,1);
      if (cVar2 != '\0') {
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puStack_20 = *puVar4;
          puVar4 = puVar4 + 1;
          puStack_20 = puStack_20 + 1;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined1 *)puStack_20 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puStack_20 = (undefined4 *)((int)puStack_20 + 1);
        }
        FUN_00404190(uVar7);
      }
      pvStack_c._0_1_ = 8;
      FUN_0042e240(auStack_24,1,0x3f800000);
      pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
      FUN_004040a0(1);
      FUN_004f41c0(param_1[0x95]);
    }
    if (param_1[0xcc] != 0) {
      FUN_004f41c0(param_1[0xcc]);
    }
    if (param_1[0xe4] != 0) {
      FUN_004f41c0(param_1[0xe4]);
    }
    if (param_1[0xcd] != 0) {
      FUN_004f41c0(param_1[0xcd]);
    }
    if (param_1[0xe6] != 0) {
      FUN_004f41c0(param_1[0xe6]);
    }
    if (param_1[0xce] == 0) {
      if (param_1[0x7d] == 0) {
        FUN_00409810(&DAT_006b3f70,&stack0xffffffaf);
        pvStack_c._0_1_ = 0xe;
        pcVar3 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,s___AdamSource_AdamPlayer_h_0068f988,
                                      0x161,auStack_24);
        (*pcVar3)();
        pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
        FUN_004040a0(1);
      }
      iVar6 = FUN_0060a6f2(param_1[0x7d],0,&CAdamHUD::RTTI_Type_Descriptor,
                           &CRcHUD::RTTI_Type_Descriptor,0);
      param_1[0xce] = iVar6;
      if (iVar6 == 0) {
        auStack_24[0] = (undefined1)local_4;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar9 = s_RcPlayer_HUD_not_created_006903c0;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(s_RcPlayer_HUD_not_created_006903c0,~uVar7 - 1);
        pvStack_c._0_1_ = 0xf;
        pcVar3 = (code *)FUN_005a07f0(s_m_HUD____NULL_006903b0,
                                      s_D__Work_RCHorror_RCSource_RCPlay_00690328,0x1df,auStack_24);
        (*pcVar3)();
        pvStack_c = (void *)CONCAT31(pvStack_c._1_3_,1);
        FUN_004040a0(1);
      }
    }
  }
  pvStack_c = (void *)((uint)pvStack_c & 0xffffff00);
  if (local_4 != 0) {
    FUN_004098d0();
    local_4 = 0;
  }
  pvStack_c = (void *)0xffffffff;
  if ((iVar1 != 0) &&
     (iVar6 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar6, iVar6 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_14;
  return;
}

