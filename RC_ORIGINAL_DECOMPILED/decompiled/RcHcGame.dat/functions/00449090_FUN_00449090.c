/*
 * FUN_00449090 at 00449090
 * undefined FUN_00449090(void)
 * Address ranges: 00449090-0044975d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00449090(int *param_1,int param_2,undefined1 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  float10 fVar10;
  uint local_44;
  int iStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_2c;
  char *pcStack_28;
  undefined1 local_1c [8];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006254c1;
  pvStack_c = ExceptionList;
  uVar8 = 0;
  local_44 = 0;
  ExceptionList = &pvStack_c;
  FUN_0044c760(param_2);
  if (param_1[0x93] == 0) {
    param_3 = operator_new(0x1a0);
    local_4 = 0;
    if (param_3 == (undefined1 *)0x0) {
      iVar6 = 0;
    }
    else {
      local_3c = CONCAT31(local_3c._1_3_,param_3._0_1_);
      FUN_004040a0();
      iVar6 = -1;
      pcVar9 = s_SpriteProjectileParticle_006913a4;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_SpriteProjectileParticle_006913a4);
      local_44 = 1;
      local_4 = CONCAT31(local_4._1_3_,1);
      uVar2 = FUN_005033a0(local_1c);
      uVar8 = 3;
      local_44 = 3;
      local_4 = 2;
      iVar6 = FUN_005914f0(uVar2);
    }
    param_1[0x93] = iVar6;
    local_4 = 3;
    if ((uVar8 & 2) != 0) {
      uVar8 = uVar8 & 0xfffffffd;
      local_44 = uVar8;
      FUN_004040a0();
    }
    local_4 = 0xffffffff;
    if ((uVar8 & 1) != 0) {
      FUN_004040a0();
    }
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    FUN_004041b0();
    FUN_00502350();
    *(undefined4 *)(param_1[0x93] + 0x130) = 0x3f800000;
    iVar6 = param_1[0x93];
    if (*(char *)(iVar6 + 0x14b) != '\0') {
      FUN_00409810(&DAT_006b3f70);
      local_4 = 5;
      pcVar3 = (code *)FUN_005a07f0(s___m_FreezeVelocity_00691370,
                                    s___AdamSource_Adam3DSpriteX_h_00691384,0x3e);
      (*pcVar3)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    *(undefined4 *)(iVar6 + 0x18c) = local_3c;
    *(undefined4 *)(iVar6 + 400) = local_38;
    *(undefined4 *)(iVar6 + 0x194) = local_34;
    *(undefined4 *)(param_1[0x93] + 0x198) = 0;
    iVar6 = *(int *)param_1[0x93];
    uVar2 = (**(code **)(*param_1 + 0x48))();
    (**(code **)(iVar6 + 0x4c))(uVar2);
    FUN_00591dc0();
    *(undefined4 *)(param_1[0x93] + 0x17c) = 0x428c0000;
    *(undefined4 *)(param_1[0x93] + 0x180) = 0x42c80000;
    *(undefined4 *)(param_1[0x93] + 0x184) = 0x42a00000;
    *(undefined4 *)(param_1[0x93] + 0x188) = 0x425c0000;
    iVar6 = *(int *)(param_1[0x93] + 0x19c);
    iStack_40 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0x40) = DAT_006b6778;
      *(undefined4 *)(iVar6 + 0x44) = DAT_006b677c;
      *(undefined4 *)(iVar6 + 0x48) = DAT_006b6780;
      *(undefined4 *)(iVar6 + 0x4c) = DAT_006b6784;
      uVar2 = __ftol();
      *(undefined4 *)(iVar6 + 0x58) = uVar2;
      iVar4 = DAT_006b915c;
      if (DAT_006b915c == 0) {
        iVar4 = FUN_004bc480();
      }
      if (*(float *)(iVar4 + 0x478) == 0.0) {
        fVar10 = (float10)FUN_005ad390(iVar4 + 0x42c);
        *(float *)(iVar4 + 0x478) = (float)fVar10;
      }
      else {
        fVar10 = (float10)*(float *)(iVar4 + 0x478);
      }
      *(float *)(iVar6 + 0x50) = (float)(fVar10 * (float10)0.3);
      FUN_00587190();
      FUN_00587180();
      local_3c._0_1_ = param_3._0_1_;
      FUN_004040a0();
      iVar6 = -1;
      pcVar9 = s_projectile_trail_0069135c;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_projectile_trail_0069135c);
      local_4 = 6;
      FUN_0040cc00(&local_3c,0);
      local_4 = 0xffffffff;
      FUN_004040a0();
      local_3c = CONCAT31(local_3c._1_3_,param_3._0_1_);
      FUN_004040a0();
      iVar6 = -1;
      pcVar9 = s_STrail_bmp_00691350;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_STrail_bmp_00691350);
      local_4 = 7;
      iVar6 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar6 = FUN_0055b280();
      }
      if (*(int *)(iVar6 + 0xd8) == 0) {
        local_2c = param_3._0_1_;
        FUN_004040a0();
        iVar6 = -1;
        pcVar9 = &DAT_006b3f70;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4._0_1_ = 8;
        pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x188);
        (*pcVar3)();
        local_4 = CONCAT31(local_4._1_3_,7);
        FUN_004040a0();
      }
      FUN_0050d980(&param_2);
      local_4 = CONCAT31(local_4._1_3_,10);
      FUN_004040a0();
      local_2c = param_3._0_1_;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar9 = s_STrail_a_bmp_00691340;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8 - 1;
      cVar1 = FUN_00401940(uVar8);
      if (cVar1 != '\0') {
        pcVar9 = s_STrail_a_bmp_00691340;
        for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)pcStack_28 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcStack_28 = pcStack_28 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcStack_28 = *pcVar9;
          pcVar9 = pcVar9 + 1;
          pcStack_28 = pcStack_28 + 1;
        }
        FUN_00404190();
      }
      local_4._0_1_ = 0xb;
      iVar6 = DAT_006c8de0;
      if (DAT_006c8de0 == 0) {
        iVar6 = FUN_0055b280();
      }
      if (*(int *)(iVar6 + 0xd8) == 0) {
        local_1c[0] = param_3._0_1_;
        FUN_004040a0();
        iVar6 = -1;
        pcVar9 = &DAT_006b3f70;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70);
        local_4._0_1_ = 0xc;
        pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                      0x188);
        (*pcVar3)();
        local_4._0_1_ = 0xb;
        FUN_004040a0();
      }
      FUN_0050d980(&local_44);
      local_4._0_1_ = 0xe;
      FUN_004040a0();
      if ((param_2 != 0) && (local_44 != 0)) {
        param_3 = &stack0xffffffa8;
        if (local_44 != 0) {
          *(int *)(local_44 + 0x14) = *(int *)(local_44 + 0x14) + 1;
        }
        local_4._0_1_ = 0xe;
        FUN_00412de0();
        FUN_0050aea0();
      }
      param_3 = &stack0xffffffa8;
      if (param_2 != 0) {
        *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
      }
      FUN_00587100();
      local_4 = CONCAT31(local_4._1_3_,10);
      if (local_44 != 0) {
        iVar6 = *(int *)(local_44 + 0x14) + -1;
        *(int *)(local_44 + 0x14) = iVar6;
        if (iVar6 == 0) {
          FUN_005abfc0();
        }
        local_44 = 0;
      }
      local_4 = 0xffffffff;
      if ((param_2 != 0) &&
         (iVar6 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar6, iVar6 == 0)) {
        FUN_005abfc0();
      }
    }
    piVar5 = (int *)FUN_004042e0();
    local_4 = 0x10;
    if (*piVar5 == 0) {
      local_1c[0] = param_3._0_1_;
      FUN_004040a0();
      iVar6 = -1;
      pcVar9 = &DAT_006b3f70;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70);
      local_4._0_1_ = 0x11;
      pcVar3 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,0x10);
      FUN_004040a0();
    }
    FUN_004f41c0();
    local_4 = 0xffffffff;
    if ((param_3 != (undefined1 *)0x0) &&
       (iVar6 = *(int *)(param_3 + 0x14), *(int *)(param_3 + 0x14) = iVar6 + -1, iVar6 + -1 == 0)) {
      FUN_005abfc0();
    }
  }
  iVar6 = *(int *)param_1[0x93];
  uVar2 = (**(code **)(*param_1 + 0x48))();
  (**(code **)(iVar6 + 0x4c))(uVar2);
  ExceptionList = pvStack_14;
  return;
}

