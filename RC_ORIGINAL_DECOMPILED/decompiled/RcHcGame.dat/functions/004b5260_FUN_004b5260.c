/*
 * FUN_004b5260 at 004b5260
 * undefined FUN_004b5260(void)
 * Address ranges: 004b5260-004b586e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004b5260(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  char cVar6;
  int *piVar7;
  code *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  float10 fVar14;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  float in_stack_0000001c;
  undefined4 in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000034;
  undefined1 **ppuStack_1f0;
  undefined1 *local_1d8;
  undefined1 *puStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined1 *local_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 *local_1a8 [4];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float fStack_188;
  undefined4 auStack_180 [3];
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined4 uStack_168;
  float fStack_164;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_f4;
  undefined1 uStack_f3;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined1 uStack_f0;
  undefined1 uStack_ef;
  int iStack_e8;
  undefined4 uStack_ac;
  undefined1 *puStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 **ppuStack_4c;
  undefined1 **ppuStack_48;
  undefined4 uStack_44;
  undefined1 **ppuStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 *apuStack_30 [3];
  undefined1 *apuStack_24 [3];
  undefined1 *apuStack_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ec9d;
  pvStack_c = ExceptionList;
  ppuStack_1f0 = &local_1d8;
  ExceptionList = &pvStack_c;
  piVar7 = (int *)FUN_004042e0();
  local_4 = 0;
  if (*piVar7 == 0) {
    ppuStack_1f0 = (undefined1 **)0x0;
    FUN_004040a0();
    uVar11 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar6 != '\0');
    ppuStack_1f0 = (undefined1 **)(~uVar11 - 1);
    FUN_004040f0(&DAT_006b3f70);
    ppuStack_1f0 = &local_1b8;
    local_4._0_1_ = 1;
    pcVar8 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
    (*pcVar8)();
    local_4 = (uint)local_4._1_3_ << 8;
    ppuStack_1f0 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  iVar12 = *piVar7;
  if (*(int *)(iVar12 + 0x5c) == 0) {
    ppuStack_1f0 = (undefined1 **)0x0;
    FUN_004040a0();
    uVar11 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar11 == 0) break;
      uVar11 = uVar11 - 1;
      cVar6 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar6 != '\0');
    ppuStack_1f0 = (undefined1 **)(~uVar11 - 1);
    FUN_004040f0(&DAT_006b3f70);
    ppuStack_1f0 = local_1a8;
    local_4._0_1_ = 2;
    pcVar8 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8,
                                  0x144);
    (*pcVar8)();
    local_4 = (uint)local_4._1_3_ << 8;
    ppuStack_1f0 = (undefined1 **)0x1;
    FUN_004040a0();
  }
  uVar5 = *(undefined4 *)(iVar12 + 0x5c);
  local_4 = 0xffffffff;
  if ((local_1d8 != (undefined1 *)0x0) &&
     (iVar12 = *(int *)(local_1d8 + 0x14), *(int *)(local_1d8 + 0x14) = iVar12 + -1,
     iVar12 + -1 == 0)) {
    ppuStack_1f0 = (undefined1 **)0x0;
    FUN_005abfc0();
  }
  ppuStack_1f0 = &puStack_1d4;
  FUN_005b3020(0xbf800000);
  ppuStack_1f0 = apuStack_30;
  FUN_005b3000();
  ppuStack_1f0 = apuStack_18;
  FUN_005b3020(0xbf800000);
  ppuStack_1f0 = apuStack_24;
  FUN_005b3000();
  local_1d8 = (undefined1 *)&ppuStack_1f0;
  FUN_004042e0(&ppuStack_1f0);
  FUN_00565c30();
  ppuStack_1f0 = &puStack_1d4;
  local_4 = 3;
  uStack_ac = 0x3f23d70a;
  uStack_f3 = 1;
  uStack_f2 = 1;
  uStack_f1 = 0;
  uStack_f0 = 1;
  uStack_ef = 0;
  uStack_f4 = 1;
  cVar6 = FUN_00565e10(&stack0x00000004);
  if (cVar6 != '\0') {
    puStack_1d4 = puStack_6c;
    ppuStack_1f0 = local_1a8;
    fStack_1d0 = fStack_68;
    fStack_1cc = fStack_64;
    FUN_005b2fe0();
    ppuStack_1f0 = (undefined1 **)0x4b54e2;
    fVar14 = (float10)FUN_005b2fd0();
    if (fVar14 < (float10)in_stack_00000034) {
      fStack_1c4 = in_stack_0000001c;
      fStack_1bc = in_stack_00000024;
      fStack_1c0 = 0.0;
      fStack_1c8 = (float)((float10)1.0 - fVar14 / (float10)in_stack_00000034);
      ppuStack_1f0 = (undefined1 **)0x4b5537;
      FUN_005b2f20();
      ppuStack_1f0 = (undefined1 **)(fStack_1c8 * in_stack_00000034 * 0.85);
      FUN_005b2fa0();
      fVar1 = *(float *)(param_1 + 0x68);
      puVar9 = auStack_180;
      iVar12 = 4;
      fVar2 = *(float *)(param_1 + 0x7c);
      fVar3 = *(float *)(param_1 + 0x78);
      fVar4 = *(float *)(param_1 + 0x68);
      do {
        puVar9[-1] = 0x437f0000;
        *puVar9 = 0x437f0000;
        puVar9[1] = 0x437f0000;
        puVar9[2] = fVar3 * fVar4 + (1.0 - fVar1) * fVar2;
        puVar9 = puVar9 + 9;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      fStack_198 = (float)puStack_1d4 - in_stack_00000010;
      uStack_18c = 0;
      uStack_168 = 0x3f800000;
      uStack_144 = 0x3f800000;
      uStack_140 = 0x3f800000;
      fStack_194 = fStack_1d0 - in_stack_00000014;
      uStack_120 = 0;
      uStack_11c = 0x3f800000;
      fStack_190 = fStack_1cc - in_stack_00000018;
      fStack_188 = (0.5 - fStack_1c8 * 0.5) + 0.5;
      fStack_174 = in_stack_00000010 + (float)puStack_1d4;
      fStack_170 = in_stack_00000014 + fStack_1d0;
      fStack_16c = in_stack_00000018 + fStack_1cc;
      fStack_150 = (in_stack_00000010 * 0.85 + (float)puStack_1d4) - fStack_1c4;
      fStack_1c8 = in_stack_00000014 * 0.85;
      fStack_14c = (fStack_1c8 + fStack_1d0) - fStack_1c0;
      local_1d8 = (undefined1 *)(in_stack_00000018 * 0.85);
      fStack_148 = ((float)local_1d8 + fStack_1cc) - fStack_1bc;
      fStack_12c = ((float)puStack_1d4 - in_stack_00000010 * 0.85) - fStack_1c4;
      fStack_128 = (fStack_1d0 - fStack_1c8) - fStack_1c0;
      fStack_124 = (fStack_1cc - (float)local_1d8) - fStack_1bc;
      fStack_164 = fStack_188;
      if (*(int *)(param_1 + 0x8c) == 0) {
        uVar11 = 0xffffffff;
        iStack_1b4 = 0;
        pcVar13 = &DAT_006b3f70;
        do {
          if (uVar11 == 0) break;
          uVar11 = uVar11 - 1;
          cVar6 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar6 != '\0');
        ppuStack_1f0 = (undefined1 **)(~uVar11 - 1);
        uStack_1b0 = 0;
        uStack_1ac = 0;
        FUN_004040f0(&DAT_006b3f70);
        ppuStack_1f0 = &local_1b8;
        local_4._0_1_ = 4;
        pcVar8 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
        (*pcVar8)();
        local_4 = CONCAT31(local_4._1_3_,3);
        if (iStack_1b4 != 0) {
          ppuStack_1f0 = (undefined1 **)(iStack_1b4 + -1);
          cVar6 = *(char *)(iStack_1b4 + -1);
          if ((cVar6 == '\0') || (cVar6 == -1)) {
            FUN_005fe5f0();
          }
          else {
            *(char *)ppuStack_1f0 = cVar6 + -1;
          }
        }
        iStack_1b4 = 0;
        uStack_1b0 = 0;
        uStack_1ac = 0;
      }
      ppuStack_1f0 = (undefined1 **)0x3f800000;
      uVar10 = FUN_0050aa70(0,1);
      FUN_005b6e90(uVar5,&fStack_198,4,uVar10);
    }
  }
  local_4 = 6;
  ppuStack_1f0 = ppuStack_3c;
  FUN_005fe5f0();
  ppuStack_3c = (undefined1 **)0x0;
  uStack_38 = 0;
  ppuStack_1f0 = ppuStack_48;
  uStack_34 = 0;
  FUN_00587d50(ppuStack_4c);
  ppuStack_1f0 = ppuStack_4c;
  FUN_005fe5f0();
  ppuStack_4c = (undefined1 **)0x0;
  ppuStack_48 = (undefined1 **)0x0;
  uStack_44 = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (iStack_e8 != 0) {
    ppuStack_1f0 = (undefined1 **)0x4b5836;
    FUN_004098d0();
    iStack_e8 = 0;
  }
  local_4 = 0xffffffff;
  ppuStack_1f0 = (undefined1 **)0x4b5854;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

