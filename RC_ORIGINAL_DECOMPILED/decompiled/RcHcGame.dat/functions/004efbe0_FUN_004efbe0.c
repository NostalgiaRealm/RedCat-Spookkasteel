/*
 * FUN_004efbe0 at 004efbe0
 * undefined FUN_004efbe0(void)
 * Address ranges: 004efbe0-004eff87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_004efbe0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 param_5,uint param_6)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  char *pcVar13;
  undefined1 local_31;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633fc1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_30 = param_1;
  FUN_005ab4a0();
  local_4 = 0;
  FUN_0044e4a0(&local_31);
  param_1[9] = 0;
  param_1[10] = &LAB_004efbb0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  piVar8 = param_1 + 0xd;
  *piVar8 = 0;
  local_4._0_1_ = 3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = param_4;
  param_1[0x11] = param_5;
  *param_1 = &PTR_FUN_0064f418;
  FUN_00519ef0();
  iVar3 = FUN_004337e0();
  if (iVar3 == 0) {
    if (*piVar8 == 0) {
      uVar6 = FUN_004f1030(param_3);
      piVar4 = (int *)FUN_004b09f0(&param_4,param_2,uVar6,0,param_6 & 0xff);
      iVar3 = *piVar8;
      local_4._0_1_ = 4;
      if (iVar3 != *piVar4) {
        if ((iVar3 != 0) &&
           (iVar9 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar9, iVar9 == 0)) {
          FUN_005abfc0(0);
        }
        *piVar8 = *piVar4;
        FUN_005844b0();
      }
      local_4._0_1_ = 3;
      if (param_4 != 0) {
        FUN_004098d0();
      }
      if (*piVar8 == 0) {
        local_2c = CONCAT31(local_2c._1_3_,(undefined1)param_4);
        FUN_004040a0(0);
        uVar10 = 0xffffffff;
        pcVar13 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
        local_4._0_1_ = 5;
        pcVar5 = (code *)FUN_005a07f0(s_m_FontHandle_IsNotNull___0069c268,
                                      s_D__Work_RCHorror_AdamSource_Adam_0069c284,0x37,&local_2c);
        (*pcVar5)();
        local_4._0_1_ = 3;
        FUN_004040a0(1);
      }
    }
  }
  else {
    FUN_005181b0();
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      FUN_005afe30(s_CAdamTextPrinter__didn_t_create_f_0069c2b4);
    }
  }
  FUN_005ae390(local_1c,s_NoFont_0069c260);
  local_4._0_1_ = 6;
  uVar1 = (undefined1)local_4;
  local_4._0_1_ = 6;
  if (*piVar8 != 0) {
    if (*piVar8 == 0) {
      FUN_00409810(&DAT_006b3f70,&param_4);
      local_4._0_1_ = 7;
      pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    &local_2c);
      (*pcVar5)();
      local_4._0_1_ = 6;
      FUN_004040a0(1);
      uVar1 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar1;
    uVar6 = FUN_0059bd20();
    FUN_0040cc00(uVar6,0,0xffffffff);
    uVar1 = (undefined1)local_4;
  }
  local_4._0_1_ = uVar1;
  puVar7 = local_18;
  if (local_18 == (undefined1 *)0x0) {
    puVar7 = &DAT_0064a3b4;
  }
  uVar6 = FUN_005ae390(&local_2c,s__s_s_Characters_0069c250,puVar7);
  local_4._0_1_ = 8;
  piVar8 = (int *)FUN_004f0c80(&param_4,uVar6,8,1);
  iVar3 = param_1[0xc];
  local_4._0_1_ = 9;
  if (iVar3 != *piVar8) {
    if ((iVar3 != 0) &&
       (iVar9 = *(int *)(iVar3 + 0x14) + -1, *(int *)(iVar3 + 0x14) = iVar9, iVar9 == 0)) {
      FUN_005abfc0(0);
    }
    param_1[0xc] = *piVar8;
    FUN_005844b0();
  }
  local_4._0_1_ = 8;
  if (param_4 != 0) {
    FUN_004098d0();
    param_4 = 0;
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_004040a0(1);
  if (param_1[0xc] == 0) {
    local_2c = CONCAT31(local_2c._1_3_,(undefined1)param_4);
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar13 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10 - 1;
    param_4 = uVar10;
    cVar2 = FUN_00401940(uVar10,1);
    if (cVar2 != '\0') {
      puVar12 = (undefined4 *)&DAT_006b3f70;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puStack_28 = *puVar12;
        puVar12 = puVar12 + 1;
        puStack_28 = puStack_28 + 1;
      }
      for (uVar11 = uVar10 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puStack_28 = *(undefined1 *)puVar12;
        puVar12 = (undefined4 *)((int)puVar12 + 1);
        puStack_28 = (undefined4 *)((int)puStack_28 + 1);
      }
      FUN_00404190(uVar10);
    }
    local_4._0_1_ = 10;
    pcVar5 = (code *)FUN_005a07f0(s_m_CharactersBitmapHandle_IsNotNu_0069c228,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069c284,0x45,&local_2c);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004040a0(1);
  }
  local_2c = 0x42fe0000;
  puStack_28 = (undefined4 *)0x42fe0000;
  uStack_24 = 0x437f0000;
  uStack_20 = 0x437f0000;
  FUN_0050c050(0x42fe0000,0x42fe0000,0x437f0000,0x437f0000);
  FUN_004f0200(10,10);
  if (local_18 != (undefined1 *)0x0) {
    cVar2 = local_18[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

