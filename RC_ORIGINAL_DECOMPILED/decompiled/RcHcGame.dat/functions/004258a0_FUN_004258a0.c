/*
 * FUN_004258a0 at 004258a0
 * undefined FUN_004258a0(void)
 * Address ranges: 004258a0-00425d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004258a0(float *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_bd;
  undefined1 local_bc [16];
  float local_ac [4];
  float local_9c;
  undefined1 local_98 [4];
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  int local_84;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006228f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004253c0(local_88,param_2);
  local_4 = 0;
  FUN_00425570();
  local_4._0_1_ = 1;
  local_bc[0] = local_bd;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_VisualRange_0068fb04;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_VisualRange_0068fb04,~uVar5 - 1);
  local_4._0_1_ = 2;
  iVar2 = FUN_005ac9d0(local_bc,local_98,0xfa,local_88,0);
  local_4._0_1_ = 3;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar2 + 0x14,&local_bd);
    *(float *)(iVar2 + 0x60) = (float)fVar8;
    local_ac[2] = (float)fVar8;
  }
  else {
    local_ac[2] = *(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 2;
  FUN_005acca0();
  local_4._0_1_ = 1;
  FUN_004040a0();
  local_bc[0] = local_bd;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_SenseRange_0068faf8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_SenseRange_0068faf8,~uVar5 - 1);
  local_4._0_1_ = 4;
  iVar2 = FUN_005ac9d0(local_bc,local_98,0x32,local_88,0);
  local_4._0_1_ = 5;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar2 + 0x14,&local_bd);
    *(float *)(iVar2 + 0x60) = (float)fVar8;
    local_ac[1] = (float)fVar8;
  }
  else {
    local_ac[1] = *(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 4;
  FUN_005acca0();
  local_4._0_1_ = 1;
  FUN_004040a0();
  local_bc[0] = local_bd;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_MinPlayerDistance_0068f3fc;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MinPlayerDistance_0068f3fc,~uVar5 - 1);
  local_4._0_1_ = 6;
  iVar2 = FUN_005ac9d0(local_bc,local_98,0,local_88,0);
  local_4._0_1_ = 7;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar2 + 0x14,&local_bd);
    *(float *)(iVar2 + 0x60) = (float)fVar8;
    local_9c = (float)fVar8;
  }
  else {
    local_9c = *(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 6;
  FUN_005acca0();
  local_4._0_1_ = 1;
  FUN_004040a0();
  local_bc[0] = local_bd;
  FUN_004040a0();
  uVar5 = 0xffffffff;
  pcVar7 = s_ViewAngle_0068faec;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ViewAngle_0068faec,~uVar5 - 1);
  local_4._0_1_ = 8;
  iVar2 = FUN_005ac8b0(local_bc,local_98,0x40490fdb,local_88,0);
  local_4._0_1_ = 9;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar2 + 0x14,&local_bd);
    *(float *)(iVar2 + 0x60) = (float)fVar8;
    local_ac[3] = (float)fVar8;
  }
  else {
    local_ac[3] = *(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 8;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_004040a0();
  local_ac[0] = (float)param_3;
  if (local_ac[2] < local_9c) {
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_bc,s__s__info_m_VisualRange_<_info_m__0068fab0,puVar3,
                         (double)local_ac[2],(double)local_9c);
    local_4._0_1_ = 10;
    FUN_004c43e0(uVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0();
    local_ac[2] = (local_9c + local_9c) - local_ac[2];
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_bc,s__s__info_m_VisualRange_set_to__f_0068fa8c,puVar3,
                         (double)local_ac[2]);
    local_4._0_1_ = 0xb;
    FUN_004c43e0(uVar4);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0();
  }
  if (local_94 != 0) {
    cVar1 = *(char *)(local_94 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(local_94 + -1) = cVar1 + -1;
    }
  }
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  if (local_84 != 0) {
    cVar1 = *(char *)(local_84 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(local_84 + -1) = cVar1 + -1;
    }
  }
  pfVar6 = local_ac;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_1 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    param_1 = param_1 + 1;
  }
  ExceptionList = local_c;
  return;
}

