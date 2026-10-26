/*
 * FUN_0057d420 at 0057d420
 * undefined FUN_0057d420(void)
 * Address ranges: 0057d420-0057e829
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fc20 slot 2 for .?AVCAdamEffectMusic@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fc20 slot 2 for
   .?AVCAdamEffectMusic@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0057d420(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined1 auStack_6c [4];
  undefined4 *puStack_68;
  uint uStack_64;
  undefined1 local_5c [4];
  undefined4 *puStack_58;
  undefined1 auStack_4c [4];
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar7 = param_3;
  local_4 = -1;
  puStack_8 = &LAB_006421c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar2 = FUN_00553640();
  if (cVar2 == '\0') {
    ExceptionList = local_c;
    return;
  }
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xfc) == 0) {
    local_5c[0] = (undefined1)param_3;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4 = 0;
    pcVar4 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  local_5c);
    (*pcVar4)();
    local_4 = -1;
    FUN_004040a0();
  }
  if (*(char *)(*(int *)(iVar3 + 0xfc) + 0x8c) == '\0') {
    ExceptionList = local_c;
    return;
  }
  switch(*(undefined4 *)(param_1 + 0x10c)) {
  case 0:
    if (*(char *)(param_1 + 0x110) != '\0') {
      *(undefined1 *)(param_1 + 0x110) = 0;
      *(bool *)(param_1 + 0x140) = *(char *)(param_1 + 0x140) == '\0';
      *(undefined4 *)(param_1 + 0x10c) = 1;
    }
    break;
  case 1:
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 == 0) {
LAB_0057d5e2:
      FUN_0057e850();
    }
    else {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        local_5c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 1;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      cVar2 = FUN_005530e0();
      if (cVar2 == '\0') goto LAB_0057d5e2;
    }
    cVar2 = *(char *)(param_1 + 0x140);
    iVar7 = param_1 + 0x120;
    if (cVar2 == '\0') {
      iVar7 = param_1 + 0x130;
    }
    if (*(char *)(iVar7 + 0xc) == '\0') {
      iVar7 = param_1 + 0x120;
      if (cVar2 == '\0') {
        iVar7 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar7 + 4) = 0x3f800000;
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 != 0) {
        piVar5 = (int *)(param_1 + 0x120);
        if (*(char *)(param_1 + 0x140) == '\0') {
          piVar5 = (int *)(param_1 + 0x130);
        }
        if (*piVar5 == 0) {
          local_5c[0] = (undefined1)param_3;
          FUN_004040a0();
          uVar9 = 0xffffffff;
          pcVar12 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4 = 3;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_5c);
          (*pcVar4)();
          local_4 = -1;
          FUN_004040a0();
        }
        FUN_00553610();
      }
      *(undefined4 *)(param_1 + 0x10c) = 3;
    }
    else {
      iVar7 = param_1 + 0x120;
      if (cVar2 == '\0') {
        iVar7 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar7 + 4) = 0;
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 != 0) {
        piVar5 = (int *)(param_1 + 0x120);
        if (*(char *)(param_1 + 0x140) == '\0') {
          piVar5 = (int *)(param_1 + 0x130);
        }
        if (*piVar5 == 0) {
          local_5c[0] = (undefined1)param_3;
          FUN_004040a0();
          uVar9 = 0xffffffff;
          pcVar12 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4 = 2;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_5c);
          (*pcVar4)();
          local_4 = -1;
          FUN_004040a0();
        }
        FUN_00553610();
      }
      *(undefined4 *)(param_1 + 0x10c) = 2;
    }
    break;
  case 2:
    iVar3 = FUN_00516fb0();
    iVar7 = *(int *)(iVar3 + 100);
    if (iVar7 == -0x80000000) {
      iVar7 = FUN_0060af10();
      *(int *)(iVar3 + 100) = iVar7;
    }
    if (iVar7 != 0) {
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar7 = param_1 + 0x130;
      }
      uVar8 = FUN_005ae390(auStack_3c,s_volume____f_006a5220,(double)*(float *)(iVar7 + 4));
      local_4 = 4;
      FUN_005aff00(uVar8);
      local_4 = -1;
      FUN_004040a0();
    }
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 != 0) {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        local_5c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 5;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      FUN_00553610();
    }
    iVar7 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) == '\0') {
      iVar7 = param_1 + 0x130;
    }
    if (param_3 == -1) {
      local_5c[0] = (undefined1)param_3;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4 = 6;
      pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_5c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    iVar3 = param_1 + 0x120;
    *(float *)(iVar7 + 4) =
         ((float)param_3 * 0.001) / *(float *)(param_1 + 0x114) + *(float *)(iVar7 + 4);
    if (*(char *)(param_1 + 0x140) == '\0') {
      iVar3 = param_1 + 0x130;
    }
    if (1.0 <= *(float *)(iVar3 + 4)) {
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar7 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar7 + 4) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x10c) = 3;
    }
    break;
  case 3:
    if (*(char *)(param_1 + 0x110) == '\0') {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 != 0) {
        piVar5 = (int *)(param_1 + 0x120);
        if (*(char *)(param_1 + 0x140) == '\0') {
          piVar5 = (int *)(param_1 + 0x130);
        }
        if (*piVar5 == 0) {
          local_5c[0] = (undefined1)param_3;
          FUN_004040a0();
          uVar9 = 0xffffffff;
          pcVar12 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4 = 7;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_5c);
          (*pcVar4)();
          local_4 = -1;
          FUN_004040a0();
        }
        cVar2 = FUN_005530e0();
        if (cVar2 != '\0') {
          ExceptionList = local_c;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x10c) = 8;
    }
    else {
      *(undefined1 *)(param_1 + 0x110) = 0;
      if (*(char *)(param_1 + 0x11c) != '\0') {
        iVar7 = param_1 + 0x120;
        if (*(char *)(param_1 + 0x140) != '\0') {
          iVar7 = param_1 + 0x130;
        }
        if (*(int *)(iVar7 + 8) != 0) {
          *(bool *)(param_1 + 0x140) = *(char *)(param_1 + 0x140) == '\0';
          *(undefined4 *)(param_1 + 0x10c) = 4;
          ExceptionList = local_c;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x10c) = 7;
    }
    break;
  case 4:
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 == 0) {
LAB_0057dbc5:
      FUN_0057e850();
    }
    else {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        local_5c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 8;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      cVar2 = FUN_005530e0();
      if (cVar2 == '\0') goto LAB_0057dbc5;
    }
    iVar7 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) == '\0') {
      iVar7 = param_1 + 0x130;
    }
    if (*(char *)(iVar7 + 0xc) == '\0') {
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar7 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar7 + 4) = 0x3f800000;
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar7 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar7 + 4) = 0;
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 != 0) {
        piVar5 = (int *)(param_1 + 0x120);
        if (*(char *)(param_1 + 0x140) == '\0') {
          piVar5 = (int *)(param_1 + 0x130);
        }
        if (*piVar5 == 0) {
          local_5c[0] = (undefined1)param_3;
          FUN_004040a0();
          uVar9 = 0xffffffff;
          pcVar12 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4 = 9;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_5c);
          (*pcVar4)();
          local_4 = -1;
          FUN_004040a0();
        }
        FUN_00553610();
      }
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 != 0) {
        piVar5 = (int *)(param_1 + 0x120);
        if (*(char *)(param_1 + 0x140) != '\0') {
          piVar5 = (int *)(param_1 + 0x130);
        }
        if (*piVar5 == 0) {
          local_5c[0] = (undefined1)param_3;
          FUN_004040a0();
          uVar9 = 0xffffffff;
          pcVar12 = &DAT_006b3f70;
          do {
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
          local_4 = 10;
          pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_5c);
          (*pcVar4)();
          local_4 = -1;
          FUN_004040a0();
        }
        FUN_00553610();
      }
      *(undefined4 *)(param_1 + 0x10c) = 6;
    }
    else {
      *(undefined4 *)(param_1 + 0x10c) = 5;
    }
    break;
  case 5:
    iVar6 = FUN_00516fb0();
    iVar3 = *(int *)(iVar6 + 100);
    if (iVar3 == -0x80000000) {
      iVar3 = FUN_0060af10();
      *(int *)(iVar6 + 100) = iVar3;
    }
    if (iVar3 != 0) {
      iVar3 = param_1 + 0x120;
      iVar6 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar6 = param_1 + 0x130;
      }
      else {
        iVar3 = param_1 + 0x130;
      }
      uVar8 = FUN_005ae390(auStack_2c,s_volume____f____f_006a520c,(double)*(float *)(iVar6 + 4),
                           (double)*(float *)(iVar3 + 4));
      local_4 = 0xb;
      FUN_005aff00(uVar8);
      local_4 = -1;
      FUN_004040a0();
    }
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 != 0) {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        local_5c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 0xc;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      FUN_00553610();
    }
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) != '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 != 0) {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        local_5c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 0xd;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      FUN_00553610();
    }
    iVar3 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) == '\0') {
      iVar3 = param_1 + 0x130;
    }
    if (param_3 == -1) {
      local_5c[0] = (undefined1)param_3;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4 = 0xe;
      pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_5c);
      (*pcVar4)();
      local_4 = param_3;
      FUN_004040a0();
    }
    fVar1 = (float)param_3 * 0.001;
    *(float *)(iVar3 + 4) = fVar1 / *(float *)(param_1 + 0x114) + *(float *)(iVar3 + 4);
    iVar3 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) != '\0') {
      iVar3 = param_1 + 0x130;
    }
    if (param_3 == -1) {
      param_3._0_1_ = SUB41(fVar1,0);
      local_5c[0] = (undefined1)param_3;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4 = 0xf;
      pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_5c);
      (*pcVar4)();
      local_4 = iVar7;
      FUN_004040a0();
    }
    iVar7 = param_1 + 0x120;
    *(float *)(iVar3 + 4) = *(float *)(iVar3 + 4) - fVar1 / *(float *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x140) == '\0') {
      iVar7 = param_1 + 0x130;
    }
    if (1.0 <= *(float *)(iVar7 + 4)) {
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar7 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar7 + 4) = 0x3f800000;
    }
    iVar7 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) != '\0') {
      iVar7 = param_1 + 0x130;
    }
    if (*(float *)(iVar7 + 4) <= 0.0) {
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar7 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar7 + 4) = 0;
    }
    iVar7 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) == '\0') {
      iVar7 = param_1 + 0x130;
    }
    if (*(int *)(iVar7 + 4) == 0x3f800000) {
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar7 = param_1 + 0x130;
      }
      if (*(float *)(iVar7 + 4) == 0.0) {
        *(undefined4 *)(param_1 + 0x10c) = 6;
      }
    }
    break;
  case 6:
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) != '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 != 0) {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        local_5c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 0x10;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      FUN_00553130();
      local_4 = 0x11;
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      iVar7 = *piVar5;
      if (iVar7 != 0) {
        iVar3 = *(int *)(iVar7 + 0x14) + -1;
        *(int *)(iVar7 + 0x14) = iVar3;
        if (iVar3 == 0) {
          FUN_005abfc0();
        }
        *piVar5 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x10c) = 3;
    break;
  case 7:
    iVar3 = FUN_00516fb0();
    iVar7 = *(int *)(iVar3 + 100);
    if (iVar7 == -0x80000000) {
      iVar7 = FUN_0060af10();
      *(int *)(iVar3 + 100) = iVar7;
    }
    if (iVar7 != 0) {
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar7 = param_1 + 0x130;
      }
      uVar8 = FUN_005ae390(auStack_4c,s_volume____f_006a5220,(double)*(float *)(iVar7 + 4));
      local_4 = 0x12;
      FUN_005aff00(uVar8);
      local_4 = -1;
      if (iStack_48 != 0) {
        cVar2 = *(char *)(iStack_48 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *(char *)(iStack_48 + -1) = cVar2 + -1;
        }
      }
      iStack_48 = 0;
      uStack_44 = 0;
      uStack_40 = 0;
    }
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 != 0) {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        local_5c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 0x13;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      FUN_00553610();
    }
    iVar7 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) == '\0') {
      iVar7 = param_1 + 0x130;
    }
    if (param_3 == -1) {
      local_5c[0] = (undefined1)param_3;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4 = 0x14;
      pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_5c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    iVar3 = param_1 + 0x120;
    *(float *)(iVar7 + 4) =
         *(float *)(iVar7 + 4) - ((float)param_3 * 0.001) / *(float *)(param_1 + 0x118);
    if (*(char *)(param_1 + 0x140) == '\0') {
      iVar3 = param_1 + 0x130;
    }
    if (*(float *)(iVar3 + 4) <= 0.0) {
      iVar7 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar7 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar7 + 4) = 0;
      *(undefined4 *)(param_1 + 0x10c) = 8;
    }
    break;
  case 8:
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 != 0) {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        param_3._0_1_ = SUB41(piVar5,0);
        local_5c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9 - 1;
        cVar2 = FUN_00401940(uVar9,1);
        if (cVar2 != '\0') {
          puVar11 = (undefined4 *)&DAT_006b3f70;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puStack_58 = *puVar11;
            puVar11 = puVar11 + 1;
            puStack_58 = puStack_58 + 1;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puStack_58 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puStack_58 = (undefined4 *)((int)puStack_58 + 1);
          }
          FUN_00404190();
        }
        local_4 = 0x16;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_5c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      FUN_00553130();
      local_4 = 0x17;
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      iVar7 = *piVar5;
      if (iVar7 != 0) {
        iVar3 = *(int *)(iVar7 + 0x14) + -1;
        *(int *)(iVar7 + 0x14) = iVar3;
        if (iVar3 == 0) {
          FUN_005abfc0();
        }
        *piVar5 = 0;
      }
      local_4 = -1;
    }
    piVar5 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) != '\0') {
      piVar5 = (int *)(param_1 + 0x130);
    }
    if (*piVar5 != 0) {
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      if (*piVar5 == 0) {
        param_3._0_1_ = SUB41(piVar5,0);
        auStack_6c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar2 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar2 != '\0');
        uVar9 = ~uVar9 - 1;
        cVar2 = FUN_00401940(uVar9,1);
        if (cVar2 != '\0') {
          puVar11 = (undefined4 *)&DAT_006b3f70;
          puVar13 = puStack_68;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          *(undefined1 *)((int)puStack_68 + uVar9) = 0;
          uStack_64 = uVar9;
        }
        local_4 = 0x18;
        pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      auStack_6c);
        (*pcVar4)();
        local_4 = -1;
        FUN_004040a0();
      }
      FUN_00553130();
      local_4 = 0x19;
      piVar5 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar5 = (int *)(param_1 + 0x130);
      }
      iVar7 = *piVar5;
      if (iVar7 != 0) {
        iVar3 = *(int *)(iVar7 + 0x14) + -1;
        *(int *)(iVar7 + 0x14) = iVar3;
        if (iVar3 == 0) {
          FUN_005abfc0();
        }
        *piVar5 = 0;
      }
    }
    bVar14 = *(char *)(param_1 + 0x140) == '\0';
    *(bool *)(param_1 + 0x140) = bVar14;
    iVar7 = param_1 + 0x120;
    if (!bVar14) {
      iVar7 = param_1 + 0x130;
    }
    *(uint *)(param_1 + 0x10c) = (uint)(*(int *)(iVar7 + 8) != 0);
    break;
  default:
    uVar8 = FUN_005ae390();
    local_4 = 0x1a;
    pcVar4 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a51c8,0x107
                                  ,uVar8);
    (*pcVar4)();
    if (iStack_18 != 0) {
      cVar2 = *(char *)(iStack_18 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_18 + -1) = cVar2 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

