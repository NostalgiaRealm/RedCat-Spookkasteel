/*
 * FUN_0044a760 at 0044a760
 * undefined FUN_0044a760(void)
 * Address ranges: 0044a760-0044aeee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044a760(int param_1,int param_2,undefined4 param_3,float *param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  float10 fVar8;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined *puStack_128;
  undefined1 *local_124;
  undefined1 local_10d;
  undefined *local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined1 *local_f8;
  undefined1 local_f4 [232];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puVar2 = PTR_s_Damage_006913c0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625623;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_f8 = (undefined1 *)param_1;
  if (DAT_006b6cc4 == '\0') {
    local_124 = (undefined1 *)0x0;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44a7ab;
    ExceptionList = &pvStack_c;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar7 = puVar2;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = puVar2;
    uStack_12c = 0x44a7c4;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x42480000;
    uStack_130 = param_3;
    local_4 = 0;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 1;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44a81e;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6cc0 = (float)fVar8;
    local_4 = (uint)local_4._1_3_ << 8;
    local_124 = (undefined1 *)0x44a840;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44a852;
    FUN_004040a0();
    pcVar7 = PTR_s_ExplosionRadius_006913c4;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_ExplosionRadius_006913c4;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44a86f;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = local_10c;
    uStack_12c = 0x44a887;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x42960000;
    uStack_130 = param_3;
    local_4 = 2;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 3;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44a8d3;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6cbc = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,2);
    local_124 = (undefined1 *)0x44a8f5;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44a907;
    FUN_004040a0();
    pcVar7 = PTR_s_Gravity_006913c8;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_Gravity_006913c8;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44a924;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = local_10c;
    uStack_12c = 0x44a93c;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x40a00000;
    uStack_130 = param_3;
    local_4 = 4;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 5;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44a988;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6cb8 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,4);
    local_124 = (undefined1 *)0x44a9aa;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44a9bc;
    FUN_004040a0();
    pcVar7 = PTR_s_MaximumLifeTimeInSeconds_006913cc;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MaximumLifeTimeInSeconds_006913cc;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44a9d9;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = local_10c;
    uStack_12c = 0x44a9f1;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x40a00000;
    uStack_130 = param_3;
    local_4 = 6;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 7;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44aa3d;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    DAT_006b6cb4 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,6);
    local_124 = (undefined1 *)0x44aa5f;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44aa71;
    FUN_004040a0();
    pcVar7 = PTR_s_MaximumSpeed_006913d0;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MaximumSpeed_006913d0;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44aa8e;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = local_10c;
    uStack_12c = 0x44aaa6;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x447a0000;
    uStack_130 = param_3;
    local_4 = 8;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 9;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44aaf2;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6cb0 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,8);
    local_124 = (undefined1 *)0x44ab14;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44ab26;
    FUN_004040a0();
    pcVar7 = PTR_s_MinimumLifeTimeInSeconds_006913d4;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MinimumLifeTimeInSeconds_006913d4;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44ab43;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = local_10c;
    uStack_12c = 0x44ab5b;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x40a00000;
    uStack_130 = param_3;
    local_4 = 10;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 0xb;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44aba7;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    DAT_006b6cac = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,10);
    local_124 = (undefined1 *)0x44abc9;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44abdb;
    FUN_004040a0();
    pcVar7 = PTR_s_RechargeTime_006913d8;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_RechargeTime_006913d8;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44abf8;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = local_10c;
    uStack_12c = 0x44ac10;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x3f800000;
    uStack_130 = param_3;
    local_4 = 0xc;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 0xd;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44ac5c;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6ca8 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0xc);
    local_124 = (undefined1 *)0x44ac7e;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44ac90;
    FUN_004040a0();
    pcVar7 = PTR_s_SpeedIncreasePerSecond_006913f6_2_006913dc;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_SpeedIncreasePerSecond_006913f6_2_006913dc;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44acad;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = local_10c;
    uStack_12c = 0x44acc5;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x42c80000;
    uStack_130 = param_3;
    local_4 = 0xe;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 0xf;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44ad11;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6ca4 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0xe);
    local_124 = (undefined1 *)0x44ad33;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44ad45;
    FUN_004040a0();
    pcVar7 = PTR_s_InitialSpeed_006913e0;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_InitialSpeed_006913e0;
    local_f4[0] = local_10d;
    puStack_128 = (undefined *)0x44ad62;
    FUN_004040a0();
    uVar6 = 0xffffffff;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_124 = (undefined1 *)(~uVar6 - 1);
    puStack_128 = local_10c;
    uStack_12c = 0x44ad7a;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x41c80000;
    uStack_130 = param_3;
    local_4 = 0x10;
    iVar4 = FUN_005ac8b0(local_f4);
    local_4._0_1_ = 0x11;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44adc9;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6ca0 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    local_124 = (undefined1 *)0x44adee;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44ae00;
    FUN_004040a0();
    DAT_006b6cc4 = '\x01';
  }
  puVar3 = local_f8;
  local_108 = _DAT_006b6ca0 * *param_4;
  local_104 = _DAT_006b6ca0 * param_4[1];
  local_100 = _DAT_006b6ca0 * param_4[2];
  *(float *)((int)local_f8 + 0x234) = local_108;
  *(float *)((int)local_f8 + 0x238) = local_104;
  *(float *)((int)local_f8 + 0x23c) = local_100;
  *(float *)((int)local_f8 + 0x220) = _DAT_006b6ca4;
  *(float *)((int)local_f8 + 0x1f0) = _DAT_006b6cb8;
  local_124 = (undefined1 *)DAT_006b6cb4;
  puStack_128 = (undefined *)DAT_006b6cac;
  uStack_12c = 0x44ae7d;
  fVar8 = (float10)FUN_00442e30();
  local_124 = (undefined1 *)(float)fVar8;
  puStack_128 = (undefined *)0x44ae89;
  uVar5 = FUN_004432e0();
  local_f8 = (undefined1 *)&uStack_130;
  FUN_004041b0(uVar5);
  FUN_00442bc0();
  *(float *)((int)puVar3 + 0x208) = _DAT_006b6cb0;
  *(float *)((int)puVar3 + 0x1d8) = _DAT_006b6cc0;
  local_124 = (undefined1 *)0x44aec2;
  uVar5 = __ftol();
  *(undefined4 *)((int)puVar3 + 0x21c) = uVar5;
  *(float *)((int)puVar3 + 0x1ec) = _DAT_006b6cbc;
  ExceptionList = pvStack_c;
  return;
}

