/*
 * FUN_00476e90 at 00476e90
 * undefined FUN_00476e90(void)
 * Address ranges: 00476e90-00477255
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00476e90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  char cVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  undefined1 local_d1;
  int local_d0;
  float fStack_cc;
  int local_c8;
  undefined1 local_c4 [4];
  undefined4 *puStack_c0;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined1 local_ac [16];
  undefined1 auStack_9c [24];
  undefined4 auStack_84 [30];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00628922;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    ExceptionList = &local_c;
    local_c8 = param_1;
    piVar5 = (int *)FUN_004042e0(&local_d0);
    local_4 = 0;
    if (*piVar5 == 0) {
      local_c4[0] = local_d1;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar13 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar4 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar4 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 1;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_c4);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar10 = *piVar5;
    if (*(int *)(iVar10 + 0x5c) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_d1);
      local_4._0_1_ = 2;
      pcVar6 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_ac);
      (*pcVar6)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uStack_b0 = *(undefined4 *)(iVar10 + 0x5c);
    local_4 = 0xffffffff;
    if (local_d0 != 0) {
      FUN_004098d0();
    }
    pfVar11 = (float *)(param_1 + 300);
    local_d0 = 0xf;
    do {
      if (*(char *)(pfVar11 + 0x12) != '\0') {
        if (*(char *)(param_1 + 0x14bc) == '\0') {
          fStack_cc = (1.0 - *pfVar11) * 5.0;
          fVar3 = 40.0;
        }
        else {
          fStack_cc = (1.0 - *pfVar11) * 40.0;
          fVar3 = 5.0;
        }
        fStack_cc = fVar3 * *pfVar11 + fStack_cc;
        if (DAT_006c8de0 == 0) {
          FUN_0055b280();
        }
        piVar5 = (int *)FUN_00421750(&iStack_b4);
        local_4 = 3;
        if (*piVar5 == 0) {
          local_ac[0] = local_d1;
          FUN_004040a0(0);
          uVar8 = 0xffffffff;
          pcVar13 = &DAT_006b3f70;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar4 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar4 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
          local_4._0_1_ = 4;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_ac);
          (*pcVar6)();
          local_4 = CONCAT31(local_4._1_3_,3);
          FUN_004040a0(1);
        }
        iVar10 = *piVar5;
        local_4 = 0xffffffff;
        uVar7 = *(undefined4 *)(iVar10 + 0x210);
        uVar1 = *(undefined4 *)(iVar10 + 0x214);
        uVar2 = *(undefined4 *)(iVar10 + 0x218);
        if (iStack_b4 != 0) {
          iVar10 = *(int *)(iStack_b4 + 0x14) + -1;
          *(int *)(iStack_b4 + 0x14) = iVar10;
          if (iVar10 == 0) {
            FUN_005abfc0(0);
          }
          iStack_b4 = 0;
        }
        FUN_00477260(auStack_9c,pfVar11[-8],pfVar11[-7],pfVar11[-6],uVar7,uVar1,uVar2,0,fStack_cc,
                     fStack_cc);
        iVar10 = 4;
        puVar12 = auStack_84;
        do {
          puVar12[-1] = 0x43530000;
          *puVar12 = 0x427c0000;
          puVar12[1] = 0x437f0000;
          fStack_cc = (float)FUN_005995d0();
          iVar10 = iVar10 + -1;
          puVar12[2] = (float)(int)fStack_cc;
          puVar12 = puVar12 + 9;
        } while (iVar10 != 0);
        if (*(int *)(local_c8 + 0xf8) == 0) {
          local_c4[0] = local_d1;
          FUN_004040a0(0);
          uVar8 = 0xffffffff;
          pcVar13 = &DAT_006b3f70;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar4 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar4 != '\0');
          uVar8 = ~uVar8 - 1;
          cVar4 = FUN_00401940(uVar8,1);
          if (cVar4 != '\0') {
            puVar12 = (undefined4 *)&DAT_006b3f70;
            puVar14 = puStack_c0;
            for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            }
            for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined1 *)puVar14 = *(undefined1 *)puVar12;
              puVar12 = (undefined4 *)((int)puVar12 + 1);
              puVar14 = (undefined4 *)((int)puVar14 + 1);
            }
            FUN_00404190(uVar8);
          }
          local_4 = 5;
          pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                        local_c4);
          (*pcVar6)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        uVar7 = FUN_0050aa70(0,1,0);
        FUN_005b6e90(uStack_b0,auStack_9c,4,uVar7);
        param_1 = local_c8;
      }
      pfVar11 = pfVar11 + 0x54;
      local_d0 = local_d0 + -1;
    } while (local_d0 != 0);
  }
  ExceptionList = local_c;
  return;
}

