/*
 * FUN_0046e0f0 at 0046e0f0
 * undefined FUN_0046e0f0(void)
 * Address ranges: 0046e0f0-0046e4ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046e0f0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined1 local_d1;
  int local_d0;
  int local_cc;
  float fStack_c8;
  undefined1 local_c4 [4];
  undefined4 *puStack_c0;
  int iStack_b4;
  undefined1 local_b0 [16];
  undefined4 uStack_a0;
  undefined1 auStack_9c [24];
  undefined4 auStack_84 [30];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006280f2;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    ExceptionList = &local_c;
    local_d0 = param_1;
    piVar4 = (int *)FUN_004042e0(&local_cc);
    local_4 = 0;
    if (*piVar4 == 0) {
      local_c4[0] = local_d1;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_c4);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar9 = *piVar4;
    if (*(int *)(iVar9 + 0x5c) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_d1);
      local_4._0_1_ = 2;
      pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,local_b0);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uStack_a0 = *(undefined4 *)(iVar9 + 0x5c);
    local_4 = 0xffffffff;
    if (local_cc != 0) {
      FUN_004098d0();
    }
    local_cc = 0;
    pfVar10 = (float *)(param_1 + 0x120);
    do {
      if (*(char *)(pfVar10 + 0x12) == '\0') {
        FUN_00502350(0);
        ExceptionList = local_c;
        return;
      }
      fStack_c8 = *pfVar10 * 20.0 + (1.0 - *pfVar10) * 60.0;
      if (DAT_006c8de0 == 0) {
        FUN_0055b280();
      }
      piVar4 = (int *)FUN_00421750(&iStack_b4);
      local_4 = 3;
      if (*piVar4 == 0) {
        local_b0[0] = local_d1;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar3 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4._0_1_ = 4;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_b0);
        (*pcVar5)();
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004040a0(1);
      }
      iVar9 = *piVar4;
      local_4 = 0xffffffff;
      uVar6 = *(undefined4 *)(iVar9 + 0x210);
      uVar1 = *(undefined4 *)(iVar9 + 0x214);
      uVar2 = *(undefined4 *)(iVar9 + 0x218);
      if (iStack_b4 != 0) {
        iVar9 = *(int *)(iStack_b4 + 0x14) + -1;
        *(int *)(iStack_b4 + 0x14) = iVar9;
        if (iVar9 == 0) {
          FUN_005abfc0(0);
        }
        iStack_b4 = 0;
      }
      FUN_0046e4b0(auStack_9c,pfVar10[-8],pfVar10[-7],pfVar10[-6],uVar6,uVar1,uVar2,0,fStack_c8,
                   fStack_c8);
      iVar9 = 4;
      puVar11 = auStack_84;
      do {
        puVar11[-1] = 0x43530000;
        *puVar11 = 0x427c0000;
        puVar11[1] = 0x437f0000;
        fStack_c8 = (float)FUN_005995d0();
        iVar9 = iVar9 + -1;
        puVar11[2] = (float)(int)fStack_c8;
        puVar11 = puVar11 + 9;
      } while (iVar9 != 0);
      if (*(int *)(local_d0 + 0xf8) == 0) {
        local_c4[0] = local_d1;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar3 != '\0');
        uVar7 = ~uVar7 - 1;
        cVar3 = FUN_00401940(uVar7,1);
        if (cVar3 != '\0') {
          puVar11 = (undefined4 *)&DAT_006b3f70;
          puVar13 = puStack_c0;
          for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
          for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
            puVar11 = (undefined4 *)((int)puVar11 + 1);
            puVar13 = (undefined4 *)((int)puVar13 + 1);
          }
          FUN_00404190(uVar7);
        }
        local_4 = 5;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_c4);
        (*pcVar5)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar6 = FUN_0050aa70(0,1,0);
      FUN_005b6e90(uStack_a0,auStack_9c,4,uVar6);
      local_cc = local_cc + 1;
      pfVar10 = pfVar10 + 0x51;
    } while (local_cc < 0xf);
    FUN_0046f380();
  }
  ExceptionList = local_c;
  return;
}

