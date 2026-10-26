/*
 * FUN_0044eca0 at 0044eca0
 * undefined FUN_0044eca0(void)
 * Address ranges: 0044eca0-0044f42e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0044eca0(int param_1,int param_2,undefined4 param_3,float *param_4)

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
  
  puVar2 = PTR_s_Damage_00691720;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625e93;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_f8 = (undefined1 *)param_1;
  if (DAT_006b6dd0 == '\0') {
    local_124 = (undefined1 *)0x0;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44eceb;
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
    uStack_12c = 0x44ed04;
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
      uStack_12c = 0x44ed5e;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6da0 = (float)fVar8;
    local_4 = (uint)local_4._1_3_ << 8;
    local_124 = (undefined1 *)0x44ed80;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44ed92;
    FUN_004040a0();
    pcVar7 = PTR_s_ExplosionRadius_00691724;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_ExplosionRadius_00691724;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44edaf;
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
    uStack_12c = 0x44edc7;
    FUN_004040f0();
    local_124 = (undefined1 *)0x0;
    puStack_128 = (undefined *)param_2;
    uStack_12c = 0x40800000;
    uStack_130 = param_3;
    local_4 = 2;
    iVar4 = FUN_005ac8b0(&local_108);
    local_4._0_1_ = 3;
    if (*(float *)(iVar4 + 0x60) == 0.0) {
      local_124 = &local_10d;
      puStack_128 = (undefined *)(iVar4 + 0x14);
      uStack_12c = 0x44ee13;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6d9c = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,2);
    local_124 = (undefined1 *)0x44ee35;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44ee47;
    FUN_004040a0();
    pcVar7 = PTR_s_Gravity_00691728;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_Gravity_00691728;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44ee64;
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
    uStack_12c = 0x44ee7c;
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
      uStack_12c = 0x44eec8;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6d98 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,4);
    local_124 = (undefined1 *)0x44eeea;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44eefc;
    FUN_004040a0();
    pcVar7 = PTR_s_MaximumLifeTimeInSeconds_0069172c;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MaximumLifeTimeInSeconds_0069172c;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44ef19;
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
    uStack_12c = 0x44ef31;
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
      uStack_12c = 0x44ef7d;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    DAT_006b6d94 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,6);
    local_124 = (undefined1 *)0x44ef9f;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44efb1;
    FUN_004040a0();
    pcVar7 = PTR_s_MaximumSpeed_00691730;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MaximumSpeed_00691730;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44efce;
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
    uStack_12c = 0x44efe6;
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
      uStack_12c = 0x44f032;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6d90 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,8);
    local_124 = (undefined1 *)0x44f054;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44f066;
    FUN_004040a0();
    pcVar7 = PTR_s_MinimumLifeTimeInSeconds_00691734;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MinimumLifeTimeInSeconds_00691734;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44f083;
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
    uStack_12c = 0x44f09b;
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
      uStack_12c = 0x44f0e7;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    DAT_006b6d8c = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,10);
    local_124 = (undefined1 *)0x44f109;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44f11b;
    FUN_004040a0();
    pcVar7 = PTR_s_RechargeTime_00691738;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_RechargeTime_00691738;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44f138;
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
    uStack_12c = 0x44f150;
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
      uStack_12c = 0x44f19c;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6d88 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0xc);
    local_124 = (undefined1 *)0x44f1be;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44f1d0;
    FUN_004040a0();
    pcVar7 = PTR_s_SpeedIncreasePerSecond_006913f6_2_0069173c;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_SpeedIncreasePerSecond_006913f6_2_0069173c;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x44f1ed;
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
    uStack_12c = 0x44f205;
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
      uStack_12c = 0x44f251;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6d84 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0xe);
    local_124 = (undefined1 *)0x44f273;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44f285;
    FUN_004040a0();
    pcVar7 = PTR_s_InitialSpeed_00691740;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_InitialSpeed_00691740;
    local_f4[0] = local_10d;
    puStack_128 = (undefined *)0x44f2a2;
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
    uStack_12c = 0x44f2ba;
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
      uStack_12c = 0x44f309;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6d80 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    local_124 = (undefined1 *)0x44f32e;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x44f340;
    FUN_004040a0();
    DAT_006b6dd0 = '\x01';
  }
  puVar3 = local_f8;
  local_108 = _DAT_006b6d80 * *param_4;
  local_104 = _DAT_006b6d80 * param_4[1];
  local_100 = _DAT_006b6d80 * param_4[2];
  *(float *)((int)local_f8 + 0x234) = local_108;
  *(float *)((int)local_f8 + 0x238) = local_104;
  *(float *)((int)local_f8 + 0x23c) = local_100;
  *(float *)((int)local_f8 + 0x220) = _DAT_006b6d84;
  *(float *)((int)local_f8 + 0x1f0) = _DAT_006b6d98;
  local_124 = (undefined1 *)DAT_006b6d94;
  puStack_128 = (undefined *)DAT_006b6d8c;
  uStack_12c = 0x44f3bd;
  fVar8 = (float10)FUN_00442e30();
  local_124 = (undefined1 *)(float)fVar8;
  puStack_128 = (undefined *)0x44f3c9;
  uVar5 = FUN_004432e0();
  local_f8 = (undefined1 *)&uStack_130;
  FUN_004041b0(uVar5);
  FUN_00442bc0();
  *(float *)((int)puVar3 + 0x208) = _DAT_006b6d90;
  *(float *)((int)puVar3 + 0x1d8) = _DAT_006b6da0;
  local_124 = (undefined1 *)0x44f402;
  uVar5 = __ftol();
  *(undefined4 *)((int)puVar3 + 0x21c) = uVar5;
  *(float *)((int)puVar3 + 0x1ec) = _DAT_006b6d9c;
  ExceptionList = pvStack_c;
  return;
}

