/*
 * FUN_00573990 at 00573990
 * undefined FUN_00573990(void)
 * Address ranges: 00573990-005747a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00573990(undefined4 *param_1,char *param_2,char **param_3)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  char *pcStack_88;
  char local_6c [4];
  char *local_68;
  char local_5c [4];
  char *local_58;
  char local_4c [4];
  char *local_48;
  char local_3c [4];
  char *local_38;
  char local_2c [4];
  char *local_28;
  char local_1c [4];
  char *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00641496;
  pvStack_c = ExceptionList;
  pcStack_88 = param_2;
  ExceptionList = &pvStack_c;
  FUN_00501cb0();
  pcVar9 = (char *)param_3;
  param_1[0x3e] = param_3;
  pcStack_88 = (char *)0x0;
  local_4 = 0;
  *(char *)(param_1 + 0x53) = (char)param_2;
  FUN_004040a0();
  *(undefined1 *)((int)param_1 + 0x15d) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  pcStack_88 = (char *)0x0;
  local_4._0_1_ = 1;
  *(char *)(param_1 + 0x5b) = (char)param_2;
  FUN_004040a0();
  param_1[0x5f] = 0;
  *(undefined1 *)(param_1 + 0x84) = 0;
  *(undefined1 *)((int)param_1 + 0x211) = 0;
  param_1[0x85] = 0;
  pcStack_88 = (char *)0x0;
  local_4._0_1_ = 3;
  *(char *)(param_1 + 0x86) = (char)param_2;
  FUN_004040a0();
  pcStack_88 = (char *)0x0;
  local_4._0_1_ = 4;
  *(char *)(param_1 + 0x8a) = (char)param_2;
  FUN_004040a0();
  *(undefined1 *)(param_1 + 0x8e) = 1;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *param_1 = &PTR_FUN_0064f9ec;
  local_4 = CONCAT31(local_4._1_3_,9);
  *(bool *)(param_1 + 0x50) = *(int *)(pcVar9 + 0x28) != 0;
  *(bool *)(param_1 + 0x57) = *(int *)(pcVar9 + 0x20) != 0;
  param_1[0x3f] = *(undefined4 *)(pcVar9 + 0x10);
  param_1[0x40] = *(undefined4 *)(pcVar9 + 0x14);
  param_1[0x41] = *(undefined4 *)(pcVar9 + 0x18);
  param_1[0x48] = 0;
  param_1[0x49] = 0x3f800000;
  param_1[0x4a] = 0;
  if ((*(int *)(pcVar9 + 0x4c) < 0) || (3 < *(int *)(pcVar9 + 0x4c))) {
    pcStack_88 = (char *)0x0;
    local_6c[0] = (char)param_2;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcStack_88 = (char *)0x1;
    pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a4a38;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    param_3 = (char **)(~uVar7 - 1);
    cVar1 = FUN_00401940(param_3);
    if (cVar1 != '\0') {
      pcStack_88 = (char *)param_3;
      pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a4a38;
      pcVar10 = local_68;
      for (uVar7 = (uint)param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = (uint)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00404190();
    }
    pcStack_88 = local_6c;
    local_4._0_1_ = 10;
    FUN_005035a0();
    pcStack_88 = (char *)0x1;
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_004040a0();
    pcVar9[0x4c] = '\0';
    pcVar9[0x4d] = '\0';
    pcVar9[0x4e] = '\0';
    pcVar9[0x4f] = '\0';
  }
  param_1[0x52] = *(undefined4 *)(pcVar9 + 0x4c);
  if (*(int *)(pcVar9 + 0x1c) == 0) {
    *(undefined1 *)((int)param_1 + 0x141) = 1;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x141) = 0;
    puVar11 = *(undefined4 **)(pcVar9 + 0x1c);
    param_1[0x42] = *puVar11;
    param_1[0x43] = puVar11[1];
    param_1[0x44] = puVar11[2];
  }
  switch(param_1[0x52]) {
  case 0:
    if (*(float *)(pcVar9 + 0x50) < 0.0) {
      pcStack_88 = (char *)0x0;
      local_6c[0] = (char)param_2;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcStack_88 = (char *)0x1;
      pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a49f4;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      param_3 = (char **)(~uVar7 - 1);
      cVar1 = FUN_00401940(param_3);
      if (cVar1 != '\0') {
        pcStack_88 = (char *)param_3;
        pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a49f4;
        for (uVar7 = (uint)param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)local_68 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          local_68 = local_68 + 4;
        }
        for (uVar7 = (uint)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_68 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          local_68 = local_68 + 1;
        }
        FUN_00404190();
      }
      pcStack_88 = local_6c;
      local_4._0_1_ = 0xb;
      FUN_005035a0();
      pcStack_88 = (char *)0x1;
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_004040a0();
      pcVar9[0x50] = '\0';
      pcVar9[0x51] = '\0';
      pcVar9[0x52] = ' ';
      pcVar9[0x53] = 'A';
    }
    if (*(float *)(pcVar9 + 0x48) <= 0.0) {
      pcStack_88 = (char *)0x0;
      local_5c[0] = (char)param_2;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcStack_88 = (char *)0x1;
      pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a49b8;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      param_3 = (char **)(~uVar7 - 1);
      cVar1 = FUN_00401940(param_3);
      if (cVar1 != '\0') {
        pcStack_88 = (char *)param_3;
        pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a49b8;
        for (uVar7 = (uint)param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)local_58 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          local_58 = local_58 + 4;
        }
        for (uVar7 = (uint)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_58 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          local_58 = local_58 + 1;
        }
        FUN_00404190();
      }
      pcStack_88 = local_5c;
      local_4._0_1_ = 0xc;
      FUN_005035a0();
      pcStack_88 = (char *)0x1;
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_004040a0();
      pcVar9[0x48] = '\0';
      pcVar9[0x49] = '\0';
      pcVar9[0x4a] = -0x80;
      pcVar9[0x4b] = '?';
    }
    if (0.0 <= (float)*(int *)(pcVar9 + 0x44)) {
      if (255.0 < (float)*(int *)(pcVar9 + 0x44)) {
        pcStack_88 = (char *)0x0;
        local_3c[0] = (char)param_2;
        FUN_004040a0();
        uVar7 = 0xffffffff;
        pcStack_88 = (char *)0x1;
        pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a4978;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        param_3 = (char **)(~uVar7 - 1);
        cVar1 = FUN_00401940(param_3);
        if (cVar1 != '\0') {
          pcStack_88 = (char *)param_3;
          pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a4978;
          for (uVar7 = (uint)param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *(undefined4 *)local_38 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            local_38 = local_38 + 4;
          }
          for (uVar7 = (uint)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
            *local_38 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            local_38 = local_38 + 1;
          }
          FUN_00404190();
        }
        pcStack_88 = local_3c;
        local_4._0_1_ = 0xe;
        FUN_005035a0();
        pcStack_88 = (char *)0x1;
        local_4 = CONCAT31(local_4._1_3_,9);
        FUN_004040a0();
        pcVar9[0x44] = -1;
        pcVar9[0x45] = '\0';
        pcVar9[0x46] = '\0';
        pcVar9[0x47] = '\0';
      }
    }
    else {
      pcStack_88 = (char *)0x0;
      local_4c[0] = (char)param_2;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcStack_88 = (char *)0x1;
      pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a4978;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      param_3 = (char **)(~uVar7 - 1);
      cVar1 = FUN_00401940(param_3);
      if (cVar1 != '\0') {
        pcStack_88 = (char *)param_3;
        pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a4978;
        for (uVar7 = (uint)param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)local_48 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          local_48 = local_48 + 4;
        }
        for (uVar7 = (uint)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_48 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          local_48 = local_48 + 1;
        }
        FUN_00404190();
      }
      pcStack_88 = local_4c;
      local_4._0_1_ = 0xd;
      FUN_005035a0();
      pcStack_88 = (char *)0x1;
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_004040a0();
      pcVar9[0x44] = '\0';
      pcVar9[0x45] = '\0';
      pcVar9[0x46] = '\0';
      pcVar9[0x47] = '\0';
    }
    if (*(float *)(pcVar9 + 0x24) < 0.0) {
      pcStack_88 = (char *)0x0;
      local_2c[0] = (char)param_2;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcStack_88 = (char *)0x1;
      pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a4938;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      param_3 = (char **)(~uVar7 - 1);
      cVar1 = FUN_00401940(param_3);
      if (cVar1 != '\0') {
        pcStack_88 = (char *)param_3;
        pcVar8 = s_CAdamEffectBeam__CAdamEffectBeam_006a4938;
        for (uVar7 = (uint)param_3 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)local_28 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          local_28 = local_28 + 4;
        }
        for (uVar7 = (uint)param_3 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *local_28 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          local_28 = local_28 + 1;
        }
        FUN_00404190();
      }
      pcStack_88 = local_2c;
      local_4._0_1_ = 0xf;
      FUN_005035a0();
      pcStack_88 = (char *)0x1;
      local_4 = CONCAT31(local_4._1_3_,9);
      FUN_004040a0();
      pcVar9[0x24] = '\0';
      pcVar9[0x25] = '\0';
      pcVar9[0x26] = '\0';
      pcVar9[0x27] = '\0';
    }
    param_3 = (char **)&DAT_006b3f70;
    param_1[0x4c] = *(undefined4 *)(pcVar9 + 0x34);
    param_1[0x4d] = *(undefined4 *)(pcVar9 + 0x38);
    param_1[0x4e] = *(undefined4 *)(pcVar9 + 0x3c);
    param_1[0x4f] = (float)*(int *)(pcVar9 + 0x44);
    param_1[0x4b] = *(undefined4 *)(pcVar9 + 0x48);
    param_1[0x51] = *(undefined4 *)(pcVar9 + 0x50);
    if (*(char **)(pcVar9 + 8) != (char *)0x0) {
      param_3 = (char **)*(char **)(pcVar9 + 8);
    }
    uVar7 = 0xffffffff;
    pcStack_88 = (char *)0x1;
    pcVar8 = (char *)param_3;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar8 = (char *)(~uVar7 - 1);
    cVar1 = FUN_00401940(pcVar8);
    if (cVar1 != '\0') {
      pcVar10 = (char *)param_3;
      pcVar12 = (char *)param_1[0x87];
      for (uVar7 = (uint)pcVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar7 = (uint)pcVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcStack_88 = pcVar8;
      FUN_00404190();
    }
    param_3 = (char **)&DAT_006b3f70;
    if (*(char **)(pcVar9 + 0xc) != (char *)0x0) {
      param_3 = (char **)*(char **)(pcVar9 + 0xc);
    }
    uVar7 = 0xffffffff;
    pcStack_88 = (char *)0x1;
    pcVar8 = (char *)param_3;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    pcVar8 = (char *)(~uVar7 - 1);
    cVar1 = FUN_00401940(pcVar8);
    if (cVar1 != '\0') {
      pcVar10 = (char *)param_3;
      pcVar12 = (char *)param_1[0x8b];
      for (uVar7 = (uint)pcVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar7 = (uint)pcVar8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcStack_88 = pcVar8;
      FUN_00404190();
    }
    param_3 = (char **)&DAT_006b3f70;
    if (*(char **)(pcVar9 + 0x30) != (char *)0x0) {
      param_3 = (char **)*(char **)(pcVar9 + 0x30);
    }
    uVar7 = 0xffffffff;
    pcStack_88 = (char *)0x1;
    pcVar9 = (char *)param_3;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)(~uVar7 - 1);
    cVar1 = FUN_00401940(pcVar9);
    if (cVar1 != '\0') {
      pcVar8 = (char *)param_3;
      pcVar10 = (char *)param_1[0x54];
      for (uVar7 = (uint)pcVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = (uint)pcVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcStack_88 = pcVar9;
      FUN_00404190();
    }
    pcStack_88 = (char *)0x5740b7;
    uVar2 = __ftol();
    param_1[0x59] = uVar2;
    break;
  case 1:
    param_1[0x4c] = 0x437f0000;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0x427c0000;
    param_1[0x4b] = 0x40000000;
    param_1[0x51] = 0;
    param_1[0x59] = 1000;
    goto LAB_005741b4;
  case 2:
    param_1[0x4c] = 0;
    param_1[0x4d] = 0x437f0000;
    param_1[0x4e] = 0x437f0000;
    param_1[0x4f] = 0x427c0000;
    param_1[0x4b] = 0x40000000;
    param_1[0x51] = 0;
    param_3 = (char **)&DAT_006b3f70;
    if (*(char **)(pcVar9 + 0x30) != (char *)0x0) {
      param_3 = (char **)*(char **)(pcVar9 + 0x30);
    }
    uVar7 = 0xffffffff;
    pcStack_88 = (char *)0x1;
    pcVar9 = (char *)param_3;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)(~uVar7 - 1);
    cVar1 = FUN_00401940(pcVar9);
    if (cVar1 != '\0') {
      pcVar8 = (char *)param_3;
      pcVar10 = (char *)param_1[0x54];
      for (uVar7 = (uint)pcVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = (uint)pcVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcStack_88 = pcVar9;
      FUN_00404190();
    }
    param_1[0x59] = 1000;
LAB_005741b4:
    pcStack_88 = (char *)0xffffffff;
    FUN_0040cc00(&DAT_006c8fb0,0);
    uVar7 = 0xffffffff;
    pcStack_88 = (char *)0x1;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)(~uVar7 - 1);
    cVar1 = FUN_00401940(pcVar9);
    if (cVar1 != '\0') {
      puVar11 = (undefined4 *)&DAT_006b3f70;
      puVar13 = (undefined4 *)param_1[0x8b];
      for (uVar7 = (uint)pcVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar13 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar7 = (uint)pcVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      pcStack_88 = pcVar9;
      FUN_00404190();
    }
    *(undefined1 *)((int)param_1 + 0x211) = 1;
    break;
  case 3:
    param_1[0x4c] = 0;
    param_1[0x4d] = 0x437f0000;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0x42b60000;
    param_1[0x4b] = 0x40800000;
    param_1[0x51] = 0x4cbebc20;
    param_1[0x59] = 0;
    pcStack_88 = (char *)0xffffffff;
    FUN_0040cc00(&DAT_006c8fa0,0);
    pcStack_88 = (char *)0xffffffff;
    FUN_0040cc00(&DAT_006c8f90,0);
    *(undefined1 *)(param_1 + 0x84) = 1;
    break;
  default:
    pcStack_88 = (char *)0x0;
    local_1c[0] = (char)param_2;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcStack_88 = (char *)0x1;
    pcVar9 = s_Invalid_case_0068d650;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcVar9 = (char *)(~uVar7 - 1);
    cVar1 = FUN_00401940(pcVar9);
    if (cVar1 != '\0') {
      pcVar8 = s_Invalid_case_0068d650;
      pcVar10 = local_18;
      for (uVar7 = (uint)pcVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = (uint)pcVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar10 = pcVar10 + 1;
      }
      pcStack_88 = pcVar9;
      FUN_00404190();
    }
    pcStack_88 = local_1c;
    local_4._0_1_ = 0x10;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a4908,0xae)
    ;
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,9);
    pcStack_88 = (char *)0x1;
    FUN_004040a0();
  }
  pcStack_88 = (char *)0x57432d;
  cVar1 = FUN_00553640();
  if (cVar1 != '\0') {
    iVar4 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      pcStack_88 = (char *)0x574344;
      iVar4 = FUN_0055b280();
    }
    if (*(int *)(iVar4 + 0xfc) == 0) {
      pcStack_88 = (char *)0x0;
      local_1c[0] = (char)param_2;
      FUN_004040a0();
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      pcStack_88 = (char *)(~uVar7 - 1);
      FUN_004040f0(&DAT_006b3f70);
      pcStack_88 = local_1c;
      local_4._0_1_ = 0x11;
      pcVar3 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,
                                    399);
      (*pcVar3)();
      local_4 = CONCAT31(local_4._1_3_,9);
      pcStack_88 = (char *)0x1;
      FUN_004040a0();
    }
    if (*(char *)(*(int *)(iVar4 + 0xfc) + 0x8c) != '\0') {
      pcStack_88 = (char *)0x5743d1;
      FUN_00576b60();
      goto LAB_00574458;
    }
  }
  pcStack_88 = (char *)0x0;
  local_1c[0] = (char)param_2;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcStack_88 = (char *)0x1;
  pcVar9 = s_Soundsystem_not_available_00692c8c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcVar9 = (char *)(~uVar7 - 1);
  cVar1 = FUN_00401940(pcVar9);
  if (cVar1 != '\0') {
    pcVar8 = s_Soundsystem_not_available_00692c8c;
    pcVar10 = local_18;
    for (uVar7 = (uint)pcVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = (uint)pcVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcStack_88 = pcVar9;
    FUN_00404190();
  }
  pcStack_88 = local_1c;
  local_4._0_1_ = 0x12;
  FUN_005035a0();
  pcStack_88 = (char *)0x1;
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004040a0();
LAB_00574458:
  pcStack_88 = (char *)0x0;
  local_1c[0] = (char)param_2;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcStack_88 = (char *)0x1;
  pcVar9 = (char *)&DAT_006a48fc;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcVar9 = (char *)(~uVar7 - 1);
  cVar1 = FUN_00401940(pcVar9);
  if (cVar1 != '\0') {
    pcVar8 = (char *)&DAT_006a48fc;
    pcVar10 = local_18;
    for (uVar7 = (uint)pcVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = (uint)pcVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    }
    pcStack_88 = pcVar9;
    FUN_00404190();
  }
  local_4._0_1_ = 0x13;
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_88 = (char *)0x5744ca;
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xd8) == 0) {
    pcStack_88 = (char *)0x0;
    local_2c[0] = (char)param_2;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcStack_88 = (char *)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    pcStack_88 = local_2c;
    local_4._0_1_ = 0x14;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4._0_1_ = 0x13;
    pcStack_88 = (char *)0x1;
    FUN_004040a0();
  }
  pcStack_88 = local_1c;
  piVar5 = (int *)FUN_0050d980(&param_3);
  iVar4 = param_1[0x5f];
  local_4._0_1_ = 0x15;
  if (iVar4 != *piVar5) {
    if ((iVar4 != 0) &&
       (iVar6 = *(int *)(iVar4 + 0x14) + -1, *(int *)(iVar4 + 0x14) = iVar6, iVar6 == 0)) {
      pcStack_88 = (char *)0x0;
      FUN_005abfc0();
    }
    iVar4 = *piVar5;
    param_1[0x5f] = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 0x14) = *(int *)(iVar4 + 0x14) + 1;
    }
  }
  local_4._0_1_ = 0x13;
  if (param_3 != (char **)0x0) {
    iVar4 = *(int *)((int)param_3 + 0x14);
    *(int *)((int)param_3 + 0x14) = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      pcStack_88 = (char *)0x0;
      FUN_005abfc0();
    }
    param_3 = (char **)0x0;
  }
  pcStack_88 = (char *)0x1;
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_004040a0();
  pcStack_88 = (char *)0x0;
  local_1c[0] = (char)param_2;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcStack_88 = (char *)0x1;
  pcVar9 = s_beam_a_bmp_006a48f0;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  pcVar9 = (char *)(~uVar7 - 1);
  cVar1 = FUN_00401940(pcVar9);
  if (cVar1 != '\0') {
    pcVar8 = s_beam_a_bmp_006a48f0;
    for (uVar7 = (uint)pcVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)local_18 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      local_18 = local_18 + 4;
    }
    for (uVar7 = (uint)pcVar9 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *local_18 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      local_18 = local_18 + 1;
    }
    pcStack_88 = pcVar9;
    FUN_00404190();
  }
  local_4._0_1_ = 0x16;
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_88 = (char *)0x574646;
    iVar4 = FUN_0055b280();
  }
  if (*(int *)(iVar4 + 0xd8) == 0) {
    pcStack_88 = (char *)0x0;
    local_2c[0] = (char)param_2;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    pcStack_88 = (char *)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    pcStack_88 = local_2c;
    local_4._0_1_ = 0x17;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4._0_1_ = 0x16;
    pcStack_88 = (char *)0x1;
    FUN_004040a0();
  }
  pcStack_88 = local_1c;
  FUN_0050d980(&param_2);
  pcStack_88 = (char *)0x1;
  local_4._0_1_ = 0x19;
  FUN_004040a0();
  if ((param_1[0x5f] != 0) && (param_2 != (char *)0x0)) {
    param_3 = &pcStack_88;
    pcStack_88 = param_2;
    if (param_2 != (char *)0x0) {
      *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
    }
    local_4._0_1_ = 0x19;
    FUN_00412de0();
    FUN_0050aea0();
  }
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0x3f800000;
  param_1[0x75] = 0x3f800000;
  param_1[0x76] = 0x3f800000;
  param_1[0x7e] = 0x3f800000;
  param_1[0x7f] = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  if ((param_2 != (char *)0x0) &&
     (iVar4 = *(int *)(param_2 + 0x14), *(int *)(param_2 + 0x14) = iVar4 + -1, iVar4 + -1 == 0)) {
    pcStack_88 = (char *)0x0;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

