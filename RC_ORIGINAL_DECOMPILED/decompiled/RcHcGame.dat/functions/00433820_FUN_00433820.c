/*
 * FUN_00433820 at 00433820
 * undefined FUN_00433820(void)
 * Address ranges: 00433820-00433fc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 7 for .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Type propagation algorithm not settling */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64c430 slot 7 for
   .?AVCRCPlayer@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00433820(int *param_1,float param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  float10 fVar10;
  float10 fVar11;
  float *pfVar12;
  undefined1 auStack_b4 [3];
  undefined1 local_b1;
  undefined *puStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  float afStack_a4 [2];
  int aiStack_9c [10];
  undefined1 auStack_74 [16];
  undefined1 local_64 [4];
  undefined1 auStack_60 [76];
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00623b90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 < 0.0) {
    local_ac = CONCAT31(local_ac._1_3_,local_b1);
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_a_Damage_>__0_0f_006904a0,
                                  s_D__Work_RCHorror_RCSource_RCPlay_00690328,0x358,&local_ac);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0x48))(local_64);
    fVar10 = (float10)FUN_005b2fd0();
    if ((float10)0.0 < fVar10) {
      uVar4 = (**(code **)(*param_3 + 0x48))(aiStack_9c + 1);
      uVar4 = (**(code **)(*param_1 + 0x48))(&puStack_b0,uVar4);
      fVar10 = (float10)FUN_005b1600(uVar4);
      fVar11 = (float10)FUN_004d6960();
      fVar10 = (float10)FUN_005b1630((float)((float10)(float)fVar10 - fVar11));
      afStack_a4[0] = (float)fVar10;
      (**(code **)(*param_1 + 0x48))(auStack_b4,auStack_60);
      pfVar12 = afStack_a4;
      (**(code **)(*param_3 + 0x48))(pfVar12);
      FUN_005b2fe0(pfVar12);
      aiStack_9c[3] = 0;
      aiStack_9c[4] = 0x3f800000;
      aiStack_9c[5] = 0;
      FUN_005b2e60(aiStack_9c);
      fVar10 = (float10)FUN_005b2fd0();
      if (fVar10 == (float10)0.0) {
        uStack_a8 = 0x3f800000;
        afStack_a4[0] = 0.0;
        afStack_a4[1] = 0.0;
        aiStack_9c[0] = 0x3f800000;
        aiStack_9c[1] = 0;
        aiStack_9c[2] = 0;
      }
      else {
        FUN_005b2fa0((float)((float10)1.0 / fVar10));
      }
      FUN_005b5540(unaff_ESI);
      FUN_005b5920();
      FUN_005b37a0();
      if (param_1[0x7c] == 0) {
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        uStack_14 = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                      s___AdamSource_AdamPlayer_h_0068f988,0x15b,&stack0xffffff44);
        (*pcVar3)();
        uStack_14 = 0xffffffff;
        FUN_004040a0(1);
      }
      cVar2 = FUN_00402d10();
      if (cVar2 == '\0') {
        FUN_004d94c0(auStack_74);
      }
      if (param_1[0x7d] == 0) {
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar2 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
        uStack_14 = 2;
        pcVar3 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,s___AdamSource_AdamPlayer_h_0068f988,
                                      0x161,&stack0xffffff44);
        (*pcVar3)();
        uStack_14 = 0xffffffff;
        FUN_004040a0(1);
      }
      (**(code **)(*(int *)param_1[0x7d] + 0x20))(local_ac);
    }
  }
  cVar2 = FUN_004dd380();
  if ((cVar2 == '\0') && ((char)param_1[0x8f] == '\0')) {
    if (param_1[0x7c] == 0) {
      FUN_00409810(&DAT_006b3f70,&local_b1);
      local_4 = 3;
      pcVar3 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s___AdamSource_AdamPlayer_h_0068f988,0x15b,&local_ac);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    cVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x20))(-param_2,0,0);
    if (cVar2 != '\0') {
      cVar2 = FUN_004dd380();
      if (cVar2 == '\0') {
        piVar1 = param_1 + 0x85;
        DAT_006b5848 = 0;
        if (*piVar1 != 0) {
          if (*piVar1 == 0) {
            FUN_00409810(&DAT_006b3f70,&local_b1);
            local_4 = 7;
            pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,&local_ac);
            (*pcVar3)();
            local_4 = 0xffffffff;
            FUN_004040a0(1);
          }
          cVar2 = FUN_005530e0();
          if (cVar2 != '\0') {
            ExceptionList = pvStack_c;
            return;
          }
        }
        if ((char)param_1[0x89] == '\0') {
          if (param_2 < 40.0) {
            if (param_2 < 10.0) {
              if (param_2 < 0.0) {
                ExceptionList = pvStack_c;
                return;
              }
              puStack_b0 = &DAT_006b53d8;
            }
            else {
              puStack_b0 = &DAT_006b53b0;
            }
          }
          else {
            puStack_b0 = &DAT_006b5388;
          }
          if (puStack_b0 != (undefined *)0x0) {
            iVar5 = DAT_006c8de0;
            if (DAT_006c8de0 == 0) {
              iVar5 = FUN_0055b280();
            }
            if (*(int *)(iVar5 + 0xfc) == 0) {
              local_ac = CONCAT31(local_ac._1_3_,local_b1);
              FUN_004040a0(0);
              uVar8 = 0xffffffff;
              pcVar9 = &DAT_006b3f70;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
              local_4 = 8;
              pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                            s___AdamSource_AdamEngine_h_0068eb58,399,&local_ac);
              (*pcVar3)();
              local_4 = 0xffffffff;
              FUN_004040a0(1);
            }
            piVar6 = (int *)FUN_0054ffe0(aiStack_9c,puStack_b0,0,0x3f800000,0,0);
            iVar5 = *piVar1;
            local_4 = 9;
            if (iVar5 != *piVar6) {
              if ((iVar5 != 0) &&
                 (iVar7 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar7, iVar7 == 0))
              {
                FUN_005abfc0(0);
              }
              *piVar1 = *piVar6;
              FUN_005844b0();
            }
            local_4 = 0xffffffff;
            if (aiStack_9c[0] != 0) {
              FUN_004098d0();
            }
            aiStack_9c[0] = FUN_0060a4a0();
            aiStack_9c[0] = aiStack_9c[0] % 10000;
            iVar5 = __ftol();
            if ((iVar5 != -1) && (iVar5 < 0)) {
              auStack_74[0] = local_b1;
              FUN_004040a0(0);
              uVar8 = 0xffffffff;
              pcVar9 = &DAT_006b3f70;
              do {
                if (uVar8 == 0) break;
                uVar8 = uVar8 - 1;
                cVar2 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar2 != '\0');
              FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
              local_4 = 10;
              pcVar3 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                            s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,auStack_74);
              (*pcVar3)();
              local_4 = 0xffffffff;
              FUN_004040a0(1);
            }
            param_1[0x86] = iVar5;
            param_1[0x87] = -1;
            param_1[0x88] = 0x3f800000;
            *(undefined1 *)(param_1 + 0x89) = 1;
          }
        }
      }
      else {
        FUN_00458fd0(5);
        if (DAT_006b5848 == 0) {
          iVar5 = DAT_006c8de0;
          if (DAT_006c8de0 == 0) {
            iVar5 = FUN_0055b280();
          }
          if (*(int *)(iVar5 + 0xfc) == 0) {
            local_ac = CONCAT31(local_ac._1_3_,local_b1);
            FUN_004040a0(0);
            uVar8 = 0xffffffff;
            pcVar9 = &DAT_006b3f70;
            do {
              if (uVar8 == 0) break;
              uVar8 = uVar8 - 1;
              cVar2 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
            local_4 = 4;
            pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                          s___AdamSource_AdamEngine_h_0068eb58,399,&local_ac);
            (*pcVar3)();
            local_4 = 0xffffffff;
            FUN_004040a0(1);
          }
          FUN_0054ffe0(aiStack_9c,&DAT_006b5360,0,0x3f800000,0,0);
          if (aiStack_9c[0] != 0) {
            FUN_004098d0();
          }
          DAT_006b5848 = 1;
        }
        param_1[0x44] = 1000;
        param_1[0x45] = -1;
        param_1[0x46] = 0x3f800000;
        *(undefined1 *)(param_1 + 0x47) = 1;
        param_1[0x48] = 1000;
        param_1[0x49] = -1;
        param_1[0x4a] = 0x3f800000;
        *(undefined1 *)(param_1 + 0x4b) = 1;
      }
    }
  }
  ExceptionList = pvStack_c;
  return;
}

