/*
 * FUN_004a7360 at 004a7360
 * undefined FUN_004a7360(void)
 * Address ranges: 004a7360-004a7931
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a7360(int *param_1,float *param_2,int param_3,float *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  code *pcVar13;
  undefined1 *puVar14;
  uint uVar15;
  undefined1 *puVar16;
  char *pcVar17;
  float10 fVar18;
  undefined1 uStack_99;
  float local_94;
  float local_90;
  void *local_8c;
  float local_88;
  float local_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  undefined1 auStack_74 [4];
  undefined1 local_70 [12];
  int iStack_64;
  int local_60;
  int iStack_5c;
  undefined1 local_54 [4];
  int local_50;
  undefined1 auStack_48 [56];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dbcb;
  local_c = ExceptionList;
  bVar5 = false;
  ExceptionList = &local_c;
  if ((*(int *)(param_3 + 0x38) == 0) &&
     (ExceptionList = &local_c, *(char *)(param_3 + 0x3c) != '\0')) {
    puVar16 = &DAT_0064a3b4;
    if (*(undefined1 **)(param_3 + 0x18) != (undefined1 *)0x0) {
      puVar16 = *(undefined1 **)(param_3 + 0x18);
    }
    puVar14 = (undefined1 *)param_1[0x18];
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &DAT_0064a3b4;
    }
    puVar6 = (undefined1 *)param_1[0x1c];
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    ExceptionList = &local_c;
    uVar7 = FUN_005ae390(local_70,s_AddActorParticle____Actor__s___s_00695d28,puVar6,puVar14,puVar16
                        );
    local_4 = 0;
    FUN_005035a0(uVar7);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    *(undefined1 *)(param_3 + 0x3c) = 0;
  }
  piVar8 = (int *)FUN_004a19b0(&local_90);
  iVar10 = *piVar8;
  if (local_90 != 0.0) {
    FUN_004098d0();
  }
  if (iVar10 == 0) {
    puVar16 = *(undefined1 **)(param_3 + 0x18);
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = &DAT_0064a3b4;
    }
    puVar14 = &DAT_0064a3b4;
    if ((undefined1 *)param_1[0x18] != (undefined1 *)0x0) {
      puVar14 = (undefined1 *)param_1[0x18];
    }
    puVar6 = (undefined1 *)param_1[0x1c];
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar7 = FUN_005ae390(local_54,s_AddActorParticle____Actor__s___s_00695cd0,puVar6,puVar14,puVar16
                        );
    local_4 = 6;
    FUN_005035a0(uVar7);
    if (local_50 != 0) {
      cVar1 = *(char *)(local_50 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(local_50 + -1) = cVar1 + -1;
        ExceptionList = local_c;
        return;
      }
      FUN_005fe5f0((char *)(local_50 + -1));
    }
    ExceptionList = local_c;
    return;
  }
  local_8c = operator_new(0x304);
  local_4 = 1;
  if (local_8c == (void *)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    local_70[0] = iVar10 != 0;
    FUN_004040a0(0);
    uVar15 = 0xffffffff;
    pcVar17 = &DAT_006b3f70;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar15 - 1);
    bVar5 = true;
    local_4 = CONCAT31(local_4._1_3_,2);
    piVar8 = (int *)FUN_0056f830(local_70,param_3 + 0x14);
  }
  local_4 = 0xffffffff;
  if (bVar5) {
    FUN_004040a0(1);
  }
  if (param_4 == (float *)0x0) {
    pfVar9 = (float *)(**(code **)(*param_1 + 0x48))(&local_60);
    local_88 = *pfVar9;
    local_84 = pfVar9[1];
  }
  else {
    local_88 = *param_4;
    local_84 = param_4[1];
    pfVar9 = param_4;
  }
  local_80 = pfVar9[2];
  fVar2 = param_2[4];
  fVar3 = param_2[1];
  iVar10 = FUN_0060a4a0();
  fVar4 = *param_2;
  local_90 = param_2[3];
  local_84 = (fVar2 - fVar3) * (float)(iVar10 % 10000) * 0.0001 + fVar3 + local_84;
  iVar10 = FUN_0060a4a0();
  fVar2 = param_2[2];
  local_88 = (local_90 - fVar4) * (float)(iVar10 % 10000) * 0.0001 + fVar4 + local_88;
  local_90 = param_2[5];
  iVar10 = FUN_0060a4a0();
  local_80 = (local_90 - fVar2) * (float)(iVar10 % 10000) * 0.0001 + fVar2 + local_80;
  (**(code **)(*piVar8 + 0x4c))(&local_88);
  iStack_64 = param_1[0x54];
  iStack_5c = param_1[0x56];
  local_60 = param_1[0x55];
  FUN_0049cca0(iStack_64,local_60,iStack_5c);
  local_94 = 1.0;
  if (param_4 == (float *)0x0) {
    iVar11 = FUN_0060a4a0();
    local_80 = (float)(iVar11 % 10000) * 0.006 - 30.0;
    iVar11 = FUN_0060a4a0();
    fStack_7c = (float)(iVar11 % 10000) * 0.002 + 50.0;
    iVar11 = FUN_0060a4a0();
    fStack_78 = (float)(iVar11 % 10000) * 0.006 - 30.0;
  }
  else {
    iVar11 = FUN_0060a4a0();
    local_80 = (float)(iVar11 % 10000) * 0.008 - 40.0;
    iVar11 = FUN_0060a4a0();
    fStack_7c = (float)(iVar11 % 10000) * 0.008 - 40.0;
    iVar11 = FUN_0060a4a0();
    fStack_78 = (float)(iVar11 % 10000) * 0.008 - 40.0;
  }
  FUN_005b2f20();
  if (param_4 != (float *)0x0) {
    fVar18 = (float10)FUN_005b2e40();
    if (fVar18 < (float10)0.0) {
      local_94 = -1.0;
    }
  }
  local_90 = *(float *)(param_3 + 0x30);
  fVar2 = *(float *)(param_3 + 0x2c);
  iVar11 = FUN_0060a4a0();
  FUN_005b2fa0(((local_90 - fVar2) * (float)(iVar11 % 10000) * 0.0001 + fVar2) * local_94);
  piVar8[0xa5] = (int)local_80;
  piVar8[0xa6] = (int)fStack_7c;
  piVar8[0xa7] = (int)fStack_78;
  FUN_00502350(1);
  FUN_00571140(1,1);
  piVar8[0x87] = -1;
  piVar12 = (int *)FUN_004042e0(&local_90);
  puStack_8 = (undefined1 *)0x4;
  if (*piVar12 == 0) {
    uStack_99 = (undefined1)((uint)(iVar10 % 10000) >> 0x18);
    auStack_74[0] = uStack_99;
    FUN_004040a0(0);
    uVar15 = 0xffffffff;
    pcVar17 = &DAT_006b3f70;
    do {
      if (uVar15 == 0) break;
      uVar15 = uVar15 - 1;
      cVar1 = *pcVar17;
      pcVar17 = pcVar17 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar15 - 1);
    puStack_8._0_1_ = 5;
    pcVar13 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                   auStack_74);
    (*pcVar13)();
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,4);
    FUN_004040a0(1);
  }
  FUN_004f41c0(piVar8);
  puStack_8 = (undefined1 *)0xffffffff;
  if ((local_90 != 0.0) &&
     (iVar10 = *(int *)((int)local_90 + 0x14) + -1, *(int *)((int)local_90 + 0x14) = iVar10,
     iVar10 == 0)) {
    FUN_005abfc0(0);
  }
  FUN_0049d310(auStack_48);
  FUN_0049d480(auStack_48);
  ExceptionList = pvStack_10;
  return;
}

