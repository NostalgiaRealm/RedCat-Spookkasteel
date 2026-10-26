/*
 * FUN_0051b350 at 0051b350
 * undefined FUN_0051b350(void)
 * Address ranges: 0051b350-0051b712
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0051b350(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  int iStack_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  char *local_38;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00519ef0();
  iVar2 = FUN_004337e0();
  if (iVar2 == 0) {
    piVar9 = (int *)(param_1 + 0x80);
    if (*(int *)(param_1 + 0x80) == 0) {
      pcVar10 = DAT_006b997c;
      if (DAT_006b997c == (char *)0x0) {
        pcVar10 = "";
      }
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar11 = pcVar10;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7 - 1;
      cVar1 = FUN_00401940(uVar7,1);
      if (cVar1 != '\0') {
        pcVar11 = local_38;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        FUN_00404190(uVar7);
      }
      local_4 = 0;
      iVar2 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar2 = FUN_0055b280();
      }
      if (*(char *)(iVar2 + 0x125) == '\0') {
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
        local_4._0_1_ = 1;
        pcVar3 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x12d,local_2c);
        (*pcVar3)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      local_40 = *(undefined4 *)(iVar2 + 0x44);
      uVar4 = __ftol(0,1);
      piVar5 = (int *)FUN_004b09f0(&iStack_44,local_3c,uVar4);
      iVar2 = *piVar9;
      local_4._0_1_ = 2;
      if (iVar2 != *piVar5) {
        if ((iVar2 != 0) &&
           (iVar6 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar6, iVar6 == 0)) {
          FUN_005abfc0(0);
        }
        *piVar9 = *piVar5;
        FUN_005844b0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      if (iStack_44 != 0) {
        FUN_004098d0();
        iStack_44 = 0;
      }
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
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
      pcVar10 = &DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)local_38 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        local_38 = local_38 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_38 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        local_38 = local_38 + 1;
      }
      FUN_00404190(uVar7);
    }
    local_4 = 3;
    uVar4 = FUN_004e5980(local_2c,0x2e,local_3c,0);
    local_4._0_1_ = 4;
    FUN_0040cc00(uVar4,0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    if (*piVar9 == 0) {
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
      local_4 = 5;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    fVar12 = (float10)FUN_004b21b0(param_1 + 0x70);
    *(float *)(param_1 + 0x84) = (float)(((float10)1.0 - fVar12) * (float10)0.5);
    if (*piVar9 == 0) {
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
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_1c);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    fVar12 = (float10)FUN_004b1fc0(param_1 + 0x70);
    *(float *)(param_1 + 0x88) = (float)(((float10)1.0 - fVar12) * (float10)0.5);
  }
  else {
    FUN_005181b0();
    iVar2 = FUN_004337e0();
    if (iVar2 != 0) {
      FUN_005afe30(s_CAdamGameState_GS_LOADING__Handl_0069f4d0);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}

