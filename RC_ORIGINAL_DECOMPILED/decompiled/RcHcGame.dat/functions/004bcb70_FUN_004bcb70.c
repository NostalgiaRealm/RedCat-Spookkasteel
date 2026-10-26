/*
 * FUN_004bcb70 at 004bcb70
 * undefined FUN_004bcb70(void)
 * Address ranges: 004bcb70-004bde71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004bdb7d) */
/* WARNING: Removing unreachable block (ram,0x004bdb8e) */

void FUN_004bcb70(void)

{
  char cVar1;
  undefined1 uVar2;
  void *pvVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  float10 fVar13;
  int local_528;
  int local_524;
  int local_520;
  int local_51c;
  float local_518;
  int local_514;
  undefined1 auStack_508 [16];
  int local_4f8;
  int local_4f4;
  undefined1 auStack_4f0 [84];
  undefined1 local_49c [48];
  undefined1 local_46c [48];
  undefined1 local_43c [32];
  undefined1 local_41c [16];
  undefined1 local_40c [16];
  undefined1 local_3fc [16];
  undefined1 local_3ec [64];
  undefined1 local_3ac [32];
  undefined **local_38c;
  DWORD local_378;
  int iStack_310;
  int iStack_2a4;
  int local_238;
  int local_1cc;
  int iStack_160;
  int local_f4;
  char *local_60;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fb2b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0();
  local_4 = 0;
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = s_CAdamApplication__InitializeLeve_00697760;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 1;
  FUN_005ab4a0();
  local_4._0_1_ = 2;
  local_378 = timeGetTime();
  local_38c = &PTR_FUN_0064e854;
  FUN_00442bf0();
  FUN_0051c180();
  FUN_00515ff0();
  iVar8 = FUN_004337e0();
  if (iVar8 != 0) {
    FUN_0049f950();
    FUN_005ae390();
    local_4._0_1_ = 3;
    FUN_005aff00();
    local_4._0_1_ = 2;
    FUN_004040a0();
  }
  local_4._0_1_ = 5;
  FUN_004040a0();
  local_51c = 0;
  FUN_005844b0();
  local_4._0_1_ = 6;
  local_524 = 0;
  FUN_005844b0();
  local_4._0_1_ = 7;
  local_520 = 0;
  FUN_005844b0();
  local_4._0_1_ = 8;
  local_528 = 0;
  FUN_005844b0();
  local_4._0_1_ = 9;
  local_514 = 0;
  FUN_005844b0();
  local_4._0_1_ = 10;
  FUN_00436f90();
  local_4._0_1_ = 0xb;
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = s_General_00690810;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0xc;
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = s_NrLevels_00697754;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0xd;
  FUN_005ac9d0(local_46c);
  local_4._0_1_ = 0x10;
  FUN_004040a0();
  local_4._0_1_ = 0xf;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = &DAT_00693a14;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0x11;
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = s_StartLevelNumber_00693a00;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0x12;
  FUN_005ac9d0(local_41c);
  local_4._0_1_ = 0x15;
  FUN_004040a0();
  local_4._0_1_ = 0x14;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = &DAT_00693a14;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0x16;
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = s_StartSubLevelNumber_006939ec;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0x17;
  FUN_005ac9d0(local_3ec);
  local_4._0_1_ = 0x1a;
  FUN_004040a0();
  local_4._0_1_ = 0x19;
  FUN_004040a0();
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = &DAT_00693a14;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0x1b;
  FUN_004040a0();
  iVar8 = -1;
  pcVar12 = s_StartSubSubLevelNumber_006939d4;
  do {
    if (iVar8 == 0) break;
    iVar8 = iVar8 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0x1c;
  FUN_005ac9d0(local_40c);
  local_4._0_1_ = 0x1f;
  FUN_004040a0();
  local_4 = CONCAT31(local_4._1_3_,0x1e);
  FUN_004040a0();
  iVar8 = 1;
  while( true ) {
    if (local_1cc == -0x80000000) {
      local_1cc = FUN_0060af10();
    }
    if (local_1cc < iVar8) break;
    FUN_0052a250();
    local_4._0_1_ = 0x20;
    pvVar3 = operator_new(0x1e0);
    local_4._0_1_ = 0x21;
    if (pvVar3 == (void *)0x0) {
      local_4f4 = 0;
    }
    else {
      local_4f4 = FUN_004f1800();
    }
    local_4._0_1_ = 0x20;
    FUN_005844b0();
    local_4._0_1_ = 0x22;
    if (local_51c != local_4f4) {
      if (local_51c != 0) {
        FUN_004098d0();
      }
      local_51c = local_4f4;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x20;
    FUN_0057d310();
    FUN_005844b0();
    FUN_00529040();
    FUN_004040a0();
    iVar9 = -1;
    pcVar12 = s_NrSubLevels_00697748;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 0x23;
    FUN_005ac9d0(local_3fc);
    local_4 = CONCAT31(local_4._1_3_,0x25);
    FUN_004040a0();
    iVar9 = 1;
    while( true ) {
      if (local_238 == -0x80000000) {
        local_238 = FUN_0060af10();
      }
      if (local_238 < iVar9) break;
      FUN_0052a800();
      local_4._0_1_ = 0x26;
      FUN_004040a0();
      iVar10 = -1;
      pcVar12 = s_NrSubSubLevels_00697738;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4._0_1_ = 0x27;
      FUN_005ac9d0(local_43c);
      local_4 = CONCAT31(local_4._1_3_,0x29);
      FUN_004040a0();
      iVar10 = 1;
      while( true ) {
        if (local_f4 == -0x80000000) {
          local_f4 = FUN_0060af10();
        }
        if (local_f4 < iVar10) break;
        FUN_0052a800();
        local_4._0_1_ = 0x2a;
        FUN_0052a7a0(local_3ac,iVar8,iVar9,iVar10);
        local_4._0_1_ = 0x2b;
        FUN_004040a0();
        iVar11 = -1;
        pcVar12 = s_LevelFileName_00697728;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 0x2c;
        FUN_005acbc0(local_49c);
        local_4._0_1_ = 0x2e;
        FUN_004040a0();
        pvVar3 = operator_new(0x454);
        local_4._0_1_ = 0x2f;
        if (pvVar3 == (void *)0x0) {
          local_4f8 = 0;
        }
        else {
          local_4f8 = FUN_004f3530();
        }
        local_4._0_1_ = 0x2e;
        FUN_005844b0();
        local_4._0_1_ = 0x30;
        if (local_520 != local_4f8) {
          if (local_520 != 0) {
            FUN_004098d0();
          }
          local_520 = local_4f8;
          FUN_005844b0();
        }
        local_4._0_1_ = 0x2e;
        FUN_0057d310();
        pcVar12 = local_60;
        if (local_60 == (char *)0x0) {
          pcVar12 = "";
        }
        FUN_004040a0();
        iVar11 = -1;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          cVar1 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0();
        local_4._0_1_ = 0x31;
        uVar2 = (undefined1)local_4;
        local_4._0_1_ = 0x31;
        if (local_520 == 0) {
          FUN_00409810();
          local_4._0_1_ = 0x32;
          pcVar4 = (code *)FUN_005a07f0();
          (*pcVar4)();
          local_4._0_1_ = 0x31;
          FUN_004040a0();
          uVar2 = (undefined1)local_4;
        }
        local_4._0_1_ = uVar2;
        FUN_004f3e90();
        local_4._0_1_ = 0x2e;
        FUN_004040a0();
        FUN_005844b0();
        local_4._0_1_ = 0x2e;
        FUN_004c4780();
        FUN_004f1bf0();
        if (iStack_2a4 == -0x80000000) {
          iStack_2a4 = FUN_0060af10();
        }
        if (iStack_2a4 == iVar8) {
          if (iStack_160 == -0x80000000) {
            iStack_160 = FUN_0060af10();
          }
          if (iStack_160 == iVar9) {
            if (iStack_310 == -0x80000000) {
              iStack_310 = FUN_0060af10();
            }
            if (iStack_310 == iVar10) {
              if (local_528 != local_520) {
                if (local_528 != 0) {
                  FUN_004098d0();
                }
                local_528 = local_520;
                FUN_005844b0();
              }
              if (local_524 != local_51c) {
                if (local_524 != 0) {
                  FUN_004098d0();
                }
                local_524 = local_51c;
                FUN_005844b0();
              }
              FUN_004040a0();
              iVar11 = -1;
              pcVar12 = s_General_00690810;
              do {
                if (iVar11 == 0) break;
                iVar11 = iVar11 + -1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              FUN_004040f0();
              local_4._0_1_ = 0x34;
              FUN_004040a0();
              iVar11 = -1;
              pcVar12 = &DAT_00690804;
              do {
                if (iVar11 == 0) break;
                iVar11 = iVar11 + -1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              FUN_004040f0();
              local_4._0_1_ = 0x35;
              FUN_0043b0a0();
              local_4 = CONCAT31(local_4._1_3_,0x36);
              iVar5 = FUN_005ac9d0(auStack_4f0);
              iVar11 = *(int *)(iVar5 + 100);
              if (iVar11 == -0x80000000) {
                iVar11 = FUN_0060af10();
                *(int *)(iVar5 + 100) = iVar11;
              }
              FUN_005acca0();
              local_4._0_1_ = 0x35;
              FUN_004040a0();
              local_4._0_1_ = 0x34;
              FUN_004040a0();
              local_4._0_1_ = 0x2e;
              FUN_004040a0();
              if (iVar11 == 1) {
                if (local_524 == 0) {
                  FUN_00409810();
                  local_4._0_1_ = 0x37;
                  pcVar4 = (code *)FUN_005a07f0();
                  (*pcVar4)();
                  local_4._0_1_ = 0x2e;
                  FUN_004040a0();
                }
                *(undefined1 *)(local_524 + 0x1dc) = 1;
              }
            }
          }
        }
        local_4._0_1_ = 0x2b;
        FUN_005acca0();
        local_4._0_1_ = 0x2a;
        FUN_004040a0();
        local_4 = CONCAT31(local_4._1_3_,0x29);
        FUN_004040a0();
        iVar10 = iVar10 + 1;
      }
      local_4._0_1_ = 0x26;
      FUN_005acca0();
      local_4 = CONCAT31(local_4._1_3_,0x25);
      FUN_004040a0();
      iVar9 = iVar9 + 1;
    }
    local_4._0_1_ = 0x20;
    FUN_005acca0();
    local_4 = CONCAT31(local_4._1_3_,0x1e);
    FUN_004040a0();
    iVar8 = iVar8 + 1;
  }
  iVar9 = -1;
  pcVar12 = &DAT_006b3f70;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  iVar9 = FUN_004251b0();
  if (iVar9 != 0) {
    FUN_0052b6f0();
  }
  if (local_524 == 0) {
    FUN_004040a0();
    iVar9 = -1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 0x38;
    pcVar4 = (code *)FUN_005a07f0();
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,0x1e);
    FUN_004040a0();
  }
  if (local_528 == 0) {
    FUN_004040a0();
    iVar9 = -1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 0x39;
    pcVar4 = (code *)FUN_005a07f0();
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,0x1e);
    FUN_004040a0();
  }
  FUN_00421430();
  uVar6 = FUN_004989f0();
  FUN_004040a0(0);
  FUN_0040cc00(uVar6,0,0xffffffff);
  local_4._0_1_ = 0x1e;
  FUN_00454200();
  FUN_00498900();
  FUN_0054daf0();
  if (local_528 == 0) {
    FUN_00409810();
    local_4._0_1_ = 0x3b;
    pcVar4 = (code *)FUN_005a07f0();
    (*pcVar4)();
    local_4._0_1_ = 0x1e;
    FUN_004040a0();
  }
  pcVar12 = *(char **)(local_528 + 0x20);
  if (pcVar12 == (char *)0x0) {
    pcVar12 = "";
  }
  FUN_004040a0();
  iVar9 = -1;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0x3c;
  FUN_004040a0();
  iVar9 = -1;
  pcVar12 = s_ClockSpeed_006949e0;
  do {
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0();
  local_4._0_1_ = 0x3d;
  FUN_00436f90();
  local_4._0_1_ = 0x3e;
  iVar9 = FUN_005a3d10(auStack_508,auStack_4f0);
  local_4._0_1_ = 0x3f;
  if (*(float *)(iVar9 + 0x60) == 0.0) {
    fVar13 = (float10)FUN_005ad390();
    *(float *)(iVar9 + 0x60) = (float)fVar13;
    local_518 = (float)fVar13;
  }
  else {
    local_518 = *(float *)(iVar9 + 0x60);
  }
  FUN_00565ae0();
  local_4._0_1_ = 0x3e;
  FUN_005a3ce0();
  local_4._0_1_ = 0x3d;
  FUN_004040a0();
  local_4._0_1_ = 0x3c;
  FUN_004040a0();
  local_4._0_1_ = 0x1e;
  FUN_004040a0();
  piVar7 = (int *)FUN_0052b470();
  if (*piVar7 != 0) {
    local_4._0_1_ = 0x40;
    local_514 = *piVar7;
    FUN_005844b0();
  }
  local_4._0_1_ = 0x1e;
  if (local_518 != 0.0) {
    FUN_004098d0();
  }
  if (local_524 != 0) {
    *(int *)(local_524 + 0x14) = *(int *)(local_524 + 0x14) + 1;
  }
  FUN_005296e0();
  if (local_528 != 0) {
    *(int *)(local_528 + 0x14) = *(int *)(local_528 + 0x14) + 1;
  }
  FUN_00529840();
  FUN_005168f0();
  iVar9 = FUN_004337e0();
  if (iVar9 != 0) {
    uVar6 = FUN_005ae390();
    local_4._0_1_ = 0x41;
    FUN_005aff00(uVar6);
    local_4._0_1_ = 0x1e;
    FUN_004040a0();
  }
  FUN_0052ab20();
  FUN_0052af50();
  piVar7 = (int *)FUN_00453d20();
  local_4._0_1_ = 0x42;
  uVar2 = (undefined1)local_4;
  local_4._0_1_ = 0x42;
  if (*piVar7 == 0) {
    FUN_004040a0();
    iVar9 = -1;
    pcVar12 = &DAT_006b3f70;
    do {
      if (iVar9 == 0) break;
      iVar9 = iVar9 + -1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 0x43;
    pcVar4 = (code *)FUN_005a07f0();
    (*pcVar4)();
    local_4._0_1_ = 0x42;
    FUN_004040a0();
    uVar2 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar2;
  FUN_004f6000();
  local_4._0_1_ = 0x1e;
  if (iVar8 != 0) {
    FUN_004098d0();
  }
  local_4._0_1_ = 0x19;
  FUN_005acca0();
  local_4._0_1_ = 0x14;
  FUN_005acca0();
  local_4._0_1_ = 0xf;
  FUN_005acca0();
  local_4._0_1_ = 0xb;
  FUN_005acca0();
  local_4._0_1_ = 10;
  FUN_004040a0();
  local_4._0_1_ = 9;
  if (local_514 != 0) {
    FUN_004098d0();
  }
  local_4._0_1_ = 8;
  if (local_528 != 0) {
    FUN_004098d0();
  }
  local_4._0_1_ = 7;
  if ((local_520 != 0) &&
     (iVar8 = *(int *)(local_520 + 0x14) + -1, *(int *)(local_520 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0();
  }
  local_4._0_1_ = 6;
  if ((local_524 != 0) &&
     (iVar8 = *(int *)(local_524 + 0x14) + -1, *(int *)(local_524 + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0();
  }
  local_4._0_1_ = 5;
  if ((local_51c != 0) &&
     (iVar8 = *(int *)(local_51c + 0x14) + -1, *(int *)(local_51c + 0x14) = iVar8, iVar8 == 0)) {
    FUN_005abfc0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0049fa20();
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return;
}

