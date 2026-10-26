/*
 * FUN_00484030 at 00484030
 * undefined FUN_00484030(void)
 * Address ranges: 00484030-004847a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00484030(int *param_1,char param_2)

{
  char cVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  DWORD DVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  float10 fVar14;
  float10 fVar15;
  char unaff_retaddr;
  undefined4 *puStack_28;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [12];
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062988e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_2 != '\0') {
    ExceptionList = &pvStack_c;
    if (param_1[0x17] != 0) {
      ExceptionList = &pvStack_c;
      FUN_00484850();
      FUN_005fe5f0();
    }
    param_1[0x17] = 0;
    pvVar2 = operator_new(0x5c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      pvVar2 = (void *)0x0;
    }
    else {
      FUN_00409810();
      local_4._0_1_ = 1;
      FUN_00409810();
      local_4 = CONCAT31(local_4._1_3_,2);
      *(undefined4 *)((int)pvVar2 + 0x20) = 0xffffffff;
      FUN_004041b0();
      *(undefined4 *)((int)pvVar2 + 0x34) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x38) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x3c) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x40) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x44) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x48) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x4c) = 0xffffffff;
      *(undefined4 *)((int)pvVar2 + 0x50) = 0;
      *(undefined4 *)((int)pvVar2 + 0x54) = 0;
      *(undefined4 *)((int)pvVar2 + 0x58) = 3;
    }
    local_4 = 0xffffffff;
    param_1[0x17] = (int)pvVar2;
    piVar3 = (int *)FUN_00453d20();
    local_4 = 3;
    if (param_1[0x18] != *piVar3) {
      if (param_1[0x18] != 0) {
        FUN_004098d0();
      }
      param_1[0x18] = *piVar3;
      FUN_005844b0();
    }
    local_4 = 0xffffffff;
    FUN_0057d310();
  }
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar4 = FUN_004bc480();
  }
  if (param_2 == '\0') {
    if (param_1[0x17] == 0) {
      FUN_004040a0();
      iVar8 = -1;
      pcVar13 = &DAT_006b3f70;
      do {
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4 = 4;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    iVar8 = param_1[0x17];
    DVar6 = timeGetTime();
    *(DWORD *)(iVar8 + 0x44) = DVar6;
  }
  if ((*(char *)(iVar4 + 0x3c) != '\0') && (param_1[0x18] != 0)) {
    if (param_1[0x18] == 0) {
      FUN_00409810();
      local_4 = 5;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    FUN_004f5170();
  }
  (**(code **)(*param_1 + 0x20))();
  if (param_2 == '\0') {
    if (param_1[0x17] == 0) {
      FUN_004040a0();
      iVar4 = -1;
      pcVar13 = &DAT_006b3f70;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        cVar1 = *pcVar13;
        pcVar13 = pcVar13 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0();
      local_4 = 6;
      pcVar5 = (code *)FUN_005a07f0();
      (*pcVar5)();
      local_4 = 0xffffffff;
      FUN_004040a0();
    }
    iVar4 = param_1[0x17];
    DVar6 = timeGetTime();
    *(DWORD *)(iVar4 + 0x38) = DVar6;
  }
  FUN_005630f0();
  (**(code **)(*param_1 + 0x1c))();
  cVar1 = FUN_00592e60();
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      if (param_1[0x17] == 0) {
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar13 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        cVar1 = FUN_00401940();
        if (cVar1 != '\0') {
          puVar12 = (undefined4 *)&DAT_006b3f70;
          for (uVar10 = ~uVar9 - 1 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *puStack_28 = *puVar12;
            puVar12 = puVar12 + 1;
            puStack_28 = puStack_28 + 1;
          }
          for (uVar9 = ~uVar9 - 1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puStack_28 = *(undefined1 *)puVar12;
            puVar12 = (undefined4 *)((int)puVar12 + 1);
            puStack_28 = (undefined4 *)((int)puStack_28 + 1);
          }
          FUN_00404190();
        }
        local_4 = 7;
        pcVar5 = (code *)FUN_005a07f0();
        (*pcVar5)();
        local_4 = 0xffffffff;
        FUN_004040a0();
      }
      iVar4 = param_1[0x17];
      FUN_00515930();
      iVar8 = FUN_004337e0();
      if (iVar8 != 0) {
        if (DAT_006b915c == 0) {
          FUN_004bc480();
        }
        iVar8 = DAT_006c8de0;
        if (DAT_006c8de0 == 0) {
          iVar8 = FUN_0055b280();
        }
        FUN_0040cf10();
        FUN_00453d20();
        local_4 = 8;
        FUN_00421430();
        fVar14 = (float10)FUN_00567b60();
        FUN_00421430();
        fVar15 = (float10)FUN_00567b60();
        FUN_0044e4a0();
        iVar11 = -1;
        pcVar13 = &DAT_0069347c;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        local_4._0_1_ = 9;
        FUN_004040f0();
        uVar7 = FUN_00564d50();
        local_4._0_1_ = 10;
        FUN_0045db40(uVar7,0);
        local_4._0_1_ = 9;
        FUN_004040a0();
        iVar11 = -1;
        pcVar13 = &DAT_00693478;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        FUN_00484c30();
        if (*(char *)(iVar8 + 0x123) != '\0') {
          FUN_00484ec0();
          FUN_005bca20();
          uVar7 = FUN_005ae390();
          local_4._0_1_ = 0xb;
          FUN_0045db40(uVar7,0);
          local_4._0_1_ = 9;
          FUN_004040a0();
        }
        FUN_00421430();
        FUN_004f3e80();
        uVar7 = FUN_005ae390(auStack_1c,s_FPS___2_1f____2_1f_____2_1f___s__0069343c,
                             (double)(float)fVar15,(double)(float)fVar14,
                             (double)*(float *)(iVar4 + 0x54));
        local_4._0_1_ = 0xc;
        FUN_0045db40(uVar7,0);
        local_4._0_1_ = 9;
        FUN_004040a0();
        FUN_004e2170();
        uVar7 = FUN_005ae390();
        local_4._0_1_ = 0xd;
        FUN_0045db40(uVar7,0);
        local_4._0_1_ = 9;
        FUN_004040a0();
        FUN_005600c0();
        piVar3 = (int *)FUN_005bb560();
        if (0 < *piVar3) {
          FUN_005bb560();
          FUN_005ae390(auStack_1c,s_MIRRORS__02d_______00693414);
          local_4._0_1_ = 0xe;
          FUN_005600c0();
          local_4._0_1_ = 9;
          FUN_004040a0();
        }
        iVar4 = FUN_00484bd0();
        if ((iVar4 != 0) && (iVar4 = FUN_00484b80(), iVar4 != 0)) {
          FUN_004041b0();
          FUN_0040cc00(param_1 + 0xb,0);
          iVar4 = -1;
          pcVar13 = &DAT_006b3f70;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0();
        }
        FUN_00409810();
        local_4._0_1_ = 0xf;
        FUN_005600c0();
        local_4 = CONCAT31(local_4._1_3_,9);
        FUN_004040a0();
        timeGetTime();
        cVar1 = FUN_00484cf0();
        if (cVar1 == '\0') {
          iVar4 = -1;
          pcVar13 = &DAT_006b3f70;
          do {
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            cVar1 = *pcVar13;
            pcVar13 = pcVar13 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0();
        }
        local_4 = CONCAT31(local_4._1_3_,8);
        FUN_004040a0();
        local_4 = 0xffffffff;
        FUN_0057d310();
      }
    }
  }
  else {
    FUN_00592f50();
  }
  FUN_00449760();
  (**(code **)(*param_1 + 0x10))();
  FUN_005637b0();
  if (unaff_retaddr == '\0') {
    if (param_1[0x17] == 0) {
      FUN_00409810(&DAT_006b3f70,&stack0x00000000);
      puStack_8 = (undefined1 *)0x10;
      pcVar5 = (code *)FUN_005a07f0(s_m_Info_00693488,s_D__Work_RCHorror_RCSource_RcGSta_00693490,
                                    0x6d,auStack_20);
      (*pcVar5)();
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_004040a0();
    }
    FUN_004847b0();
  }
  ExceptionList = pvStack_10;
  return;
}

