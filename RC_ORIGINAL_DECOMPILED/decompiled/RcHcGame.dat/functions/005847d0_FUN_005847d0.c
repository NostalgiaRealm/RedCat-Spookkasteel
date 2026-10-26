/*
 * FUN_005847d0 at 005847d0
 * undefined FUN_005847d0(void)
 * Address ranges: 005847d0-00584dd8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fce8 slot 2 for .?AVCAdamEffectSound@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fce8 slot 2 for
   .?AVCAdamEffectSound@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_005847d0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642940;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar5 = FUN_00553640();
  if (cVar5 == '\0') {
    ExceptionList = local_c;
    return;
  }
  iVar6 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar6 = FUN_0055b280();
  }
  if (*(int *)(iVar6 + 0xfc) == 0) {
    FUN_00409810();
    local_4 = 0;
    pcVar7 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  local_2c);
    (*pcVar7)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (*(char *)(*(int *)(iVar6 + 0xfc) + 0x8c) == '\0') {
    ExceptionList = local_c;
    return;
  }
  if (*(char *)(param_1 + 0x115) == '\0') {
    iVar6 = *(int *)(param_1 + 0x100);
    bVar3 = true;
    if (iVar6 != -1) {
      iVar2 = *(int *)(param_1 + 0x104);
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
        *(int *)(param_1 + 0x104) = iVar6 + param_2;
      }
      else if (iVar2 < param_2) {
        *(undefined4 *)(param_1 + 0x108) = 0;
        bVar3 = false;
      }
      else if (iVar6 < 1) {
        *(undefined4 *)(param_1 + 0x108) = 0;
      }
      else {
        param_2 = iVar2 - param_2;
        *(float *)(param_1 + 0x108) = (float)param_2 / (float)iVar6;
      }
    }
    *(bool *)(param_1 + 0x10c) = bVar3;
    if (bVar3) goto LAB_00584a35;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    if (*(int *)(param_1 + 0x110) == 0) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4 = 1;
      pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar7)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    cVar5 = FUN_005530e0();
    if (cVar5 != '\0') goto LAB_00584a35;
  }
  FUN_00584de0();
  if ((*(char *)(param_1 + 0x114) == '\0') && (*(int *)(*(int *)(param_1 + 0xf8) + 0x14) != 0)) {
    param_2 = *(int *)(*(int *)(param_1 + 0xf8) + 0x18);
    FUN_0060a4a0();
    iVar6 = __ftol();
    if ((iVar6 != -1) && (iVar6 < 0)) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4 = 2;
      pcVar7 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                    s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_2c);
      (*pcVar7)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    *(int *)(param_1 + 0x100) = iVar6;
    *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
    *(undefined1 *)(param_1 + 0x10c) = 1;
  }
LAB_00584a35:
  if (*(int *)(param_1 + 0x118) == 1) {
    FUN_00516fb0();
    iVar6 = FUN_004337e0();
    if (iVar6 != 0) {
      uVar8 = FUN_005ae390(local_2c,s_volume____f_006a5220,(double)*(float *)(param_1 + 0x11c));
      local_4 = 3;
      FUN_005aff00(uVar8);
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        FUN_00409810(&DAT_006b3f70,&param_2);
        local_4 = 4;
        pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar7)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      FUN_00553610();
    }
    if (param_3 == -1) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4 = 5;
      pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_2c);
      (*pcVar7)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    fVar4 = ((float)param_3 * 0.001) / *(float *)(param_1 + 0x120) + *(float *)(param_1 + 0x11c);
    *(float *)(param_1 + 0x11c) = fVar4;
    if (1.0 <= fVar4) {
      *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
  }
  if (*(int *)(param_1 + 0x118) == 2) {
    FUN_00516fb0();
    iVar6 = FUN_004337e0();
    if (iVar6 != 0) {
      uVar8 = FUN_005ae390(local_2c,s_volume____f_006a5220,(double)*(float *)(param_1 + 0x11c));
      local_4 = 6;
      FUN_005aff00(uVar8);
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    piVar1 = (int *)(param_1 + 0x110);
    if (*(int *)(param_1 + 0x110) != 0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        local_2c[0] = (undefined1)param_3;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar5 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar5 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 7;
        pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_2c);
        (*pcVar7)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      FUN_00553610();
    }
    if (param_3 == -1) {
      FUN_00409810(&DAT_006b3f70,&param_2);
      local_4 = 8;
      pcVar7 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_2c);
      (*pcVar7)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    fVar4 = *(float *)(param_1 + 0x11c) - ((float)param_3 * 0.001) / *(float *)(param_1 + 0x124);
    *(float *)(param_1 + 0x11c) = fVar4;
    if (fVar4 <= 0.0) {
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x118) = 0;
      if (*piVar1 != 0) {
        if (*piVar1 == 0) {
          FUN_00409810(&DAT_006b3f70,&param_3);
          local_4 = 9;
          pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_2c);
          (*pcVar7)();
          local_4 = 0xffffffff;
          FUN_004040a0();
        }
        FUN_00553130();
        param_3 = 0;
        local_4 = 10;
        if (*piVar1 != 0) {
          FUN_004098d0();
          *piVar1 = 0;
          FUN_005844b0();
        }
        local_4 = 0xffffffff;
      }
      FUN_00502350();
    }
  }
  if ((*(char *)(param_1 + 0x115) != '\0') && (*(int *)(param_1 + 0x110) == 0)) {
    uVar8 = FUN_005ae390(auStack_1c,s_CAdamEffectSound__DoOnFrameCall__006a5ca8,
                         *(undefined4 *)(*(int *)(param_1 + 0xf8) + 0x20));
    local_4 = 0xb;
    FUN_005035a0(uVar8);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  *(undefined1 *)(param_1 + 0x115) = 0;
  ExceptionList = local_c;
  return;
}

