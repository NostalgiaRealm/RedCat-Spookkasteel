/*
 * FUN_00577750 at 00577750
 * undefined FUN_00577750(void)
 * Address ranges: 00577750-00577b70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00577750(float *param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  code *pcVar7;
  void *pvVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined4 *puVar17;
  undefined1 local_55;
  float local_54;
  float fStack_50;
  float fStack_4c;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar11 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0064193a;
  pvStack_c = ExceptionList;
  local_54 = 0.0;
  iVar6 = DAT_006c8de0;
  ExceptionList = &pvStack_c;
  if (DAT_006c8de0 == 0) {
    ExceptionList = &pvStack_c;
    iVar6 = FUN_0055b280();
  }
  if (*(int *)(iVar6 + 0xf8) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_55);
    local_4 = 0;
    pcVar7 = (code *)FUN_005a07f0(s_m_ActorDefMgr_00694c9c,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x182,local_1c);
    (*pcVar7)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar6 = param_3 + 0x14;
  cVar5 = FUN_0049fe10(iVar6);
  if (cVar5 != '\0') {
    pvVar8 = operator_new(0x304);
    local_4 = 1;
    if (pvVar8 == (void *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      param_3._0_1_ = SUB41(pvVar8,0);
      local_1c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar13 = 0xffffffff;
      pcVar16 = &DAT_006b3f70;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar5 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      } while (cVar5 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar13 - 1);
      local_54 = 1.4013e-45;
      local_4 = CONCAT31(local_4._1_3_,2);
      piVar9 = (int *)FUN_0056f830(local_1c,iVar6);
    }
    local_4 = 0xffffffff;
    if (((uint)local_54 & 1) != 0) {
      FUN_004040a0(1);
    }
    pfVar10 = (float *)(**(code **)((int)*param_1 + 0x48))(auStack_38);
    local_54 = *pfVar10;
    fStack_50 = pfVar10[1];
    fVar1 = param_1[4];
    fVar2 = param_1[1];
    fStack_4c = pfVar10[2];
    iVar6 = FUN_0060a4a0();
    fVar3 = *param_1;
    fVar4 = param_1[3];
    fStack_50 = (fVar1 - fVar2) * (float)(iVar6 % 10000) * 0.0001 + fVar2 + fStack_50;
    iVar6 = FUN_0060a4a0();
    fVar1 = param_1[2];
    fVar2 = param_1[5];
    local_54 = (fVar4 - fVar3) * (float)(iVar6 % 10000) * 0.0001 + fVar3 + local_54;
    iVar6 = FUN_0060a4a0();
    fStack_4c = (fVar2 - fVar1) * (float)(iVar6 % 10000) * 0.0001 + fVar1 + fStack_4c;
    (**(code **)(*piVar9 + 0x4c))(&local_54);
    iVar6 = FUN_0060a4a0();
    fStack_44 = (float)(iVar6 % 10000) * 0.006 - 30.0;
    iVar6 = FUN_0060a4a0();
    fStack_40 = (float)(iVar6 % 10000) * 0.002 + 50.0;
    iVar6 = FUN_0060a4a0();
    fStack_3c = (float)(iVar6 % 10000) * 0.006 - 30.0;
    FUN_005b2f20();
    fVar1 = *(float *)(iVar11 + 0x30);
    fVar2 = *(float *)(iVar11 + 0x2c);
    iVar11 = FUN_0060a4a0();
    FUN_005b2fa0((fVar1 - fVar2) * (float)(iVar11 % 10000) * 0.0001 + fVar2);
    piVar9[0xa5] = (int)fStack_44;
    piVar9[0xa6] = (int)fStack_40;
    piVar9[0xa7] = (int)fStack_3c;
    FUN_00502350(1);
    piVar12 = (int *)FUN_004042e0(&local_54);
    local_4 = 4;
    if (*piVar12 == 0) {
      param_3._0_1_ = SUB41(piVar12,0);
      auStack_2c[0] = (undefined1)param_3;
      FUN_004040a0(0);
      uVar13 = 0xffffffff;
      pcVar16 = &DAT_006b3f70;
      do {
        if (uVar13 == 0) break;
        uVar13 = uVar13 - 1;
        cVar5 = *pcVar16;
        pcVar16 = pcVar16 + 1;
      } while (cVar5 != '\0');
      uVar13 = ~uVar13 - 1;
      cVar5 = FUN_00401940(uVar13,1);
      if (cVar5 != '\0') {
        puVar15 = (undefined4 *)&DAT_006b3f70;
        puVar17 = puStack_28;
        for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *puVar17 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar17 = puVar17 + 1;
        }
        for (uVar14 = uVar13 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined1 *)puVar17 = *(undefined1 *)puVar15;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        }
        *(undefined1 *)((int)puStack_28 + uVar13) = 0;
        uStack_24 = uVar13;
      }
      local_4._0_1_ = 5;
      pcVar7 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_2c);
      (*pcVar7)();
      local_4 = CONCAT31(local_4._1_3_,4);
      if (puStack_28 != (undefined4 *)0x0) {
        cVar5 = *(char *)((int)puStack_28 + -1);
        if ((cVar5 == '\0') || (cVar5 == -1)) {
          FUN_005fe5f0((char *)((int)puStack_28 + -1));
        }
        else {
          *(char *)((int)puStack_28 + -1) = cVar5 + -1;
        }
      }
      puStack_28 = (undefined4 *)0x0;
      uStack_24 = 0;
      uStack_20 = 0;
    }
    FUN_004f41c0(piVar9);
    local_4 = 0xffffffff;
    if ((local_54 != 0.0) &&
       (iVar11 = *(int *)((int)local_54 + 0x14) + -1, *(int *)((int)local_54 + 0x14) = iVar11,
       iVar11 == 0)) {
      FUN_005abfc0(0);
    }
  }
  ExceptionList = pvStack_c;
  return;
}

