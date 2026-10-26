/*
 * FUN_004cc580 at 004cc580
 * undefined FUN_004cc580(void)
 * Address ranges: 004cc580-004ccfdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eeb8 slot 2 for .?AVCAdamDoorModel@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64eeb8 slot 2 for
   .?AVCAdamDoorModel@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004cc580(int param_1,int param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  float10 fVar13;
  int local_84;
  int iStack_80;
  undefined1 auStack_7c [4];
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined1 local_6c [4];
  char *local_68;
  uint local_64;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  undefined4 *puStack_58;
  uint uStack_54;
  undefined1 local_4c [4];
  undefined4 *local_48;
  undefined1 local_3c [16];
  undefined1 auStack_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630e33;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)(param_1 + 0x198) != '\0') {
    ExceptionList = &local_c;
    *(undefined1 *)(param_1 + 0x198) = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x184) + 0x5c);
    if (iVar5 != 0) {
      uVar2 = FUN_004cd4d0(*(undefined4 *)(iVar5 + 0x14));
      *(undefined4 *)(param_1 + 0x194) = uVar2;
    }
  }
  switch(*(undefined4 *)(param_1 + 0x16c)) {
  case 1:
    if (((*(char *)(param_1 + 0x171) == '\0') && (*(char *)(param_1 + 0x170) == '\0')) &&
       (cVar1 = FUN_004d14f0(*(undefined4 *)(param_1 + 0x180)), cVar1 == '\0')) {
      ExceptionList = local_c;
      return;
    }
    *(undefined1 *)(param_1 + 0x171) = 0;
    cVar1 = FUN_004cd7f0();
    if (cVar1 != '\0') {
      if (*(int *)(*(int *)(param_1 + 0x184) + 0x58) == 0) {
        ExceptionList = local_c;
        return;
      }
      if (*(int *)(*(int *)(param_1 + 0x184) + 0x50) == 0) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar1 = FUN_00401940(uVar7,1);
        if (cVar1 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *local_48 = *puVar9;
            puVar9 = puVar9 + 1;
            local_48 = local_48 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)local_48 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            local_48 = (undefined4 *)((int)local_48 + 1);
          }
          FUN_00404190(uVar7);
        }
        local_4 = 0;
        FUN_004eed10(4,local_4c,0,0);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      else {
        FUN_00505400(&DAT_006b96b0);
      }
      if (*(int *)(param_1 + 400) != 0) {
        if (*(int *)(param_1 + 400) == 0) {
          FUN_004040a0(0);
          uVar7 = 0xffffffff;
          pcVar10 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
          local_4 = 1;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_3c);
          (*pcVar6)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        cVar1 = FUN_005530e0();
        if (cVar1 != '\0') {
          ExceptionList = local_c;
          return;
        }
      }
      iVar5 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar5 = FUN_0055b280();
      }
      if (*(int *)(iVar5 + 0xfc) == 0) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4 = 2;
        pcVar6 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                      399,local_3c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      piVar3 = (int *)FUN_0054ffe0(&iStack_80,&DAT_006ba0a8,0,0x3f800000,0,0);
      iVar5 = *(int *)(param_1 + 400);
      local_4 = 3;
      if (iVar5 != *piVar3) {
        if ((iVar5 != 0) &&
           (iVar4 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar4, iVar4 == 0)) {
          FUN_005abfc0(0);
        }
        iVar5 = *piVar3;
        *(int *)(param_1 + 400) = iVar5;
        if (iVar5 != 0) {
          *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        }
      }
      local_4 = 0xffffffff;
      if (iStack_80 == 0) {
        ExceptionList = local_c;
        return;
      }
      iVar5 = *(int *)(iStack_80 + 0x14) + -1;
      *(int *)(iStack_80 + 0x14) = iVar5;
      if (iVar5 != 0) {
        ExceptionList = local_c;
        return;
      }
      FUN_005abfc0(0);
      ExceptionList = local_c;
      return;
    }
    piVar3 = (int *)FUN_004042e0(&local_84);
    local_4 = 4;
    if (*piVar3 == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 5;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_3c);
      (*pcVar6)();
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_004040a0(1);
    }
    iVar5 = *(int *)(*piVar3 + 0x360);
    local_4 = 0xffffffff;
    if (local_84 != 0) {
      iVar4 = *(int *)(local_84 + 0x14) + -1;
      *(int *)(local_84 + 0x14) = iVar4;
      if (iVar4 == 0) {
        FUN_005abfc0(0);
      }
      local_84 = 0;
    }
    if (iVar5 == 0) {
LAB_004cca98:
      if (*(int *)(param_1 + 0x1a8) != 0) {
        if (iVar5 == 0) {
          ExceptionList = local_c;
          return;
        }
        if (*(int *)(iVar5 + 0x1f0) == 0) {
          FUN_004040a0(0);
          uVar7 = 0xffffffff;
          pcVar10 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar1 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
          local_4 = 8;
          pcVar6 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                        s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,auStack_2c
                                       );
          (*pcVar6)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        cVar1 = FUN_004de110(param_1 + 0x1a0);
        if (cVar1 == '\0') {
          ExceptionList = local_c;
          return;
        }
      }
    }
    else if (*(int *)(param_1 + 0x1a8) != 0) {
      if (*(int *)(iVar5 + 0x1f0) == 0) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4 = 6;
        pcVar6 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069888c,0x15b,auStack_2c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      cVar1 = FUN_004de110(param_1 + 0x1a0);
      if ((cVar1 == '\0') && (*(int *)(*(int *)(param_1 + 0x184) + 0x58) != 0)) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar1 = FUN_00401940(uVar7,1);
        if (cVar1 != '\0') {
          puVar9 = (undefined4 *)&DAT_006b3f70;
          puVar11 = puStack_58;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
            puVar9 = (undefined4 *)((int)puVar9 + 1);
            puVar11 = (undefined4 *)((int)puVar11 + 1);
          }
          *(undefined1 *)((int)puStack_58 + uVar7) = 0;
          uStack_54 = uVar7;
        }
        local_4 = 7;
        FUN_004eed10(5,auStack_5c,0,0);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      goto LAB_004cca98;
    }
    if ((*(int *)(param_1 + 0x188) != 0) && (cVar1 = FUN_004cf280(param_1), cVar1 == '\0')) {
      cVar1 = FUN_004cf2c0();
      if (cVar1 != '\0') {
        ExceptionList = local_c;
        return;
      }
      *(undefined4 *)(param_1 + 0x16c) = 2;
      ExceptionList = local_c;
      return;
    }
    goto LAB_004ccb8e;
  case 2:
    cVar1 = FUN_004cf280(param_1);
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return;
    }
LAB_004ccb8e:
    *(undefined4 *)(param_1 + 0x16c) = 3;
    break;
  case 3:
    if (*(int *)(*(int *)(param_1 + 0x184) + 0x40) != 0) {
      FUN_00505400(&DAT_006b96c0);
    }
    if (*(int **)(param_1 + 0x194) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x194) + 0x2c))(1);
    }
    FUN_004cd2f0(1);
    cVar1 = FUN_00502480();
    if ((cVar1 != '\0') && (*(int *)(*(int *)(param_1 + 0x184) + 0x58) != 0)) {
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      iStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 9;
      FUN_004eed10(8,auStack_7c,0,0);
      local_4 = 0xffffffff;
      if (iStack_78 != 0) {
        cVar1 = *(char *)(iStack_78 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_78 + -1));
        }
        else {
          *(char *)(iStack_78 + -1) = cVar1 + -1;
        }
      }
      iStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
    }
    FUN_004cc140();
    *(undefined4 *)(param_1 + 0x16c) = 4;
    break;
  case 4:
    fVar13 = (float10)FUN_004d0710();
    fVar13 = (float10)param_3 * (float10)0.001 + fVar13;
    if (fVar13 <= (float10)*(float *)(param_1 + 0x13c)) {
      FUN_004d0a90((float)fVar13,param_3);
    }
    else {
      cVar1 = FUN_004d0a90(*(undefined4 *)(param_1 + 0x13c),param_3);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x16c) = 5;
      }
    }
    break;
  case 5:
    if (*(int *)(*(int *)(param_1 + 0x184) + 0x44) != 0) {
      FUN_00505400(&DAT_006b96e8);
    }
    FUN_004cddc0();
    *(undefined4 *)(param_1 + 0x16c) = 6;
    *(int *)(param_1 + 0x178) = param_2;
    break;
  case 6:
    iVar5 = *(int *)(param_1 + 0x178);
    if ((param_2 == -1) || (iVar5 == -1)) {
      iVar5 = 0;
LAB_004ccde0:
      *(int *)(param_1 + 0x178) = param_2;
    }
    else {
      if (param_2 < iVar5) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4 = 10;
        pcVar6 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_1c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      iVar5 = param_2 - iVar5;
      if (iVar5 == 0) goto LAB_004ccde0;
    }
    if ((((*(int *)(param_1 + 0x174) != -1) && (*(int *)(param_1 + 0x174) < iVar5)) &&
        (*(char *)(param_1 + 0x170) == '\0')) &&
       (cVar1 = FUN_004d14f0(*(undefined4 *)(param_1 + 0x180)), cVar1 == '\0')) {
      *(undefined4 *)(param_1 + 0x16c) = 7;
    }
    break;
  case 7:
    if (*(int *)(*(int *)(param_1 + 0x184) + 0x48) != 0) {
      FUN_00505400(&DAT_006b96d8);
    }
    FUN_004cdfe0();
    FUN_004cc140();
    *(undefined4 *)(param_1 + 0x16c) = 8;
    break;
  case 8:
    fVar13 = (float10)FUN_004d0710();
    fVar13 = fVar13 - (float10)param_3 * (float10)0.001;
    if ((float10)*(float *)(param_1 + 0x140) <= fVar13) {
      FUN_004d0a90((float)fVar13,param_3);
    }
    else {
      cVar1 = FUN_004d0a90(*(undefined4 *)(param_1 + 0x140),param_3);
      if (cVar1 != '\0') {
        *(undefined4 *)(param_1 + 0x16c) = 9;
      }
    }
    break;
  case 9:
    if (*(int *)(*(int *)(param_1 + 0x184) + 0x4c) != 0) {
      FUN_00505400(&DAT_006b96f8);
    }
    if (*(int **)(param_1 + 0x194) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x194) + 0x30))();
    }
    FUN_004cd2f0(0);
    *(undefined4 *)(param_1 + 0x16c) = 1;
    break;
  default:
    uVar7 = 0xffffffff;
    pcVar10 = s_Invalid_FSM_state_00698ccc;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    local_68 = (char *)0x0;
    local_64 = 0;
    local_60 = 0;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar10 = s_Invalid_FSM_state_00698ccc;
      pcVar12 = local_68;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      local_68[uVar7] = '\0';
      local_64 = uVar7;
    }
    local_4 = 0xb;
    pcVar6 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_00698ddc,0x290
                                  ,local_6c);
    (*pcVar6)();
    if (local_68 != (char *)0x0) {
      cVar1 = local_68[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_68 + -1);
      }
      else {
        local_68[-1] = cVar1 + -1;
      }
    }
  }
  ExceptionList = local_c;
  return;
}

