/*
 * FUN_004d94e0 at 004d94e0
 * undefined FUN_004d94e0(void)
 * Address ranges: 004d94e0-004d9d3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004d94e0(float param_1,float *param_2)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  undefined1 local_155;
  float local_154;
  undefined8 local_150;
  undefined1 local_140 [16];
  float local_130;
  float local_12c;
  float local_128;
  undefined1 local_124 [16];
  undefined1 local_114 [4];
  char *local_110;
  undefined1 local_104 [4];
  char *local_100;
  undefined1 local_f4 [232];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631d89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_154 = param_1;
  if ((DAT_006b92a4 & 1) == 0) {
    DAT_006b92a4 = DAT_006b92a4 | 1;
    local_140[0] = local_155;
    ExceptionList = &local_c;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Wobble_00699d00;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Wobble_00699d00,~uVar5 - 1);
    local_150 = (double)CONCAT71(local_150._1_7_,local_155);
    local_4 = 0;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_TimeOffset_00699cf4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_TimeOffset_00699cf4,~uVar5 - 1);
    local_4._0_1_ = 1;
    uVar3 = FUN_00436f90(local_124);
    local_4._0_1_ = 2;
    iVar4 = FUN_005ac8b0(&local_150,local_140,0x3e99999a,uVar3,0);
    local_4._0_1_ = 3;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_155);
      *(float *)(iVar4 + 0x60) = (float)fVar10;
    }
    else {
      fVar10 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b92a0 = (float)fVar10;
    local_4._0_1_ = 2;
    FUN_005acca0();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((DAT_006b92a4 & 2) == 0) {
    DAT_006b92a4 = DAT_006b92a4 | 2;
    local_150 = (double)CONCAT71(local_150._1_7_,local_155);
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Wobble_00699d00;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Wobble_00699d00,~uVar5 - 1);
    local_4 = 4;
    local_140[0] = local_155;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_RunSizeX_00699ce8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_RunSizeX_00699ce8,~uVar5 - 1);
    local_4._0_1_ = 5;
    uVar3 = FUN_00436f90(local_124);
    local_4._0_1_ = 6;
    iVar4 = FUN_005ac8b0(local_140,&local_150,0x3827c5ac,uVar3,0);
    local_4._0_1_ = 7;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_155);
      *(float *)(iVar4 + 0x60) = (float)fVar10;
    }
    else {
      fVar10 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b929c = (float)fVar10;
    local_4._0_1_ = 6;
    FUN_005acca0();
    local_4._0_1_ = 5;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((DAT_006b92a4 & 4) == 0) {
    DAT_006b92a4 = DAT_006b92a4 | 4;
    local_150 = (double)CONCAT71(local_150._1_7_,local_155);
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Wobble_00699d00;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_Wobble_00699d00,~uVar5 - 1);
    local_4 = 8;
    local_140[0] = local_155;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_RunSizeY_00699cdc;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_RunSizeY_00699cdc,~uVar5 - 1);
    local_4._0_1_ = 9;
    uVar3 = FUN_00436f90(local_124);
    local_4._0_1_ = 10;
    iVar4 = FUN_005ac8b0(local_140,&local_150,0x37a7c5ac,uVar3,0);
    local_4._0_1_ = 0xb;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_155);
      *(float *)(iVar4 + 0x60) = (float)fVar10;
    }
    else {
      fVar10 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b9298 = (float)fVar10;
    local_4._0_1_ = 10;
    FUN_005acca0();
    local_4._0_1_ = 9;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if ((DAT_006b92a4 & 8) == 0) {
    DAT_006b92a4 = DAT_006b92a4 | 8;
    local_150 = (double)CONCAT71(local_150._1_7_,local_155);
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Wobble_00699d00;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = s_Wobble_00699d00;
      pcVar8 = local_150._4_4_;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4 = 0xc;
    local_140[0] = local_155;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_BreathSizeX_00699cd0;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_BreathSizeX_00699cd0,~uVar5 - 1);
    local_4._0_1_ = 0xd;
    uVar3 = FUN_00436f90(local_124);
    local_4._0_1_ = 0xe;
    iVar4 = FUN_005ac8b0(local_140,&local_150,0x3b449ba6,uVar3,0);
    local_4._0_1_ = 0xf;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_155);
      *(float *)(iVar4 + 0x60) = (float)fVar10;
    }
    else {
      fVar10 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b9294 = (float)fVar10;
    local_4._0_1_ = 0xe;
    FUN_005acca0();
    local_4._0_1_ = 0xd;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,0xc);
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    param_1 = local_154;
  }
  if ((DAT_006b92a4 & 0x10) == 0) {
    DAT_006b92a4 = DAT_006b92a4 | 0x10;
    local_114[0] = local_155;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Wobble_00699d00;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = s_Wobble_00699d00;
      pcVar8 = local_110;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar8 = pcVar8 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar8 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4 = 0x10;
    local_104[0] = local_155;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_BreathSizeY_00699cc4;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = s_BreathSizeY_00699cc4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)local_100 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        local_100 = local_100 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *local_100 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        local_100 = local_100 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 0x11;
    uVar3 = FUN_00436f90(local_f4);
    local_4._0_1_ = 0x12;
    iVar4 = FUN_005ac8b0(local_104,local_114,0,uVar3,0);
    local_4._0_1_ = 0x13;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_155);
      *(float *)(iVar4 + 0x60) = (float)fVar10;
    }
    else {
      fVar10 = (float10)*(float *)(iVar4 + 0x60);
    }
    DAT_006b9290 = (float)fVar10;
    local_4._0_1_ = 0x12;
    FUN_005acca0();
    local_4._0_1_ = 0x11;
    FUN_004040a0(1);
    local_4 = CONCAT31(local_4._1_3_,0x10);
    FUN_004040a0(1);
    param_1 = local_154;
    if (local_110 != (char *)0x0) {
      cVar2 = local_110[-1];
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0(local_110 + -1);
        param_1 = local_154;
      }
      else {
        local_110[-1] = cVar2 + -1;
      }
    }
  }
  fVar10 = (float10)FUN_005b2fd0();
  local_154 = (float)fVar10;
  if (fVar10 <= (float10)0.0) {
    FUN_005b3070();
  }
  else {
    bVar9 = *(int *)((int)param_1 + 0x100) != 0;
    if (bVar9) {
      fVar1 = *(float *)((int)param_1 + 0x140) - *(float *)((int)param_1 + 0x144);
    }
    else {
      fVar1 = *(float *)((int)param_1 + 0x134) - *(float *)((int)param_1 + 0x138);
    }
    *(float *)((int)param_1 + 0x148) = fVar1 + *(float *)((int)param_1 + 0x148);
    local_150 = (double)*(float *)((int)param_1 + 0x148);
    fVar10 = (float10)FUN_0060b68f(local_150);
    *(float *)((int)param_1 + 0x148) = (float)((float10)local_150 - fVar10);
    fVar10 = ((float10)local_150 - fVar10) * (float10)6.2831855;
    if (bVar9) {
      fVar11 = (float10)_DAT_006b9294;
      local_154 = DAT_006b9290;
    }
    else {
      fVar11 = (float10)local_154 * (float10)_DAT_006b929c;
      local_154 = local_154 * _DAT_006b9298;
    }
    local_128 = 0.0;
    fVar12 = (float10)fsin(fVar10 + fVar10);
    local_130 = (float)(fVar12 * fVar11);
    fVar10 = (float10)fsin(fVar10 + (float10)_DAT_006b92a0);
    local_12c = (float)-(fVar10 * (float10)local_154);
  }
  fVar10 = (float10)FUN_0060b760();
  FUN_005b2fa0((float)fVar10);
  FUN_005b3000(&local_130);
  *param_2 = local_130;
  param_2[1] = local_12c;
  param_2[2] = local_128;
  ExceptionList = local_c;
  return;
}

