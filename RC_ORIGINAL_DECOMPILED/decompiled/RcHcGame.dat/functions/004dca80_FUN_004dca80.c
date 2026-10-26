/*
 * FUN_004dca80 at 004dca80
 * undefined FUN_004dca80(void)
 * Address ranges: 004dca80-004dd19f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f118 slot 7 for .?AVCAdamPlayer@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f118 slot 7 for
   .?AVCAdamPlayer@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004dca80(int *param_1,float param_2,int *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  float unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  undefined *puVar13;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_80 [12];
  undefined1 auStack_74 [16];
  undefined1 local_64 [4];
  undefined1 auStack_60 [72];
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  float local_4;
  
  local_4 = -NAN;
  puStack_8 = &LAB_00632100;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 < 0.0) {
    local_a8 = CONCAT31(local_a8._1_3_,uStack_b4._3_1_);
    ExceptionList = &pvStack_c;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4 = 0.0;
    pcVar2 = (code *)FUN_005a07f0(s_a_Damage_>__0_0f_006904a0,
                                  s_D__Work_RCHorror_AdamSource_Adam_00699728,0x834,&local_a8);
    (*pcVar2)();
    local_4 = -NAN;
    FUN_004040a0(1);
  }
  if (param_3 != (int *)0x0) {
    (**(code **)(*param_3 + 0x48))(local_64);
    fVar9 = (float10)FUN_005b2fd0();
    if ((float10)0.0 < fVar9) {
      uVar3 = (**(code **)(*param_3 + 0x48))(&uStack_98);
      uVar3 = (**(code **)(*param_1 + 0x48))(auStack_ac,uVar3);
      fVar9 = (float10)FUN_005b1600(uVar3);
      fVar10 = (float10)FUN_004d6960();
      fVar9 = (float10)FUN_005b1630((float)((float10)(float)fVar9 - fVar10));
      uStack_b4 = (float)fVar9;
      unaff_EBX = local_4 * 3.1415927 * 0.01;
      (**(code **)(*param_1 + 0x48))(auStack_b0,auStack_60);
      puVar11 = &uStack_a4;
      (**(code **)(*param_3 + 0x48))(puVar11);
      FUN_005b2fe0(puVar11);
      uStack_90 = 0;
      uStack_8c = 0x3f800000;
      uStack_88 = 0;
      FUN_005b2e60(&uStack_9c);
      fVar9 = (float10)FUN_005b2fd0();
      if (fVar9 == (float10)0.0) {
        local_a8 = 0x3f800000;
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_9c = 0x3f800000;
        uStack_98 = 0;
        uStack_94 = 0;
      }
      else {
        FUN_005b2fa0((float)((float10)1.0 / fVar9));
      }
      FUN_005b5540(unaff_ESI);
      FUN_005b5920();
      FUN_005b37a0();
      if (param_1[0x7c] == 0) {
        unaff_EBX = (float)CONCAT31((int3)((uint)unaff_EBX >> 8),(char)((uint)unaff_EDI >> 0x18));
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        uStack_14 = 1;
        pcVar2 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,
                                      &stack0xffffff48);
        (*pcVar2)();
        uStack_14 = 0xffffffff;
        FUN_004040a0(1);
      }
      cVar1 = FUN_00402d10();
      if (cVar1 == '\0') {
        FUN_004d94c0(auStack_74);
      }
      if (param_1[0x7d] == 0) {
        FUN_00409810(&DAT_006b3f70,&stack0xffffff3f);
        uStack_14 = 2;
        pcVar2 = (code *)FUN_005a07f0(s_m_HUD____0_00690410,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x161,
                                      &stack0xffffff48);
        (*pcVar2)();
        uStack_14 = 0xffffffff;
        FUN_004040a0(1);
      }
      (**(code **)(*(int *)param_1[0x7d] + 0x20))(unaff_EBP);
    }
  }
  if (param_1[0x7c] == 0) {
    FUN_00409810(&DAT_006b3f70,(int)&uStack_b4 + 3);
    local_4 = 4.2039e-45;
    pcVar2 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,&local_a8);
    (*pcVar2)();
    local_4 = -NAN;
    FUN_004040a0(1);
  }
  cVar1 = (**(code **)(*(int *)param_1[0x7c] + 0x20))(-param_2,0,0);
  if (cVar1 != '\0') {
    cVar1 = FUN_004dd380();
    if (cVar1 == '\0') {
      if (param_1[0x85] != 0) {
        if (param_1[0x85] == 0) {
          FUN_00409810(&DAT_006b3f70,&stack0xffffff43);
          uStack_10 = 7;
          pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        &uStack_b4);
          (*pcVar2)();
          uStack_10 = 0xffffffff;
          FUN_004040a0(1);
        }
        cVar1 = FUN_005530e0();
        if (cVar1 != '\0') {
          ExceptionList = pvStack_18;
          return;
        }
      }
      if ((char)param_1[0x89] == '\0') {
        if ((float)puStack_8 < 40.0) {
          if ((float)puStack_8 < 10.0) {
            if ((float)puStack_8 < 0.0) {
              ExceptionList = pvStack_18;
              return;
            }
            puVar13 = &DAT_006b53d8;
          }
          else {
            puVar13 = &DAT_006b53b0;
          }
        }
        else {
          puVar13 = &DAT_006b5388;
        }
        if (puVar13 != (undefined *)0x0) {
          iVar4 = DAT_006c8de0;
          if (DAT_006c8de0 == 0) {
            iVar4 = FUN_0055b280();
          }
          uVar12 = (undefined1)((uint)unaff_ESI >> 0x18);
          if (*(int *)(iVar4 + 0xfc) == 0) {
            uStack_b4 = (float)CONCAT31(uStack_b4._1_3_,uVar12);
            FUN_004040a0(0);
            uVar7 = 0xffffffff;
            pcVar8 = &DAT_006b3f70;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
            uStack_10 = 8;
            pcVar2 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                          s___AdamSource_AdamEngine_h_0068eb58,399,&uStack_b4);
            (*pcVar2)();
            uStack_10 = 0xffffffff;
            FUN_004040a0(1);
          }
          piVar5 = (int *)FUN_0054ffe0(&stack0xffffff48,puVar13,0,0x3f800000,0,0);
          iVar4 = param_1[0x85];
          uStack_10 = 9;
          if (iVar4 != *piVar5) {
            if ((iVar4 != 0) &&
               (iVar6 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar6, iVar6 == 0)) {
              FUN_005abfc0(0);
            }
            param_1[0x85] = *piVar5;
            FUN_005844b0();
          }
          uStack_10 = 0xffffffff;
          if (unaff_EBX != 0.0) {
            FUN_004098d0();
          }
          FUN_0060a4a0();
          iVar4 = __ftol();
          if ((iVar4 != -1) && (iVar4 < 0)) {
            auStack_80[0] = uVar12;
            FUN_004040a0(0);
            uVar7 = 0xffffffff;
            pcVar8 = &DAT_006b3f70;
            do {
              if (uVar7 == 0) break;
              uVar7 = uVar7 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + 1;
            } while (cVar1 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
            uStack_10 = 10;
            pcVar2 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                          s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,auStack_80);
            (*pcVar2)();
            uStack_10 = 0xffffffff;
            FUN_004040a0(1);
          }
          param_1[0x86] = iVar4;
          param_1[0x87] = -1;
          param_1[0x88] = 0x3f800000;
          *(undefined1 *)(param_1 + 0x89) = 1;
        }
      }
    }
    else {
      iVar4 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar4 = FUN_0055b280();
      }
      if (*(int *)(iVar4 + 0xfc) == 0) {
        FUN_00409810(&DAT_006b3f70,&stack0xffffff43);
        uStack_10 = 4;
        pcVar2 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,&uStack_b4);
        (*pcVar2)();
        uStack_10 = 0xffffffff;
        FUN_004040a0(1);
      }
      FUN_0054ffe0(&stack0xffffff48,&DAT_006b5360,0,0x3f800000,0,0);
      if (unaff_EBX != 0.0) {
        FUN_004098d0();
      }
      param_1[0x45] = -1;
      param_1[0x44] = 1000;
      param_1[0x46] = 0x3f800000;
      *(undefined1 *)(param_1 + 0x47) = 1;
      param_1[0x48] = 1000;
      param_1[0x49] = -1;
      param_1[0x4a] = 0x3f800000;
      *(undefined1 *)(param_1 + 0x4b) = 1;
    }
  }
  ExceptionList = pvStack_18;
  return;
}

