/*
 * FUN_004de6d0 at 004de6d0
 * undefined FUN_004de6d0(void)
 * Address ranges: 004de6d0-004debca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004de6d0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  int iVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_d9;
  int *local_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  undefined4 uStack_bc;
  float fStack_b8;
  undefined1 local_b0 [4];
  undefined4 *puStack_ac;
  undefined4 uStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_84 [3];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632302;
  local_c = ExceptionList;
  if (((*(char *)(param_1 + 0x7c) != '\0') && (*(char *)(param_1 + 0xa8) != '\0')) &&
     (*(int *)(param_1 + 0x13c) != 0)) {
    ExceptionList = &local_c;
    piVar4 = (int *)FUN_004042e0(&local_d4);
    local_4 = 0;
    if (*piVar4 == 0) {
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_b0);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    iVar11 = *piVar4;
    if (*(int *)(iVar11 + 0x5c) == 0) {
      local_c0 = (float)CONCAT31(local_c0._1_3_,local_d9);
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 2;
      pcVar5 = (code *)FUN_005a07f0(s_m_GenesisWorld_0068e1a8,s___AdamSource_AdamSubLevel_h_0068e1b8
                                    ,0x144,&local_c0);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    uVar1 = *(undefined4 *)(iVar11 + 0x5c);
    local_4 = 0xffffffff;
    if ((local_d4 != (int *)0x0) &&
       (iVar11 = local_d4[5], local_d4[5] = iVar11 + -1, iVar11 + -1 == 0)) {
      FUN_005abfc0(0);
    }
    if (*(int *)(param_1 + 0x13c) == 0) {
      local_c0 = (float)CONCAT31(local_c0._1_3_,local_d9);
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar12 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar3 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar3 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 3;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &local_c0);
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    uVar6 = FUN_0050aa70();
    uStack_a0 = uVar6;
    if (*(char *)(param_1 + 0x134) == '\0') {
      uVar15 = *(undefined4 *)(param_1 + 0x130);
      pfVar10 = (float *)(param_1 + 0xfc);
      uVar14 = 2;
      uVar13 = 1;
    }
    else {
      if (DAT_006c8de0 == 0) {
        FUN_0055b280();
      }
      piVar4 = (int *)FUN_00421750(&fStack_c4);
      local_4 = 4;
      local_d4 = piVar4;
      if (*piVar4 == 0) {
        FUN_004040a0(0);
        uVar8 = 0xffffffff;
        pcVar12 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar3 = *pcVar12;
          pcVar12 = pcVar12 + 1;
        } while (cVar3 != '\0');
        uVar8 = ~uVar8 - 1;
        cVar3 = FUN_00401940(uVar8,1);
        if (cVar3 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puStack_ac = *puVar7;
            puVar7 = puVar7 + 1;
            puStack_ac = puStack_ac + 1;
          }
          for (uVar9 = uVar8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puStack_ac = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puStack_ac = (undefined4 *)((int)puStack_ac + 1);
          }
          FUN_00404190(uVar8);
          piVar4 = local_d4;
        }
        local_4._0_1_ = 5;
        pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                      local_b0);
        (*pcVar5)();
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_004040a0(1);
        uVar6 = uStack_a0;
      }
      iVar11 = *piVar4;
      local_4 = 0xffffffff;
      local_c0 = *(float *)(iVar11 + 0x210);
      uStack_bc = *(undefined4 *)(iVar11 + 0x214);
      fStack_b8 = *(float *)(iVar11 + 0x218);
      if ((fStack_c4 != 0.0) &&
         (iVar11 = *(int *)((int)fStack_c4 + 0x14) + -1, *(int *)((int)fStack_c4 + 0x14) = iVar11,
         iVar11 == 0)) {
        FUN_005abfc0(0);
      }
      fVar2 = *(float *)(param_1 + 0x130) * 32.0;
      fStack_cc = 0.0;
      fStack_d0 = fStack_b8 - *(float *)(param_1 + 0x104);
      fStack_c8 = -(local_c0 - *(float *)(param_1 + 0xfc));
      FUN_005b2f20();
      FUN_005b2fa0(fVar2);
      fStack_9c = *(float *)(param_1 + 0xfc) - fStack_d0;
      uStack_90 = 0;
      uStack_8c = 0;
      uStack_6c = 0x3f800000;
      uStack_68 = 0;
      uStack_48 = 0x3f800000;
      uStack_44 = 0x3f800000;
      local_d4 = (int *)(*(float *)(param_1 + 0x100) - fStack_cc);
      uStack_24 = 0;
      uStack_20 = 0x3f800000;
      puVar7 = auStack_84;
      fStack_98 = (float)local_d4 + fVar2;
      fStack_c4 = *(float *)(param_1 + 0x104) - fStack_c8;
      fStack_78 = fStack_d0 + *(float *)(param_1 + 0xfc);
      iVar11 = 4;
      fStack_74 = fStack_cc + *(float *)(param_1 + 0x100) + fVar2;
      fStack_70 = fStack_c8 + *(float *)(param_1 + 0x104);
      fStack_54 = fStack_d0 + *(float *)(param_1 + 0xfc);
      fStack_50 = (fStack_cc + *(float *)(param_1 + 0x100)) - fVar2;
      fStack_4c = fStack_c8 + *(float *)(param_1 + 0x104);
      fStack_2c = (float)local_d4 - fVar2;
      fStack_30 = fStack_9c;
      fStack_28 = fStack_c4;
      do {
        puVar7[-1] = *(undefined4 *)(param_1 + 0x110);
        *puVar7 = *(undefined4 *)(param_1 + 0x114);
        puVar7[1] = *(undefined4 *)(param_1 + 0x118);
        puVar7[2] = *(undefined4 *)(param_1 + 0x11c);
        puVar7 = puVar7 + 9;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      uVar15 = 0x3f800000;
      uVar14 = 0;
      pfVar10 = &fStack_9c;
      uVar13 = 4;
      fStack_94 = fStack_c4;
    }
    FUN_005b6e90(uVar1,pfVar10,uVar13,uVar6,uVar14,1,uVar15);
  }
  ExceptionList = local_c;
  return;
}

