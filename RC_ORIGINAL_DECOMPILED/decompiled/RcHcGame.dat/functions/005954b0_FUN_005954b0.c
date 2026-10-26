/*
 * FUN_005954b0 at 005954b0
 * undefined FUN_005954b0(void)
 * Address ranges: 005954b0-00595b27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bc08 slot 3 for .?AVCRcCursorActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bc08 slot 3 for
   .?AVCRcCursorActor@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_005954b0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_98;
  undefined1 local_91;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int aiStack_68 [2];
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [12];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [8];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined4 uStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  uStack_8._0_1_ = 0xf1;
  uStack_8._1_3_ = 0x643c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0049bcf0();
  if ((char)param_1[0x2a] != '\0') {
    cVar4 = FUN_00595230();
    if (cVar4 != '\0') {
      piVar5 = (int *)FUN_004042e0(&local_90);
      local_4 = 0;
      if (*piVar5 == 0) {
        FUN_00409810(&DAT_006b3f70,&local_91);
        local_4._0_1_ = 1;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      &local_78);
        (*pcVar6)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      local_4 = 0xffffffff;
      piVar5 = *(int **)(*piVar5 + 0x360);
      if (local_90 != 0) {
        FUN_004098d0();
        local_90 = 0;
      }
      if (piVar5 != (int *)0x0) {
        piVar7 = (int *)(**(code **)(*param_1 + 0x80))(auStack_1c);
        iStack_8c = *piVar7;
        iStack_88 = piVar7[1];
        iStack_84 = piVar7[2];
        uStack_ac = *piVar7;
        iStack_80 = piVar7[3];
        iStack_a4 = piVar7[2];
        iStack_a8 = piVar7[1];
        iStack_a0 = piVar7[3];
        if ((char)piVar5[0x2a] == '\0') {
          uStack_ac = DAT_006a2360;
          iStack_a8 = DAT_006a2364;
          iStack_a4 = DAT_006a2368;
          iStack_a0 = DAT_006a236c;
        }
        FUN_00595470();
        cVar4 = FUN_0059be60();
        if (cVar4 == '\0') {
          uStack_ac = DAT_006a2350;
          iStack_a8 = DAT_006a2354;
          iStack_a4 = DAT_006a2358;
          iStack_a0 = DAT_006a235c;
        }
        if (DAT_006c8de0 == 0) {
          FUN_0055b280();
        }
        piVar7 = (int *)FUN_00409f20(&uStack_6c);
        uStack_8 = 2;
        if (*piVar7 == 0) {
          FUN_00409810(&DAT_006b3f70,&stack0xffffff51);
          uStack_8._0_1_ = 3;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        &uStack_50);
          (*pcVar6)();
          uStack_8 = CONCAT31(uStack_8._1_3_,2);
          FUN_004040a0(1);
        }
        iVar1 = *piVar7;
        piVar7 = (int *)FUN_004042e0(aiStack_68);
        uStack_8._0_1_ = 4;
        if (*piVar7 == 0) {
          FUN_00409810(&DAT_006b3f70,&stack0xffffff52);
          uStack_8._0_1_ = 5;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        auStack_40);
          (*pcVar6)();
          uStack_8._0_1_ = 4;
          FUN_004040a0(1);
        }
        iVar2 = *piVar7;
        if (*(int *)(iVar2 + 0x5c) == 0) {
          FUN_00409810(&DAT_006b3f70,&stack0xffffff53);
          uStack_8._0_1_ = 6;
          pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                        s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,auStack_30);
          (*pcVar6)();
          uStack_8._0_1_ = 4;
          FUN_004040a0(1);
        }
        uVar10 = *(undefined4 *)(iVar2 + 0x5c);
        uVar8 = __ftol();
        uVar8 = __ftol(uVar8);
        uVar8 = __ftol(uVar8);
        uVar8 = __ftol(uVar8);
        uVar8 = __ftol(uVar8);
        uVar8 = __ftol(uVar8);
        uVar8 = (**(code **)(*piVar5 + 0x48))(auStack_60,uVar8);
        uVar8 = (**(code **)(*param_1 + 0x88))(auStack_24,uVar8);
        FUN_005b0940(uVar10,iVar1 + 0x1e0,uVar8);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_0057d310();
        local_4 = 0xffffffff;
        if (aiStack_68[0] != 0) {
          FUN_004098d0();
        }
      }
    }
    cVar4 = FUN_00595230();
    if (cVar4 != '\0') {
      FUN_00596090();
      cVar4 = FUN_00596610();
      if (cVar4 != '\0') {
        FUN_00595470();
        puVar9 = (undefined4 *)FUN_00556560();
        uStack_98 = *puVar9;
        local_4 = 7;
        cVar4 = FUN_0059b1f0();
        if (cVar4 != '\0') {
          FUN_00596090();
          cVar4 = FUN_00596c40();
          puVar9 = &DAT_006a2390;
          if (cVar4 == '\0') {
            puVar9 = &DAT_006a23d0;
          }
          uStack_5c = *puVar9;
          uStack_58 = puVar9[1];
          uStack_54 = puVar9[2];
          uStack_50 = puVar9[3];
          FUN_00596090();
          cVar4 = FUN_00596d40();
          puVar9 = &DAT_006a23a0;
          if (cVar4 == '\0') {
            puVar9 = &DAT_006a23d0;
          }
          local_78 = *puVar9;
          uStack_74 = puVar9[1];
          uStack_70 = puVar9[2];
          uStack_6c = puVar9[3];
          uVar10 = uStack_98;
          FUN_00595470(uStack_98);
          FUN_0059b440();
          FUN_0059df90(uVar10);
          piVar5 = (int *)FUN_00597fb0();
          iStack_88 = *piVar5;
          iStack_84 = piVar5[1];
          iStack_80 = piVar5[2];
          piVar5 = (int *)(**(code **)(*param_1 + 0x88))(auStack_1c);
          iStack_a8 = *piVar5;
          iStack_a4 = piVar5[1];
          iStack_a0 = piVar5[2];
          if (DAT_006c8de0 == 0) {
            FUN_0055b280();
          }
          piVar5 = (int *)FUN_00409f20(&iStack_8c);
          local_4._0_1_ = 8;
          if (*piVar5 == 0) {
            FUN_00409810(&DAT_006b3f70,(int)&uStack_ac + 3);
            local_4._0_1_ = 9;
            pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,auStack_2c);
            (*pcVar6)();
            local_4._0_1_ = 8;
            FUN_004040a0(1);
          }
          iVar1 = *piVar5;
          piVar5 = (int *)FUN_004042e0(auStack_60);
          local_4._0_1_ = 10;
          uVar3 = (undefined1)local_4;
          local_4._0_1_ = 10;
          if (*piVar5 == 0) {
            FUN_00409810(&DAT_006b3f70,(int)&uStack_ac + 2);
            local_4._0_1_ = 0xb;
            pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,auStack_3c);
            (*pcVar6)();
            local_4._0_1_ = 10;
            FUN_004040a0(1);
            uVar3 = (undefined1)local_4;
          }
          local_4._0_1_ = uVar3;
          iVar2 = *piVar5;
          if (*(int *)(iVar2 + 0x5c) == 0) {
            FUN_00409810(&DAT_006b3f70,(int)&uStack_ac + 1);
            local_4._0_1_ = 0xc;
            pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,
                                          s___AdamSource_AdamSubLevel_h_0068e1b8,0x144,auStack_4c);
            (*pcVar6)();
            local_4._0_1_ = 10;
            FUN_004040a0(1);
          }
          uVar10 = *(undefined4 *)(iVar2 + 0x5c);
          uVar8 = __ftol();
          uVar8 = __ftol(uVar8);
          uVar8 = __ftol(uVar8);
          uVar8 = __ftol(uVar8);
          uVar8 = __ftol(uVar8);
          uVar8 = __ftol(uVar8);
          FUN_005b0940(uVar10,iVar1 + 0x1e0,&iStack_a8,&iStack_88,uVar8);
          local_4._0_1_ = 8;
          FUN_0057d310();
          local_4 = CONCAT31(local_4._1_3_,7);
          if (iStack_8c != 0) {
            FUN_004098d0();
            iStack_8c = 0;
          }
        }
        local_4 = 0xffffffff;
        FUN_005630e0();
      }
    }
  }
  ExceptionList = local_c;
  return;
}

