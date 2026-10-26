/*
 * FUN_0053a990 at 0053a990
 * undefined FUN_0053a990(void)
 * Address ranges: 0053a990-0053b5e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0053a990(int param_1,undefined1 *param_2,float param_3,int param_4)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  float10 fVar14;
  undefined1 *puStack_cc;
  float fStack_c8;
  int *piStack_c4;
  undefined1 *puStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined1 *puStack_b4;
  char *pcStack_b0;
  char *pcStack_ac;
  char *pcStack_a8;
  char *pcStack_a4;
  char local_8d;
  float fStack_8c;
  char *pcStack_88;
  undefined1 *puStack_84;
  float fStack_80;
  undefined1 *puStack_7c;
  char acStack_78 [4];
  undefined4 *puStack_74;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  char local_50 [16];
  float fStack_40;
  char *pcStack_3c;
  char acStack_38 [4];
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  char cStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063bed0;
  pvStack_c = ExceptionList;
  local_4 = 0;
  iVar5 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  local_28 = param_1;
  if (DAT_006b915c == 0) {
    pcStack_a4 = (char *)0x53a9cf;
    ExceptionList = &pvStack_c;
    iVar5 = FUN_004bc480();
  }
  if (*(int *)(iVar5 + 0x3a8) == 0) {
    pcStack_a4 = &local_8d;
    pcStack_a8 = &DAT_006b3f70;
    pcStack_ac = (char *)0x53a9ee;
    FUN_00409810();
    pcStack_a4 = local_50;
    local_4._0_1_ = 1;
    pcStack_a8 = (char *)0x136;
    pcStack_ac = s___AdamSource_AdamApplication_h_0068e58c;
    pcStack_b0 = s_m_Input____0_00693a28;
    puStack_b4 = (undefined1 *)0x53aa0f;
    pcVar6 = (code *)FUN_005a07f0();
    puStack_b4 = (undefined1 *)0x53aa11;
    (*pcVar6)();
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_a4 = (char *)0x1;
    pcStack_a8 = (char *)0x53aa27;
    FUN_004040a0();
  }
  pcStack_a4 = (char *)0x53aa34;
  cVar4 = (**(code **)(**(int **)(iVar5 + 0x3a8) + 0x1c))();
  if (cVar4 != '\0') {
    DAT_006ba758 = DAT_006ba758 == '\0';
  }
  if ((((*(int *)(param_1 + 0x18) != 0) &&
       (iVar7 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18), iVar5 = iVar7 >> 0x1f,
       iVar7 / 0x1c + iVar5 != iVar5)) && (*(int *)(param_1 + 0x6c) != 0)) &&
     (*(int *)(param_1 + 0x70) != 0)) {
    pcStack_a4 = (char *)0x0;
    cStack_24 = local_8d;
    pcStack_a8 = (char *)0x53aa9f;
    FUN_004040a0();
    pcStack_a4 = (char *)0x0;
    local_4._0_1_ = 2;
    acStack_38[0] = local_8d;
    pcStack_a8 = (char *)0x53aaba;
    FUN_004040a0();
    local_4 = CONCAT31(local_4._1_3_,3);
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x1c;
    }
    iStack_54 = *(int *)(param_1 + 0x18) + -0x1c + iVar5 * 0x1c;
    if (DAT_006c8de0 == 0) {
      pcStack_a4 = (char *)0x53ab08;
      FUN_0055b280();
    }
    iVar5 = DAT_006b915c;
    if (DAT_006b915c == 0) {
      pcStack_a4 = (char *)0x53ab19;
      iVar5 = FUN_004bc480();
    }
    if (*(int *)(iVar5 + 0x3a4) == 0) {
      pcStack_a4 = (char *)0x0;
      acStack_78[0] = local_8d;
      pcStack_a8 = (char *)0x53ab38;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      pcStack_a4 = (char *)(~uVar8 - 1);
      pcStack_a8 = &DAT_006b3f70;
      pcStack_ac = (char *)0x53ab56;
      FUN_004040f0();
      pcStack_a4 = acStack_78;
      local_4._0_1_ = 4;
      pcStack_a8 = (char *)0x130;
      pcStack_ac = s___AdamSource_AdamApplication_h_0068e58c;
      pcStack_b0 = s_m_Game_0068e584;
      puStack_b4 = (undefined1 *)0x53ab77;
      pcVar6 = (code *)FUN_005a07f0();
      puStack_b4 = (undefined1 *)0x53ab79;
      (*pcVar6)();
      local_4 = CONCAT31(local_4._1_3_,3);
      pcStack_a4 = (char *)0x1;
      pcStack_a8 = (char *)0x53ab8f;
      FUN_004040a0();
    }
    iVar5 = *(int *)(iVar5 + 0x3a4);
    pcStack_3c = *(char **)(iVar5 + 0x810);
    if (pcStack_3c != (char *)0x0) {
      *(int *)(pcStack_3c + 0x14) = *(int *)(pcStack_3c + 0x14) + 1;
    }
    pcStack_a4 = (char *)0x1;
    local_4._0_1_ = 5;
    pcStack_a8 = *(char **)(iStack_54 + 0x18);
    pcStack_ac = (char *)0x53abbf;
    FUN_0053b6b0();
    piVar1 = (int *)(iVar5 + 0xdc);
    if (*(int *)(iVar5 + 0xdc) != 0) {
      uStack_64 = 0;
      fStack_8c = 0.0;
      pcStack_88 = (char *)0x3f800000;
      puStack_84 = (undefined1 *)0x0;
      fStack_80 = 1.0;
      if (*piVar1 == 0) {
        pcStack_a4 = (char *)0x0;
        acStack_78[0] = local_8d;
        pcStack_a8 = (char *)0x53ac0a;
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
        pcStack_a4 = (char *)(~uVar8 - 1);
        pcStack_a8 = &DAT_006b3f70;
        pcStack_ac = (char *)0x53ac28;
        FUN_004040f0();
        pcStack_a4 = acStack_78;
        local_4._0_1_ = 6;
        pcStack_a8 = (char *)0xb6;
        pcStack_ac = s___AdamSource_DaviRC_h_0068d638;
        pcStack_b0 = s_m_Pointer_0068d62c;
        puStack_b4 = (undefined1 *)0x53ac49;
        pcVar6 = (code *)FUN_005a07f0();
        puStack_b4 = (undefined1 *)0x53ac4b;
        (*pcVar6)();
        local_4._0_1_ = 5;
        pcStack_a4 = (char *)0x1;
        pcStack_a8 = (char *)0x53ac61;
        FUN_004040a0();
      }
      pcStack_a4 = (char *)0x53ac6b;
      uStack_60 = FUN_00439d60();
      uStack_5c = 0;
      if (*piVar1 == 0) {
        pcStack_a4 = (char *)0x0;
        acStack_78[0] = local_8d;
        pcStack_a8 = (char *)0x53ac8a;
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
        pcStack_a4 = (char *)(~uVar8 - 1);
        pcStack_a8 = &DAT_006b3f70;
        pcStack_ac = (char *)0x53aca8;
        FUN_004040f0();
        pcStack_a4 = acStack_78;
        local_4._0_1_ = 7;
        pcStack_a8 = (char *)0xb6;
        pcStack_ac = s___AdamSource_DaviRC_h_0068d638;
        pcStack_b0 = s_m_Pointer_0068d62c;
        puStack_b4 = (undefined1 *)0x53acc9;
        pcVar6 = (code *)FUN_005a07f0();
        puStack_b4 = (undefined1 *)0x53accb;
        (*pcVar6)();
        local_4._0_1_ = 5;
        pcStack_a4 = (char *)0x1;
        pcStack_a8 = (char *)0x53ace1;
        FUN_004040a0();
      }
      pcStack_a4 = (char *)0x53aceb;
      uStack_58 = FUN_00439e20();
      pcStack_a4 = (char *)0x0;
      pcStack_ac = (char *)&uStack_64;
      pcStack_a8 = (char *)0x437f0000;
      fStack_bc = fStack_8c;
      puStack_7c = (undefined1 *)&puStack_c0;
      puStack_c0 = puStack_84;
      fStack_b8 = (float)pcStack_88;
      puStack_b4 = puStack_84;
      pcStack_b0 = (char *)fStack_80;
      fStack_c8 = 7.684462e-39;
      piStack_c4 = piVar1;
      FUN_00449760();
      piStack_c4 = (int *)0x53ad2e;
      FUN_005614e0();
    }
    pcStack_a4 = (char *)0x0;
    pcStack_ac = (char *)&uStack_64;
    pcStack_a8 = (char *)0x437f0000;
    puStack_c0 = (undefined1 *)&fStack_bc;
    fStack_8c = 0.0;
    pcStack_88 = (char *)0x3ea8f5c3;
    fStack_bc = 0.0;
    puStack_84 = (undefined1 *)0x0;
    uStack_64 = 0;
    uStack_5c = 0;
    fStack_b8 = 0.33;
    fStack_80 = 0.09583333;
    puStack_b4 = (undefined1 *)0x0;
    piStack_c4 = (int *)(param_1 + 0x6c);
    puStack_7c = (undefined1 *)&puStack_c0;
    uStack_60 = 0x100;
    pcStack_b0 = (char *)0x3dc44444;
    uStack_58 = 0x2e;
    fStack_c8 = 7.684632e-39;
    FUN_00449760();
    piStack_c4 = (int *)0x53ada8;
    FUN_005614e0();
    pcStack_a4 = (char *)0x0;
    pcStack_ac = (char *)&uStack_64;
    pcStack_a8 = (char *)0x437f0000;
    fStack_8c = 0.32990003;
    pcStack_88 = (char *)0x3f28f5c3;
    fStack_bc = 0.32990003;
    puStack_7c = (undefined1 *)&puStack_c0;
    puStack_c0 = (undefined1 *)0x3f28f5c3;
    piStack_c4 = (int *)(param_1 + 0x6c);
    fStack_b8 = 0.66;
    uStack_5c = 0x31;
    puStack_b4 = (undefined1 *)0x0;
    uStack_58 = 0x5f;
    pcStack_b0 = (char *)0x3dc44444;
    fStack_c8 = 7.68476e-39;
    FUN_00449760();
    piStack_c4 = (int *)0x53ae03;
    FUN_005614e0();
    pcStack_a4 = (char *)0x0;
    pcStack_ac = (char *)&uStack_64;
    pcStack_a8 = (char *)0x437f0000;
    fStack_8c = 0.6599;
    pcStack_88 = (char *)0x3f800000;
    fStack_bc = 0.6599;
    puStack_7c = (undefined1 *)&puStack_c0;
    puStack_c0 = (undefined1 *)0x3f28ef35;
    fStack_b8 = 1.0;
    uStack_5c = 0x62;
    uStack_58 = 0x90;
    puStack_b4 = (undefined1 *)0x0;
    pcStack_b0 = (char *)0x3dc44444;
    piStack_c4 = (int *)(param_1 + 0x6c);
    fStack_c8 = 7.684888e-39;
    FUN_00449760();
    piStack_c4 = (int *)0x53ae5e;
    FUN_005614e0();
    fStack_8c = 0.0;
    pcStack_88 = (char *)0x3ea8f5c3;
    puStack_84 = (undefined1 *)0x3f6dddde;
    uStack_64 = 0;
    uStack_5c = 0;
    pcStack_a4 = (char *)0x0;
    pcStack_ac = (char *)&uStack_64;
    pcStack_a8 = (char *)0x437f0000;
    puStack_c0 = (undefined1 *)&fStack_bc;
    fStack_80 = 1.0;
    fStack_bc = 0.0;
    uStack_60 = 0x100;
    uStack_58 = 0x22;
    fStack_b8 = 0.33;
    piStack_c4 = (int *)(param_1 + 0x70);
    puStack_b4 = (undefined1 *)0x3f6dddde;
    puStack_7c = (undefined1 *)&puStack_c0;
    pcStack_b0 = (char *)0x3f800000;
    fStack_c8 = 7.685061e-39;
    FUN_00449760();
    piStack_c4 = (int *)0x53aeda;
    FUN_005614e0();
    pcStack_a4 = (char *)0x0;
    pcStack_ac = (char *)&uStack_64;
    pcStack_a8 = (char *)0x437f0000;
    fStack_8c = 0.33;
    pcStack_88 = (char *)0x3f28f5c3;
    fStack_bc = 0.33;
    puStack_7c = (undefined1 *)&puStack_c0;
    puStack_c0 = (undefined1 *)0x3f28f5c3;
    piStack_c4 = (int *)(param_1 + 0x70);
    fStack_b8 = 0.66;
    uStack_5c = 0x25;
    puStack_b4 = (undefined1 *)0x3f6dddde;
    uStack_58 = 0x47;
    pcStack_b0 = (char *)0x3f800000;
    fStack_c8 = 7.685189e-39;
    FUN_00449760();
    piStack_c4 = (int *)0x53af35;
    FUN_005614e0();
    pcStack_a4 = (char *)0x0;
    pcStack_ac = (char *)&uStack_64;
    pcStack_a8 = (char *)0x437f0000;
    fStack_8c = 0.66;
    pcStack_88 = (char *)0x3f800000;
    fStack_bc = 0.66;
    puStack_7c = (undefined1 *)&puStack_c0;
    puStack_c0 = (undefined1 *)0x3f28f5c3;
    fStack_b8 = 1.0;
    uStack_5c = 0x4a;
    uStack_58 = 0x6c;
    puStack_b4 = (undefined1 *)0x3f6dddde;
    pcStack_b0 = (char *)0x3f800000;
    piStack_c4 = (int *)(param_1 + 0x70);
    fStack_c8 = 7.685316e-39;
    FUN_00449760();
    piStack_c4 = (int *)0x53af90;
    FUN_005614e0();
    if (*(char *)(param_1 + 0x28) == '\0') {
      fStack_8c = *(float *)(param_1 + 0x2c);
      pcStack_88 = *(char **)(param_1 + 0x30);
      puStack_84 = *(undefined1 **)(param_1 + 0x34);
      fStack_80 = *(float *)(param_1 + 0x38);
      pcStack_a4 = (char *)0xffffffff;
      pcStack_a8 = (char *)0x0;
      pcStack_ac = (char *)(*(int *)(iStack_54 + 0x14) + 0x50);
      pcStack_b0 = (char *)0x53b037;
      FUN_0040cc00();
    }
    else {
      pcStack_a4 = (char *)0x1;
      fStack_8c = *(float *)(param_1 + 0x4c);
      pcStack_88 = *(char **)(param_1 + 0x50);
      puStack_84 = *(undefined1 **)(param_1 + 0x54);
      uVar8 = 0xffffffff;
      fStack_80 = *(float *)(param_1 + 0x58);
      pcVar9 = s_Even_wachten____006a1098;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      pcVar9 = (char *)(~uVar8 - 1);
      pcStack_ac = (char *)0x53afd2;
      pcStack_a8 = pcVar9;
      cVar4 = FUN_00401940();
      if (cVar4 != '\0') {
        pcVar10 = s_Even_wachten____006a1098;
        pcVar12 = pcStack_34;
        for (uVar8 = (uint)pcVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar8 = (uint)pcVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar12 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar12 = pcVar12 + 1;
        }
        pcStack_a8 = (char *)0x53aff9;
        pcStack_a4 = pcVar9;
        FUN_00404190();
      }
    }
    pcVar9 = pcStack_3c;
    if (pcStack_3c == (char *)0x0) {
      pcStack_a4 = pcStack_3c;
      acStack_78[0] = local_8d;
      pcStack_a8 = (char *)0x53b051;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\0');
      pcStack_a4 = (char *)(~uVar8 - 1);
      pcStack_a8 = &DAT_006b3f70;
      pcStack_ac = (char *)0x53b06f;
      FUN_004040f0();
      pcStack_a4 = acStack_78;
      local_4._0_1_ = 8;
      pcStack_a8 = (char *)0xb6;
      pcStack_ac = s___AdamSource_DaviRC_h_0068d638;
      pcStack_b0 = s_m_Pointer_0068d62c;
      puStack_b4 = (undefined1 *)0x53b090;
      pcVar6 = (code *)FUN_005a07f0();
      puStack_b4 = (undefined1 *)0x53b092;
      (*pcVar6)();
      local_4._0_1_ = 5;
      pcStack_a4 = (char *)0x1;
      pcStack_a8 = (char *)0x53b0a8;
      FUN_004040a0();
    }
    pcStack_a4 = (char *)(*(int *)(iStack_54 + 0x14) + 0x50);
    pcStack_a8 = (char *)0x53b0ba;
    fVar14 = (float10)FUN_004b21b0();
    pcStack_a4 = (char *)0x0;
    acStack_78[0] = local_8d;
    fStack_40 = (float)(((float10)1.0 - fVar14) * (float10)0.5);
    pcStack_a8 = (char *)0x53b0dd;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcStack_a4 = (char *)0x1;
    pcVar10 = "y9jkl_|1!NJY";
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar4 != '\0');
    pcVar10 = (char *)(~uVar8 - 1);
    pcStack_ac = (char *)0x53b0fa;
    pcStack_a8 = pcVar10;
    cVar4 = FUN_00401940();
    if (cVar4 != '\0') {
      puVar11 = &DAT_0064f6dc;
      puVar13 = puStack_74;
      for (uVar8 = (uint)pcVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar8 = (uint)pcVar10 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      pcStack_a8 = (char *)0x53b121;
      pcStack_a4 = pcVar10;
      FUN_00404190();
      pcVar9 = pcStack_3c;
    }
    local_4._0_1_ = 9;
    uVar3 = (undefined1)local_4;
    local_4._0_1_ = 9;
    if (pcVar9 == (char *)0x0) {
      local_50[0] = local_8d;
      pcStack_a8 = (char *)0x53b143;
      pcStack_a4 = pcVar9;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar4 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar4 != '\0');
      pcStack_a4 = (char *)(~uVar8 - 1);
      pcStack_a8 = &DAT_006b3f70;
      pcStack_ac = (char *)0x53b161;
      FUN_004040f0();
      pcStack_a4 = local_50;
      local_4._0_1_ = 10;
      pcStack_a8 = (char *)0xb6;
      pcStack_ac = s___AdamSource_DaviRC_h_0068d638;
      pcStack_b0 = s_m_Pointer_0068d62c;
      puStack_b4 = (undefined1 *)0x53b182;
      pcVar6 = (code *)FUN_005a07f0();
      puStack_b4 = (undefined1 *)0x53b184;
      (*pcVar6)();
      local_4._0_1_ = 9;
      pcStack_a4 = (char *)0x1;
      pcStack_a8 = (char *)0x53b19a;
      FUN_004040a0();
      uVar3 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar3;
    pcStack_a4 = acStack_78;
    pcStack_a8 = (char *)0x53b1a6;
    fVar14 = (float10)FUN_004b1fc0();
    pcStack_a4 = (char *)0x1;
    local_4._0_1_ = 5;
    fStack_68 = (float)(((float10)0.09583333 - fVar14) * (float10)0.5);
    pcStack_a8 = (char *)0x53b1c9;
    FUN_004040a0();
    fStack_68 = fStack_68 - 0.010416667;
    if (pcVar9 == (char *)0x0) {
      local_50[0] = local_8d;
      pcStack_a8 = (char *)0x53b1ed;
      pcStack_a4 = pcVar9;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      pcStack_a4 = (char *)(~uVar8 - 1);
      pcStack_a8 = &DAT_006b3f70;
      pcStack_ac = (char *)0x53b20b;
      FUN_004040f0();
      pcStack_a4 = local_50;
      local_4._0_1_ = 0xb;
      pcStack_a8 = (char *)0xb6;
      pcStack_ac = s___AdamSource_DaviRC_h_0068d638;
      pcStack_b0 = s_m_Pointer_0068d62c;
      puStack_b4 = (undefined1 *)0x53b22c;
      pcVar6 = (code *)FUN_005a07f0();
      puStack_b4 = (undefined1 *)0x53b22e;
      (*pcVar6)();
      local_4._0_1_ = 5;
      pcStack_a4 = (char *)0x1;
      pcStack_a8 = (char *)0x53b244;
      FUN_004040a0();
    }
    pcStack_a4 = (char *)0x0;
    puStack_b4 = (undefined1 *)fStack_8c;
    pcStack_b0 = pcStack_88;
    pcStack_ac = puStack_84;
    pcStack_a8 = (char *)fStack_80;
    fStack_b8 = fStack_68;
    puStack_c0 = acStack_38;
    fStack_bc = fStack_40;
    piStack_c4 = (int *)0x53b27f;
    FUN_004b15c0();
    pcStack_a4 = (char *)0x0;
    acStack_78[0] = local_8d;
    pcStack_a8 = (char *)0x53b292;
    FUN_004040a0();
    uVar8 = 0xffffffff;
    pcStack_a4 = (char *)0x1;
    pcVar9 = "y9jkl_|1!NJY";
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar4 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar4 != '\0');
    pcVar9 = (char *)(~uVar8 - 1);
    pcStack_ac = (char *)0x53b2af;
    pcStack_a8 = pcVar9;
    cVar4 = FUN_00401940();
    if (cVar4 != '\0') {
      puVar11 = &DAT_0064f6dc;
      for (uVar8 = (uint)pcVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puStack_74 = *puVar11;
        puVar11 = puVar11 + 1;
        puStack_74 = puStack_74 + 1;
      }
      for (uVar8 = (uint)pcVar9 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puStack_74 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puStack_74 = (undefined4 *)((int)puStack_74 + 1);
      }
      pcStack_a8 = (char *)0x53b2d6;
      pcStack_a4 = pcVar9;
      FUN_00404190();
    }
    local_4._0_1_ = 0xc;
    uVar3 = (undefined1)local_4;
    local_4._0_1_ = 0xc;
    if (param_4 == 0) {
      pcStack_a4 = (char *)0x0;
      local_50[0] = local_8d;
      pcStack_a8 = (char *)0x53b2fc;
      FUN_004040a0();
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar4 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar4 != '\0');
      pcStack_a4 = (char *)(~uVar8 - 1);
      pcStack_a8 = &DAT_006b3f70;
      pcStack_ac = (char *)0x53b31a;
      FUN_004040f0();
      pcStack_a4 = local_50;
      local_4._0_1_ = 0xd;
      pcStack_a8 = (char *)0xb6;
      pcStack_ac = s___AdamSource_DaviRC_h_0068d638;
      pcStack_b0 = s_m_Pointer_0068d62c;
      puStack_b4 = (undefined1 *)0x53b33b;
      pcVar6 = (code *)FUN_005a07f0();
      puStack_b4 = (undefined1 *)0x53b33d;
      (*pcVar6)();
      local_4._0_1_ = 0xc;
      pcStack_a4 = (char *)0x1;
      pcStack_a8 = (char *)0x53b353;
      FUN_004040a0();
      uVar3 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar3;
    pcStack_a4 = acStack_78;
    pcStack_a8 = (char *)0x53b364;
    fVar14 = (float10)FUN_004b1fc0();
    pcStack_a4 = (char *)0x1;
    local_4 = CONCAT31(local_4._1_3_,5);
    param_3 = (float)(fVar14 + fVar14 + (float10)param_3);
    pcStack_a8 = (char *)0x53b387;
    FUN_004040a0();
    fStack_68 = 0.0;
    while( true ) {
      fVar2 = fStack_68;
      iVar5 = *(int *)(iStack_54 + 0x14);
      if (*(int *)(iVar5 + 0x44) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(iVar5 + 0x48) - *(int *)(iVar5 + 0x44) >> 2;
      }
      if (iVar7 <= (int)fStack_68) break;
      if ((int)fStack_68 < 0) {
LAB_0053b3c1:
        pcStack_a4 = (char *)0x0;
        local_50[0] = local_8d;
        pcStack_a8 = (char *)0x53b3d3;
        FUN_004040a0();
        uVar8 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar4 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar4 != '\0');
        pcStack_a4 = (char *)(~uVar8 - 1);
        pcStack_a8 = &DAT_006b3f70;
        pcStack_ac = (char *)0x53b3f1;
        FUN_004040f0();
        pcStack_a4 = local_50;
        local_4._0_1_ = 0xe;
        pcStack_a8 = (char *)0xfb;
        pcStack_ac = s_D__Work_RCHorror_AdamSource_Adam_006a1030;
        pcStack_b0 = s_a_Index_>__0____a_Index_<_GetIte_006a106c;
        puStack_b4 = (undefined1 *)0x53b412;
        pcVar6 = (code *)FUN_005a07f0();
        puStack_b4 = (undefined1 *)0x53b414;
        (*pcVar6)();
        local_4 = CONCAT31(local_4._1_3_,5);
        pcStack_a4 = (char *)0x1;
        pcStack_a8 = (char *)0x53b42a;
        FUN_004040a0();
      }
      else {
        pcStack_a4 = (char *)0x53b3bd;
        iVar7 = FUN_0044e4c0();
        if (iVar7 <= (int)fVar2) goto LAB_0053b3c1;
      }
      piVar1 = *(int **)(*(int *)(iVar5 + 0x44) + (int)fVar2 * 4);
      fStack_40 = (float)CONCAT31(fStack_40._1_3_,(float)*(int *)(iStack_54 + 0x18) == fVar2);
      if (((char)piVar1[10] == '\0') || (*(char *)(param_1 + 0x28) != '\0')) {
        puVar11 = (undefined4 *)(param_1 + 0x4c);
      }
      else {
        puVar11 = (undefined4 *)(param_1 + 0x3c);
      }
      piStack_c4 = (int *)*puVar11;
      puStack_cc = (undefined1 *)puVar11[1];
      puStack_14 = (undefined1 *)&pcStack_a4;
      fStack_bc = (float)puVar11[2];
      fStack_b8 = (float)puVar11[3];
      puStack_7c = param_2;
      pcStack_a4 = *(char **)(param_1 + 0x6c);
      if (pcStack_a4 != (char *)0x0) {
        *(int *)(pcStack_a4 + 0x14) = *(int *)(pcStack_a4 + 0x14) + 1;
      }
      puStack_b4 = *(undefined1 **)(param_1 + 0x5c);
      local_4._0_1_ = 0xf;
      pcStack_b0 = *(char **)(param_1 + 0x60);
      pcStack_ac = *(char **)(param_1 + 100);
      pcStack_a8 = *(char **)(param_1 + 0x68);
      fStack_c8 = fStack_40;
      puStack_10 = (undefined1 *)&puStack_cc;
      puStack_c0 = puStack_cc;
      fStack_80 = fStack_b8;
      FUN_00449760(&param_4);
      local_4 = CONCAT31(local_4._1_3_,5);
      (**(code **)(*piVar1 + 8))(&puStack_7c,&param_3);
      fStack_68 = (float)((int)fStack_68 + 1);
      param_1 = local_28;
    }
    local_4 = CONCAT31(local_4._1_3_,3);
    if ((pcStack_3c != (char *)0x0) &&
       (iVar5 = *(int *)(pcStack_3c + 0x14), *(int *)(pcStack_3c + 0x14) = iVar5 + -1,
       iVar5 + -1 == 0)) {
      pcStack_a4 = (char *)0x0;
      pcStack_a8 = (char *)0x53b531;
      FUN_005abfc0();
    }
    if (pcStack_34 != (char *)0x0) {
      pcStack_a4 = pcStack_34 + -1;
      cVar4 = pcStack_34[-1];
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        pcStack_a8 = (char *)0x53b553;
        FUN_005fe5f0();
      }
      else {
        *pcStack_a4 = cVar4 + -1;
      }
    }
    pcStack_34 = (char *)0x0;
    uStack_30 = 0;
    uStack_2c = 0;
    if (iStack_20 != 0) {
      pcStack_a4 = (char *)(iStack_20 + -1);
      cVar4 = *(char *)(iStack_20 + -1);
      if ((cVar4 == '\0') || (cVar4 == -1)) {
        pcStack_a8 = (char *)0x53b587;
        FUN_005fe5f0();
      }
      else {
        *pcStack_a4 = cVar4 + -1;
      }
    }
    iStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
  }
  local_4 = 0xffffffff;
  if ((param_4 != 0) &&
     (iVar5 = *(int *)(param_4 + 0x14) + -1, *(int *)(param_4 + 0x14) = iVar5, iVar5 == 0)) {
    pcStack_a4 = (char *)0x0;
    pcStack_a8 = (char *)0x53b5cd;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return;
}

