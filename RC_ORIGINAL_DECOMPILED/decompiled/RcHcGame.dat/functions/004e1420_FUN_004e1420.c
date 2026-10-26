/*
 * FUN_004e1420 at 004e1420
 * undefined FUN_004e1420(void)
 * Address ranges: 004e1420-004e1c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e1420(int *param_1,int param_2,float *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *extraout_ECX_01;
  char *pcVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float *pfStack_80;
  float fStack_6c;
  int iStack_68;
  undefined1 *puStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float afStack_48 [3];
  undefined1 auStack_3c [4];
  char *pcStack_38;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00632770;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if ((char)param_1[0xbc] == '\0') {
    ExceptionList = &pvStack_c;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    pfStack_80 = (float *)0x4e145c;
    iVar3 = (**(code **)(*param_1 + 0x84))();
    if (iVar3 == 0) {
      puStack_64 = (undefined1 *)0x0;
      iVar3 = param_1[0xbd];
      uStack_4 = 2;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0x14) + -1;
        *(int *)(iVar3 + 0x14) = iVar5;
        if (iVar5 == 0) {
          pfStack_80 = (float *)0x0;
          FUN_005abfc0();
        }
        param_1[0xbd] = 0;
        pfStack_80 = (float *)0x4e15c1;
        FUN_005844b0();
      }
      uStack_4 = 0xffffffff;
    }
    else {
      pfStack_80 = afStack_48;
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x48))();
      uStack_54 = *puVar4;
      uStack_50 = puVar4[1];
      uStack_4c = puVar4[2];
      iVar5 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        pfStack_80 = (float *)0x4e1496;
        iVar5 = FUN_0055b280();
      }
      if (*(int *)(iVar5 + 0xfc) == 0) {
        pfStack_80 = (float *)0x0;
        auStack_2c[0] = (undefined1)param_2;
        FUN_004040a0();
        uVar10 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        pfStack_80 = (float *)(~uVar10 - 1);
        FUN_004040f0(&DAT_006b3f70);
        pfStack_80 = (float *)auStack_2c;
        uStack_4 = 0;
        pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399);
        (*pcVar6)();
        uStack_4 = 0xffffffff;
        pfStack_80 = (float *)0x1;
        FUN_004040a0();
      }
      pfStack_80 = (float *)0x0;
      piVar7 = (int *)FUN_0054ea00(&fStack_6c,iVar3,&uStack_54,1,1,0x3f800000,0);
      iVar3 = param_1[0xbd];
      uStack_4 = 1;
      if (iVar3 != *piVar7) {
        if ((iVar3 != 0) &&
           (iVar5 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar5, iVar5 == 0)) {
          pfStack_80 = (float *)0x0;
          FUN_005abfc0();
        }
        param_1[0xbd] = *piVar7;
        pfStack_80 = (float *)0x4e156d;
        FUN_005844b0();
      }
      uStack_4 = 0xffffffff;
      if (fStack_6c != 0.0) {
        pfStack_80 = (float *)0x4e1582;
        FUN_004098d0();
      }
    }
    pfStack_80 = afStack_48;
    pfVar8 = (float *)(**(code **)(*param_1 + 0x48))();
    param_1[0xb5] = (int)*pfVar8;
    param_1[0xb6] = (int)pfVar8[1];
    param_1[0xb7] = (int)pfVar8[2];
    puStack_64 = (undefined1 *)*pfVar8;
    fStack_60 = _DAT_006b9410 + (float)param_1[0xb6];
    fStack_5c = pfVar8[2];
    (**(code **)(*param_1 + 0x4c))(&puStack_64);
    pfStack_80 = (float *)param_1[0xba];
    FUN_0049cca0(param_1[0xb8],param_1[0xb9]);
  }
  switch(param_1[0xa8]) {
  case 0:
    pfStack_80 = (float *)0x4e19b6;
    iVar3 = (**(code **)(*param_1 + 0x80))();
    pfStack_80 = extraout_ECX;
    if (iVar3 != 0) {
      iVar5 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        pfStack_80 = (float *)0x4e19cf;
        iVar5 = FUN_0055b280();
      }
      if (*(int *)(iVar5 + 0xfc) == 0) {
        pfStack_80 = (float *)0x0;
        auStack_2c[0] = (undefined1)param_2;
        FUN_004040a0();
        uVar10 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        pfStack_80 = (float *)(~uVar10 - 1);
        FUN_004040f0(&DAT_006b3f70);
        pfStack_80 = (float *)auStack_2c;
        uStack_4 = 6;
        pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399);
        (*pcVar6)();
        uStack_4 = 0xffffffff;
        pfStack_80 = (float *)0x1;
        FUN_004040a0();
      }
      pfStack_80 = (float *)0x0;
      FUN_0054ffe0(&iStack_68,iVar3,0,0x3f800000,0);
      pfStack_80 = (float *)0x0;
      if (iStack_68 != 0) {
        pfStack_80 = (float *)0x4e1a71;
        FUN_004098d0();
        iStack_68 = 0;
        pfStack_80 = extraout_ECX_00;
      }
    }
    if (param_1[0xbd] != 0) {
      if (param_1[0xbd] == 0) {
        pfStack_80 = (float *)0x0;
        auStack_1c[0] = (undefined1)param_2;
        FUN_004040a0();
        uVar10 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar2 != '\0');
        pfStack_80 = (float *)(~uVar10 - 1);
        FUN_004040f0(&DAT_006b3f70);
        pfStack_80 = (float *)auStack_1c;
        uStack_4 = 7;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar6)();
        uStack_4 = 0xffffffff;
        pfStack_80 = (float *)0x1;
        FUN_004040a0();
      }
      pfStack_80 = (float *)0x4e1b05;
      FUN_00553130();
      puStack_64 = (undefined1 *)0x0;
      iVar3 = param_1[0xbd];
      uStack_4 = 8;
      pfStack_80 = (float *)0x0;
      if (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0x14) + -1;
        *(int *)(iVar3 + 0x14) = iVar5;
        if (iVar5 == 0) {
          pfStack_80 = (float *)0x0;
          FUN_005abfc0();
        }
        param_1[0xbd] = 0;
        pfStack_80 = (float *)0x4e1b38;
        FUN_005844b0();
        pfStack_80 = extraout_ECX_01;
      }
      uStack_4 = 0xffffffff;
    }
    param_1[0xa7] = param_2;
    param_1[0xa8] = 2;
    if ((char)param_1[0xa5] != '\0') {
      *(undefined1 *)((int)param_1 + 0x295) = 0;
    }
    if ((char)param_1[0x46] != '\0') {
      puStack_64 = (undefined1 *)&pfStack_80;
      FUN_004042e0(&pfStack_80);
      FUN_0049c880();
    }
    break;
  case 1:
    break;
  case 2:
    if (*(char *)((int)param_1 + 0x295) == '\0') {
      param_1[0xa8] = 1;
    }
    else {
      iVar3 = param_1[0xa7];
      if ((param_2 == -1) || (iVar3 == -1)) {
        iVar3 = 0;
      }
      else {
        if (param_2 < iVar3) {
          pfStack_80 = (float *)0x0;
          auStack_2c[0] = (undefined1)param_2;
          FUN_004040a0();
          uVar10 = 0xffffffff;
          pcVar11 = &DAT_006b3f70;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          pfStack_80 = (float *)(~uVar10 - 1);
          FUN_004040f0(&DAT_006b3f70);
          pfStack_80 = (float *)auStack_2c;
          uStack_4 = 3;
          pcVar6 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,
                                        s___AdamSource_AdamClock_h_0068e22c,0x7d);
          (*pcVar6)();
          uStack_4 = 0xffffffff;
          pfStack_80 = (float *)0x1;
          FUN_004040a0();
        }
        iVar3 = param_2 - iVar3;
      }
      if (param_1[0xa6] < iVar3) {
        param_1[0xa8] = 3;
        param_1[0xbb] = 0;
      }
    }
    break;
  case 3:
    if (*(char *)((int)param_1 + 0x295) != '\0') {
      iVar3 = param_1[0xbb];
      fVar9 = (float)(iVar3 + (int)param_3);
      param_1[0xbb] = (int)fVar9;
      if (DAT_006b9414 < (int)fVar9) {
        pfStack_80 = (float *)param_1[0xba];
        param_1[0xa8] = 1;
        FUN_0049cca0(param_1[0xb8],param_1[0xb9]);
        fStack_5c = _DAT_006b9410 + (float)param_1[0xb6];
        fStack_60 = (float)param_1[0xb5];
        pfStack_80 = &fStack_60;
        iStack_58 = param_1[0xb7];
        (**(code **)(*param_1 + 0x4c))();
      }
      else {
        fStack_6c = fVar9;
        if (fVar9 == -NAN) {
          pfStack_80 = (float *)0x0;
          auStack_2c[0] = (undefined1)param_2;
          FUN_004040a0();
          uVar10 = 0xffffffff;
          pcVar11 = &DAT_006b3f70;
          do {
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            cVar2 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar2 != '\0');
          pfStack_80 = (float *)(~uVar10 - 1);
          FUN_004040f0(&DAT_006b3f70);
          pfStack_80 = (float *)auStack_2c;
          uStack_4 = 4;
          pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                        s___AdamSource_AdamClock_h_0068e22c,0x8a);
          (*pcVar6)();
          uStack_4 = 0xffffffff;
          pfStack_80 = (float *)0x1;
          FUN_004040a0();
        }
        fVar14 = (float10)(int)fStack_6c * (float10)0.001 * (float10)(int)fStack_6c * (float10)0.001
        ;
        fVar12 = (float10)fcos(fVar14 * (float10)12.566371);
        fVar15 = (float10)1.4426950408889634 * fVar14 * (float10)-1.5;
        fVar13 = ROUND(fVar15);
        fVar15 = (float10)f2xm1(fVar15 - fVar13);
        fVar13 = (float10)fscale((float10)1 + fVar15,fVar13);
        fStack_6c = (float)fVar13;
        puStack_64 = (undefined1 *)(float)((float10)1.0 - fVar13 * fVar12);
        fVar12 = (float10)fcos(fVar14 * (float10)18.849556);
        fVar12 = (float10)1.0 - fVar12 * (float10)fStack_6c;
        pfStack_80 = (float *)((float)puStack_64 * (float)param_1[0xba]);
        FUN_0049cca0((float)(fVar12 * (float10)(float)param_1[0xb8]),
                     (float)(fVar12 * (float10)(float)param_1[0xb9]));
        fStack_60 = (float)param_1[0xb5];
        fStack_5c = (float)param_1[0xb6];
        puVar1 = (undefined1 *)param_1[0xbb];
        iStack_58 = param_1[0xb7];
        fVar9 = _DAT_006b9410;
        if ((int)puVar1 < 0x3e9) {
          puStack_64 = puVar1;
          if (puVar1 == (undefined1 *)0xffffffff) {
            pfStack_80 = (float *)0x0;
            auStack_2c[0] = (undefined1)param_2;
            FUN_004040a0();
            uVar10 = 0xffffffff;
            pcVar11 = &DAT_006b3f70;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar2 = *pcVar11;
              pcVar11 = pcVar11 + 1;
            } while (cVar2 != '\0');
            pfStack_80 = (float *)(~uVar10 - 1);
            FUN_004040f0(&DAT_006b3f70);
            pfStack_80 = (float *)auStack_2c;
            uStack_4 = 5;
            pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                          s___AdamSource_AdamClock_h_0068e22c,0x8a);
            (*pcVar6)();
            uStack_4 = 0xffffffff;
            pfStack_80 = (float *)0x1;
            FUN_004040a0();
          }
          fVar9 = (float)(int)puStack_64 * 0.001 * _DAT_006b9410;
        }
        fStack_5c = fVar9 + (float)param_1[0xb6];
        pfStack_80 = &fStack_60;
        (**(code **)(*param_1 + 0x4c))();
      }
      if ((iVar3 == 0) && ((char)param_1[0x46] == '\0')) {
        puStack_64 = (undefined1 *)&pfStack_80;
        FUN_004042e0(&pfStack_80);
        FUN_0049ca60();
      }
      pfStack_80 = (float *)0x4e19a6;
      FUN_0049c5a0();
    }
    break;
  default:
    pfStack_80 = (float *)0x0;
    auStack_3c[0] = (undefined1)param_2;
    FUN_004040a0();
    uVar10 = 0xffffffff;
    pfStack_80 = (float *)0x1;
    pcVar11 = s_Unknown_FSM_state_0069a230;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    pfVar8 = (float *)(~uVar10 - 1);
    cVar2 = FUN_00401940(pfVar8);
    if (cVar2 != '\0') {
      pcVar11 = s_Unknown_FSM_state_0069a230;
      for (uVar10 = (uint)pfVar8 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcStack_38 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcStack_38 = pcStack_38 + 4;
      }
      for (uVar10 = (uint)pfVar8 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcStack_38 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcStack_38 = pcStack_38 + 1;
      }
      pfStack_80 = pfVar8;
      FUN_00404190();
    }
    pfStack_80 = (float *)auStack_3c;
    uStack_4 = 9;
    pcVar6 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069a204,0x145
                                 );
    (*pcVar6)();
    uStack_4 = 0xffffffff;
    pfStack_80 = (float *)0x1;
    FUN_004040a0();
  }
  pfStack_80 = param_3;
  FUN_0049d890(param_2);
  ExceptionList = pvStack_c;
  return;
}

