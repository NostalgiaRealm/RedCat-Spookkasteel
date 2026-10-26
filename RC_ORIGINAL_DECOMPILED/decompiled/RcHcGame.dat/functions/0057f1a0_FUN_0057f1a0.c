/*
 * FUN_0057f1a0 at 0057f1a0
 * undefined FUN_0057f1a0(void)
 * Address ranges: 0057f1a0-00580133
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fc20 slot 6 for .?AVCAdamEffectMusic@@. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0057f56d) */
/* WARNING: Removing unreachable block (ram,0x0057f58a) */
/* WARNING: Removing unreachable block (ram,0x0057f58c) */
/* WARNING: Removing unreachable block (ram,0x0057f225) */
/* WARNING: Removing unreachable block (ram,0x0057f242) */
/* WARNING: Removing unreachable block (ram,0x0057f244) */
/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fc20 slot 6 for
   .?AVCAdamEffectMusic@@. Original bytes unchanged; names and types still inferred. */

undefined4 __thiscall FUN_0057f1a0(int param_1,int param_2,undefined4 param_3,float param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  undefined1 local_3c [20];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642340;
  local_c = ExceptionList;
  pcVar4 = *(char **)(param_2 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  ExceptionList = &local_c;
  iVar5 = __strcmpi(pcVar4,s_AddFrequency_0069e1a0);
  if (iVar5 == 0) {
    iVar5 = *(int *)((int)param_4 + 4);
    if ((((iVar5 == 0) || ((*(int *)((int)param_4 + 8) - iVar5) / 0x18 != 1)) ||
        (*(int *)(iVar5 + 8) != 1)) || (fVar3 = (float)*(double *)(iVar5 + 0x10), fVar3 < 0.0)) {
      FUN_005b18a0(local_1c,param_4);
      local_4 = 1;
      FUN_005ae390();
      local_4._0_1_ = 2;
      FUN_005035a0();
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0();
      local_4 = 0xffffffff;
      FUN_004040a0();
      ExceptionList = local_c;
      return 0;
    }
    piVar10 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar10 = (int *)(param_1 + 0x130);
    }
    if (*piVar10 != 0) {
      piVar10 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      if (*piVar10 == 0) {
        local_3c[0] = param_4._0_1_;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar4 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 3;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      fVar2 = *(float *)(*piVar10 + 0x30);
      param_4 = fVar2 + fVar3;
      if (0.0 <= param_4) {
        if (1.0 < param_4) {
          param_4 = 1.0;
        }
      }
      else {
        param_4 = 0.0;
      }
      iVar7 = FUN_00516fb0();
      iVar5 = *(int *)(iVar7 + 100);
      if (iVar5 == -0x80000000) {
        iVar5 = FUN_0060af10();
        *(int *)(iVar7 + 100) = iVar5;
      }
      if (iVar5 != 0) {
        uVar8 = FUN_005ae390(local_3c,s_CAdamEffectMusic__DoOnCommand____006a532c,(double)fVar3,
                             (double)fVar2,(double)param_4);
        local_4 = 4;
        FUN_005aff00(uVar8);
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      else {
        piVar10 = (int *)(param_1 + 0x120);
      }
      if (*piVar10 == 0) {
        local_3c[0] = param_4._0_1_;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar4 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 5;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      FUN_00553620();
    }
    ExceptionList = local_c;
    return 1;
  }
  pcVar4 = *(char **)(param_2 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_MultiplyVolume_0069e1cc);
  if (iVar5 == 0) {
    iVar5 = *(int *)((int)param_4 + 4);
    if (((iVar5 == 0) || ((*(int *)((int)param_4 + 8) - iVar5) / 0x18 != 1)) ||
       ((*(int *)(iVar5 + 8) != 1 || (fVar3 = (float)*(double *)(iVar5 + 0x10), fVar3 < 0.0)))) {
      FUN_005b18a0(local_3c,param_4);
      local_4 = 7;
      FUN_005ae390();
      local_4._0_1_ = 8;
      FUN_005035a0();
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_004040a0();
      local_4 = 0xffffffff;
      FUN_004040a0();
      ExceptionList = local_c;
      return 0;
    }
    piVar10 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar10 = (int *)(param_1 + 0x130);
    }
    if (*piVar10 != 0) {
      piVar10 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      if (*piVar10 == 0) {
        local_3c[0] = param_4._0_1_;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar4 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 9;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      fVar2 = *(float *)(*piVar10 + 0x2c);
      param_4 = fVar2 * fVar3;
      if (0.0 <= param_4) {
        if (1.0 < param_4) {
          param_4 = 1.0;
        }
      }
      else {
        param_4 = 0.0;
      }
      iVar7 = FUN_00516fb0();
      iVar5 = *(int *)(iVar7 + 100);
      if (iVar5 == -0x80000000) {
        iVar5 = FUN_0060af10();
        *(int *)(iVar7 + 100) = iVar5;
      }
      if (iVar5 != 0) {
        uVar8 = FUN_005ae390(local_1c,s_CAdamEffectMusic__DoOnCommand____006a52ac,(double)fVar3,
                             (double)fVar2,(double)param_4);
        local_4 = 10;
        FUN_005aff00(uVar8);
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      else {
        piVar10 = (int *)(param_1 + 0x120);
      }
      if (*piVar10 == 0) {
        local_3c[0] = param_4._0_1_;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar4 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 0xb;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      FUN_00553610();
    }
    ExceptionList = local_c;
    return 1;
  }
  pcVar4 = *(char **)(param_2 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_enable_0068f0e4);
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x7c) == '\0') {
      *(undefined4 *)(param_1 + 0x10c) = 1;
      FUN_00502350();
    }
    ExceptionList = local_c;
    return 1;
  }
  pcVar4 = *(char **)(param_2 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_disable_0068f0dc);
  if (iVar5 == 0) {
    piVar10 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar10 = (int *)(param_1 + 0x130);
    }
    if (*piVar10 != 0) {
      piVar10 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      if (*piVar10 == 0) {
        local_3c[0] = param_4._0_1_;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar4 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 0xc;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      FUN_00553130();
      param_4 = 0.0;
      local_4 = 0xd;
      piVar10 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      iVar5 = *piVar10;
      if (iVar5 != 0) {
        iVar7 = *(int *)(iVar5 + 0x14) + -1;
        *(int *)(iVar5 + 0x14) = iVar7;
        if (iVar7 == 0) {
          FUN_005abfc0();
        }
        *piVar10 = 0;
      }
      local_4 = 0xffffffff;
    }
    piVar10 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) != '\0') {
      piVar10 = (int *)(param_1 + 0x130);
    }
    if (*piVar10 != 0) {
      piVar10 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      if (*piVar10 == 0) {
        local_3c[0] = param_4._0_1_;
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar4 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4 = 0xe;
        pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_3c);
        (*pcVar6)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      FUN_00553130();
      local_4 = 0xf;
      piVar10 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) != '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      iVar5 = *piVar10;
      if (iVar5 != 0) {
        iVar7 = *(int *)(iVar5 + 0x14) + -1;
        *(int *)(iVar5 + 0x14) = iVar7;
        if (iVar7 == 0) {
          FUN_005abfc0();
        }
        *piVar10 = 0;
      }
      local_4 = 0xffffffff;
    }
    FUN_00502350();
    ExceptionList = local_c;
    return 1;
  }
  iVar5 = FUN_004eed60();
  pcVar4 = *(char **)(iVar5 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,&DAT_006a5270);
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (iVar5 != 0) {
    pcVar4 = *(char **)(param_2 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    iVar5 = __strcmpi(pcVar4,s_StopPlaying_0069e2cc);
    if (iVar5 != 0) {
      uVar8 = FUN_005027d0();
      ExceptionList = local_c;
      return uVar8;
    }
    if (*(char *)(param_1 + 0x7c) != '\0') {
      piVar10 = (int *)(param_1 + 0x120);
      if (*(char *)(param_1 + 0x140) == '\0') {
        piVar10 = (int *)(param_1 + 0x130);
      }
      if (*piVar10 != 0) {
        *(undefined1 *)(param_1 + 0x110) = 1;
      }
      if (*(char *)(param_1 + 0x140) == '\0') {
        *(undefined4 *)(param_1 + 0x128) = 0;
        ExceptionList = local_c;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    ExceptionList = local_c;
    return 1;
  }
  if (*(char *)(param_1 + 0x7c) == '\0') {
    ExceptionList = local_c;
    return 1;
  }
  iVar5 = param_1 + 0x120;
  if (*(char *)(param_1 + 0x140) != '\0') {
    iVar5 = param_1 + 0x130;
  }
  *(undefined1 *)(iVar5 + 0xd) = 1;
  iVar5 = param_1 + 0x120;
  if (*(char *)(param_1 + 0x140) != '\0') {
    iVar5 = param_1 + 0x130;
  }
  *(undefined1 *)(iVar5 + 0xc) = 1;
  pcVar4 = *(char **)(param_2 + 4);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  iVar5 = __strcmpi(pcVar4,s_PlayAction_0068f9dc);
  if (iVar5 == 0) {
    iVar5 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) != '\0') {
      iVar5 = param_1 + 0x130;
    }
    *(undefined4 *)(iVar5 + 8) = 1;
    iVar5 = param_1 + 0x120;
    if (*(char *)(param_1 + 0x140) != '\0') {
      iVar5 = param_1 + 0x130;
    }
LAB_0057fb93:
    *(undefined1 *)(iVar5 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  else {
    pcVar4 = *(char **)(param_2 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    iVar5 = __strcmpi(pcVar4,s_PlayAmbient_0068f9d0);
    if (iVar5 == 0) {
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar5 + 8) = 2;
      *(undefined1 *)(param_1 + 0x110) = 1;
      ExceptionList = local_c;
      return 1;
    }
    pcVar4 = *(char **)(param_2 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    iVar5 = __strcmpi(pcVar4,s_PlayCareful_0069e1dc);
    if (iVar5 == 0) {
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar5 + 8) = 3;
      *(undefined1 *)(param_1 + 0x110) = 1;
      ExceptionList = local_c;
      return 1;
    }
    pcVar4 = *(char **)(param_2 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    iVar5 = __strcmpi(pcVar4,s_PlayEerie_0069e1e8);
    if (iVar5 == 0) {
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar5 + 8) = 4;
      *(undefined1 *)(param_1 + 0x110) = 1;
      ExceptionList = local_c;
      return 1;
    }
    pcVar4 = *(char **)(param_2 + 4);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "";
    }
    iVar5 = __strcmpi(pcVar4,s_PlayShock_0069e1f4);
    if (iVar5 == 0) {
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar5 + 8) = 7;
      cVar1 = *(char *)(param_1 + 0x140);
joined_r0x0057fd8f:
      iVar5 = param_1 + 0x120;
      if (cVar1 != '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined1 *)(iVar5 + 0xd) = 0;
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') goto LAB_0057fb93;
    }
    else {
      pcVar4 = *(char **)(param_2 + 4);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
      }
      iVar5 = __strcmpi(pcVar4,s_PlaySpecial_0068f9e8);
      if (iVar5 == 0) {
        iVar5 = param_1 + 0x120;
        if (*(char *)(param_1 + 0x140) != '\0') {
          iVar5 = param_1 + 0x130;
        }
        *(undefined4 *)(iVar5 + 8) = 6;
        *(undefined1 *)(param_1 + 0x110) = 1;
        ExceptionList = local_c;
        return 1;
      }
      pcVar4 = *(char **)(param_2 + 4);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
      }
      iVar5 = __strcmpi(pcVar4,s_PlayVictory_0069e210);
      if (iVar5 == 0) {
        iVar5 = param_1 + 0x120;
        if (*(char *)(param_1 + 0x140) != '\0') {
          iVar5 = param_1 + 0x130;
        }
        *(undefined4 *)(iVar5 + 8) = 5;
        cVar1 = *(char *)(param_1 + 0x140);
        goto joined_r0x0057fd8f;
      }
      pcVar4 = *(char **)(param_2 + 4);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = "";
      }
      iVar5 = __strcmpi(pcVar4,s_PlayShockAction_0069e200);
      if (iVar5 != 0) {
        pcVar4 = *(char **)(param_2 + 4);
        if (pcVar4 == (char *)0x0) {
          pcVar4 = "";
        }
        iVar5 = __strcmpi(pcVar4,s_PlayVictoryAmbient_0069e21c);
        if (iVar5 == 0) {
          iVar5 = param_1 + 0x120;
          if (*(char *)(param_1 + 0x140) != '\0') {
            iVar5 = param_1 + 0x130;
          }
          *(undefined4 *)(iVar5 + 8) = 5;
          iVar5 = param_1 + 0x120;
          if (*(char *)(param_1 + 0x140) != '\0') {
            iVar5 = param_1 + 0x130;
          }
          *(undefined1 *)(iVar5 + 0xd) = 0;
          iVar5 = param_1 + 0x120;
          if (*(char *)(param_1 + 0x140) == '\0') {
            iVar5 = param_1 + 0x130;
          }
          *(undefined4 *)(iVar5 + 8) = 2;
          cVar1 = *(char *)(param_1 + 0x140);
        }
        else {
          pcVar4 = *(char **)(param_2 + 4);
          if (pcVar4 == (char *)0x0) {
            pcVar4 = "";
          }
          iVar5 = __strcmpi(pcVar4,s_PlayVictoryCareful_0069e230);
          if (iVar5 == 0) {
            iVar5 = param_1 + 0x120;
            if (*(char *)(param_1 + 0x140) != '\0') {
              iVar5 = param_1 + 0x130;
            }
            *(undefined4 *)(iVar5 + 8) = 5;
            iVar5 = param_1 + 0x120;
            if (*(char *)(param_1 + 0x140) != '\0') {
              iVar5 = param_1 + 0x130;
            }
            *(undefined1 *)(iVar5 + 0xd) = 0;
            iVar5 = param_1 + 0x120;
            if (*(char *)(param_1 + 0x140) == '\0') {
              iVar5 = param_1 + 0x130;
            }
            *(undefined4 *)(iVar5 + 8) = 3;
            cVar1 = *(char *)(param_1 + 0x140);
          }
          else {
            pcVar4 = *(char **)(param_2 + 4);
            if (pcVar4 == (char *)0x0) {
              pcVar4 = "";
            }
            iVar5 = __strcmpi(pcVar4,s_PlayVictoryEerie_0069e244);
            if (iVar5 != 0) {
              pcVar4 = *(char **)(param_2 + 4);
              if (pcVar4 == (char *)0x0) {
                pcVar4 = "";
              }
              iVar5 = __strcmpi(pcVar4,s_PlayVictoryNone_0069e258);
              if (iVar5 == 0) {
                iVar5 = param_1 + 0x120;
                if (*(char *)(param_1 + 0x140) != '\0') {
                  iVar5 = param_1 + 0x130;
                }
                *(undefined4 *)(iVar5 + 8) = 5;
                iVar5 = param_1 + 0x120;
                if (*(char *)(param_1 + 0x140) != '\0') {
                  iVar5 = param_1 + 0x130;
                }
                *(undefined1 *)(iVar5 + 0xd) = 0;
                iVar5 = param_1 + 0x120;
                if (*(char *)(param_1 + 0x140) == '\0') {
                  iVar5 = param_1 + 0x130;
                }
                *(undefined4 *)(iVar5 + 8) = 0;
              }
              *(undefined1 *)(param_1 + 0x110) = 1;
              ExceptionList = local_c;
              return 1;
            }
            iVar5 = param_1 + 0x120;
            if (*(char *)(param_1 + 0x140) != '\0') {
              iVar5 = param_1 + 0x130;
            }
            *(undefined4 *)(iVar5 + 8) = 5;
            iVar5 = param_1 + 0x120;
            if (*(char *)(param_1 + 0x140) != '\0') {
              iVar5 = param_1 + 0x130;
            }
            *(undefined1 *)(iVar5 + 0xd) = 0;
            iVar5 = param_1 + 0x120;
            if (*(char *)(param_1 + 0x140) == '\0') {
              iVar5 = param_1 + 0x130;
            }
            *(undefined4 *)(iVar5 + 8) = 4;
            cVar1 = *(char *)(param_1 + 0x140);
          }
        }
        iVar5 = param_1 + 0x120;
        if (cVar1 == '\0') {
          iVar5 = param_1 + 0x130;
        }
        *(undefined1 *)(iVar5 + 0xd) = 1;
        iVar5 = param_1 + 0x120;
        if (*(char *)(param_1 + 0x140) == '\0') {
          iVar5 = param_1 + 0x130;
        }
        *(undefined1 *)(iVar5 + 0xc) = 1;
        *(undefined1 *)(param_1 + 0x110) = 1;
        ExceptionList = local_c;
        return 1;
      }
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar5 + 8) = 7;
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined1 *)(iVar5 + 0xd) = 0;
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined1 *)(iVar5 + 0xc) = 0;
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined4 *)(iVar5 + 8) = 1;
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) == '\0') {
        iVar5 = param_1 + 0x130;
      }
      *(undefined1 *)(iVar5 + 0xd) = 1;
      iVar5 = param_1 + 0x120;
      if (*(char *)(param_1 + 0x140) != '\0') goto LAB_0057fb93;
    }
    *(undefined1 *)(param_1 + 0x13c) = 0;
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  ExceptionList = local_c;
  return 1;
}

