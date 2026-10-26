/*
 * FUN_0055dcc0 at 0055dcc0
 * undefined FUN_0055dcc0(void)
 * Address ranges: 0055dcc0-0055ebb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0055dcc0(int param_1,undefined1 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  code *pcVar7;
  INT_PTR IVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  undefined1 local_16d;
  undefined1 local_16c [4];
  char *local_168;
  uint local_164;
  undefined4 local_160;
  uint uStack_15c;
  undefined1 local_158 [4];
  int iStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined1 local_144 [16];
  undefined1 local_134 [16];
  undefined1 local_124 [16];
  undefined1 local_114 [16];
  undefined1 local_104 [16];
  undefined1 local_f4 [36];
  undefined1 local_d0 [108];
  undefined1 local_64 [88];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f85f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_006b3f70;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
  local_4 = 0;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_Engine_006a1858;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar9 - 1);
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_Driver_006a3084;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Driver_006a3084,~uVar9 - 1);
  local_4._0_1_ = 2;
  FUN_005acaf0(local_124,local_114,&DAT_006b3f70,local_144,0);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_006b3f70;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
  local_4._0_1_ = 7;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = s_Engine_006a1858;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_Engine_006a1858,~uVar9 - 1);
  local_4._0_1_ = 8;
  FUN_004040a0(0);
  uVar9 = 0xffffffff;
  pcVar11 = &DAT_006a2430;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006a2430,~uVar9 - 1);
  local_4._0_1_ = 9;
  FUN_005acaf0(local_f4,local_104,&DAT_006b3f70,local_134,0);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  *param_2 = 0;
  if (*(int *)(param_1 + 0x100) == 0) {
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = s_CAdamEngine__SelectDevice____Tes_006a304c;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEngine__SelectDevice____Tes_006a304c,~uVar9 - 1);
    local_4._0_1_ = 0xe;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x440,local_16c);
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_005acca0();
    ExceptionList = local_c;
    return 0;
  }
  cVar2 = FUN_0055ebc0(*(int *)(param_1 + 0x100),param_1 + 0x110);
  if (cVar2 == '\0') {
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = s_CAdamEngine__SelectDevice____Que_006a3018;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_CAdamEngine__SelectDevice____Que_006a3018,~uVar9 - 1);
    local_4._0_1_ = 0x10;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x447,local_16c);
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_005acca0();
    ExceptionList = local_c;
    return 0;
  }
  FUN_00558270();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    bVar1 = false;
    uVar9 = 0;
    pcVar11 = &DAT_006bb35c;
    do {
      if (DAT_006c8d98 <= uVar9) {
        if (!bVar1) {
          FUN_004040a0(0);
          uVar9 = 0xffffffff;
          pcVar11 = s_CAdamEngine__SelectDevice____Can_006a2f08;
          goto code_r0x0055e212;
        }
        break;
      }
      if (*pcVar11 != '\0') {
        FUN_00517430();
        iVar3 = FUN_004337e0();
        if (iVar3 != 0) {
          uVar4 = FUN_005ae390(local_158,s_CAdamEngine__SelectDevice____For_006a2fd4,uVar9);
          local_4._0_1_ = 0x11;
          FUN_005aff00(uVar4);
          local_4._0_1_ = 0xb;
          FUN_004040a0(1);
        }
        DAT_006c8ddc = 0;
        bVar1 = true;
        DAT_006c8dd8 = uVar9;
      }
      uVar9 = uVar9 + 1;
      pcVar11 = pcVar11 + 0xb7c;
    } while (!bVar1);
    goto LAB_0055e0e0;
  }
  FUN_00557b80();
  iVar3 = FUN_004337e0();
  if ((iVar3 == 0) || (DAT_006a2400 == '\0')) {
    iVar5 = FUN_00517430();
    iVar3 = *(int *)(iVar5 + 100);
    if (iVar3 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar3;
    }
    if (iVar3 != 0) {
      FUN_005afe30(s_CAdamEngine__SelectDevice____pro_006a2d8c);
    }
    local_16c[0] = local_64[0];
    FUN_004040a0(0);
    FUN_0040cc00(local_64,0,0xffffffff);
    DAT_006c8dd8 = FUN_0055db10(local_16c);
    FUN_004040a0(1);
    if (DAT_006c8dd8 == 0xffffffff) {
      DAT_006c8dd8 = 0;
      DAT_006c8ddc = DAT_006ba8f4 >> 1;
    }
    else {
      local_16c[0] = local_d0[0];
      FUN_004040a0(0);
      FUN_0040cc00(local_d0,0,0xffffffff);
      local_4._0_1_ = 0x18;
      DAT_006c8ddc = FUN_0055db60(DAT_006c8dd8,local_16c);
      local_4._0_1_ = 0xb;
      FUN_004040a0(1);
    }
    IVar8 = DialogBoxParamA(*(HINSTANCE *)(param_1 + 0x1b0),(LPCSTR)0x65,*(HWND *)(param_1 + 0x1ac),
                            (DLGPROC)&LAB_0055d730,0);
    if (IVar8 == -1) {
      *param_2 = 1;
      local_4 = CONCAT31(local_4._1_3_,4);
      FUN_005acca0();
      local_4 = 0xffffffff;
      FUN_005acca0();
      ExceptionList = local_c;
      return 0;
    }
    goto LAB_0055e0e0;
  }
  FUN_00517430();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    iVar5 = FUN_00557760();
    iVar3 = *(int *)(iVar5 + 100);
    if (iVar3 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar3;
    }
    uVar4 = FUN_005ae390(local_158,s_CAdamEngine__SelectDevice____pro_006a2eb8,iVar3);
    local_4._0_1_ = 0x13;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
  }
  iVar5 = FUN_00557760();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 < 0) {
LAB_0055e39b:
    local_16c[0] = local_16d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar11 = &DAT_006b3f70;
      pcVar12 = local_168;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4._0_1_ = 0x14;
    pcVar7 = (code *)FUN_005a07f0(s__int__GET_GLOBAL_SETTING_Display_006a2b1c,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x472,local_16c);
    (*pcVar7)();
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
  }
  else {
    iVar5 = FUN_00557760();
    iVar3 = *(int *)(iVar5 + 100);
    if (iVar3 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar3;
    }
    if (3 < iVar3) goto LAB_0055e39b;
  }
  iVar5 = FUN_00557dc0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 < 0) {
LAB_0055e48c:
    local_16c[0] = local_16d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar11 = &DAT_006b3f70;
      pcVar12 = local_168;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4._0_1_ = 0x15;
    pcVar7 = (code *)FUN_005a07f0(s__int__GET_GLOBAL_SETTING_Display_006a2e40,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x484,local_16c);
    (*pcVar7)();
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
  }
  else {
    iVar5 = FUN_00557dc0();
    iVar3 = *(int *)(iVar5 + 100);
    if (iVar3 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar3 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar3;
    }
    if (2 < iVar3) goto LAB_0055e48c;
  }
  iVar5 = FUN_00557dc0();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  *(int *)(param_1 + 0x198) = iVar3;
  cVar2 = FUN_0055fc90(&uStack_15c,s_320x200_006a266c,s_640x480_006a2644);
  if (cVar2 == '\0') {
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = s_CAdamEngine__SelectDevice____Aut_006a2e04;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar11 = s_CAdamEngine__SelectDevice____Aut_006a2e04;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)local_168 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        local_168 = local_168 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_168 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        local_168 = local_168 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4._0_1_ = 0x16;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x495,local_16c);
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_005acca0();
    ExceptionList = local_c;
    return 0;
  }
  cVar2 = FUN_0055f630(uStack_15c,&uStack_148,s_320x200_006a266c,s_640x480_006a2644);
  if (cVar2 == '\0') {
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = s_CAdamEngine__SelectDevice____Aut_006a2dcc;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar11 = s_CAdamEngine__SelectDevice____Aut_006a2dcc;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)local_168 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        local_168 = local_168 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *local_168 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        local_168 = local_168 + 1;
      }
      FUN_00404190(uVar9);
    }
    local_4._0_1_ = 0x17;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x49b,local_16c);
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_005acca0();
    ExceptionList = local_c;
    return 0;
  }
  DAT_006c8dd8 = uStack_15c;
  DAT_006c8ddc = uStack_148;
LAB_0055e0e0:
  iVar5 = FUN_00517430();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_158,s_CAdamEngine__SelectDevice____res_006a2f9c,DAT_006c8dd8,
                         DAT_006c8ddc);
    local_4._0_1_ = 0x19;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
  }
  if (DAT_006c8d98 <= DAT_006c8dd8) {
    local_16c[0] = local_16d;
    uVar9 = 0xffffffff;
    local_168 = (char *)0x0;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    local_164 = 0;
    local_160 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
    local_4._0_1_ = 0x1a;
    pcVar7 = (code *)FUN_005a07f0(s_MODULE_DialogResultDriver_>__0___006a2f44,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x4c9,local_16c);
    (*pcVar7)();
    local_4._0_1_ = 0xb;
    if (local_168 != (char *)0x0) {
      cVar2 = local_168[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0(local_168 + -1);
      }
      else {
        local_168[-1] = cVar2 + -1;
      }
    }
  }
  if ((&DAT_006ba8f4)[DAT_006c8dd8 * 0x2df] <= DAT_006c8ddc) {
    local_16c[0] = local_16d;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar2 != '\0');
    uVar9 = ~uVar9 - 1;
    cVar2 = FUN_00401940(uVar9,1);
    if (cVar2 != '\0') {
      pcVar11 = &DAT_006b3f70;
      pcVar12 = local_168;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar12 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar12 = pcVar12 + 1;
      }
      local_168[uVar9] = '\0';
      local_164 = uVar9;
    }
    local_4._0_1_ = 0x1b;
    pcVar7 = (code *)FUN_005a07f0(s_MODULE_DialogResultMode_>__0____M_006a2d14,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x4ca,local_16c);
    (*pcVar7)();
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
  }
  iVar5 = FUN_00517430();
  iVar3 = *(int *)(iVar5 + 100);
  if (iVar3 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar3 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar3;
  }
  if (iVar3 != 0) {
    uVar4 = FUN_005ae390(local_158,s_CAdamEngine__SelectDevice____res_006a2cd8,
                         &DAT_006ba7ec + DAT_006c8dd8 * 0xb7c,
                         &DAT_006ba948 + DAT_006c8dd8 * 0xb7c + DAT_006c8ddc * 0x81);
    local_4._0_1_ = 0x1c;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 0xb;
    if (iStack_154 != 0) {
      cVar2 = *(char *)(iStack_154 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(iStack_154 + -1));
      }
      else {
        *(char *)(iStack_154 + -1) = cVar2 + -1;
      }
    }
    iStack_154 = 0;
    uStack_150 = 0;
    uStack_14c = 0;
  }
  *(undefined4 *)(param_1 + 0x114) = (&DAT_006ba7e8)[DAT_006c8dd8 * 0x2df];
  *(undefined4 *)(param_1 + 0x118) = (&DAT_006ba8f8)[DAT_006c8ddc + DAT_006c8dd8 * 0x2df];
  *(undefined1 *)(param_1 + 0x121) = (&DAT_006bb35d)[DAT_006c8dd8 * 0xb7c];
  *(undefined1 *)(param_1 + 0x120) = (&DAT_006bb35c)[DAT_006c8dd8 * 0xb7c];
  *(undefined1 *)(param_1 + 0x122) = (&DAT_006bb35e)[DAT_006c8dd8 * 0xb7c];
  *(undefined1 *)(param_1 + 0x123) = (&DAT_006bb35f)[DAT_006c8dd8 * 0xb7c];
  *(undefined1 *)(param_1 + 0x124) = (&DAT_006bb360)[DAT_006c8dd8 * 0xb7c];
  *(undefined4 *)(param_1 + 0x11c) = (&DAT_006ba8f0)[DAT_006c8dd8 * 0x2df];
  FUN_005acdb0(&DAT_006ba86d + DAT_006c8dd8 * 0xb7c);
  FUN_005acdb0(&DAT_006ba948 + DAT_006c8dd8 * 0xb7c + DAT_006c8ddc * 0x81);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005acca0();
  local_4 = 0xffffffff;
  FUN_005acca0();
  ExceptionList = local_c;
  return 1;
  while( true ) {
    uVar9 = uVar9 - 1;
    cVar2 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    if (cVar2 == '\0') break;
code_r0x0055e212:
    if (uVar9 == 0) break;
  }
  uVar9 = ~uVar9 - 1;
  cVar2 = FUN_00401940(uVar9,1);
  if (cVar2 != '\0') {
    pcVar11 = s_CAdamEngine__SelectDevice____Can_006a2f08;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)local_168 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      local_168 = local_168 + 4;
    }
    for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *local_168 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      local_168 = local_168 + 1;
    }
    FUN_00404190(uVar9);
  }
  local_4._0_1_ = 0x12;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x461,local_16c);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_005acca0();
  local_4 = 0xffffffff;
  FUN_005acca0();
  ExceptionList = local_c;
  return 0;
}

