/*
 * FUN_004507a0 at 004507a0
 * undefined FUN_004507a0(void)
 * Address ranges: 004507a0-00450f2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004507a0(int param_1,int param_2,undefined4 param_3,float *param_4)

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
  
  puVar2 = PTR_s_Damage_00691818;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626093;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_f8 = (undefined1 *)param_1;
  if (DAT_006b7014 == '\0') {
    local_124 = (undefined1 *)0x0;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x4507eb;
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
    uStack_12c = 0x450804;
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
      uStack_12c = 0x45085e;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b7010 = (float)fVar8;
    local_4 = (uint)local_4._1_3_ << 8;
    local_124 = (undefined1 *)0x450880;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x450892;
    FUN_004040a0();
    pcVar7 = PTR_s_ExplosionRadius_0069181c;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_ExplosionRadius_0069181c;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x4508af;
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
    uStack_12c = 0x4508c7;
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
      uStack_12c = 0x450913;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b700c = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,2);
    local_124 = (undefined1 *)0x450935;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x450947;
    FUN_004040a0();
    pcVar7 = PTR_s_Gravity_00691820;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_Gravity_00691820;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x450964;
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
    uStack_12c = 0x45097c;
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
      uStack_12c = 0x4509c8;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b7008 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,4);
    local_124 = (undefined1 *)0x4509ea;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x4509fc;
    FUN_004040a0();
    pcVar7 = PTR_s_MaximumLifeTimeInSeconds_00691824;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MaximumLifeTimeInSeconds_00691824;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x450a19;
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
    uStack_12c = 0x450a31;
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
      uStack_12c = 0x450a7d;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    DAT_006b7004 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,6);
    local_124 = (undefined1 *)0x450a9f;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x450ab1;
    FUN_004040a0();
    pcVar7 = PTR_s_MaximumSpeed_00691828;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MaximumSpeed_00691828;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x450ace;
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
    uStack_12c = 0x450ae6;
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
      uStack_12c = 0x450b32;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b7000 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,8);
    local_124 = (undefined1 *)0x450b54;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x450b66;
    FUN_004040a0();
    pcVar7 = PTR_s_MinimumLifeTimeInSeconds_0069182c;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_MinimumLifeTimeInSeconds_0069182c;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x450b83;
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
    uStack_12c = 0x450b9b;
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
      uStack_12c = 0x450be7;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    DAT_006b6ffc = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,10);
    local_124 = (undefined1 *)0x450c09;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x450c1b;
    FUN_004040a0();
    pcVar7 = PTR_s_RechargeTime_00691830;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_RechargeTime_00691830;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x450c38;
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
    uStack_12c = 0x450c50;
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
      uStack_12c = 0x450c9c;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6ff8 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0xc);
    local_124 = (undefined1 *)0x450cbe;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x450cd0;
    FUN_004040a0();
    pcVar7 = PTR_s_SpeedIncreasePerSecond_006913f6_2_00691834;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_SpeedIncreasePerSecond_006913f6_2_00691834;
    local_108 = (float)CONCAT31(local_108._1_3_,local_10d);
    puStack_128 = (undefined *)0x450ced;
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
    uStack_12c = 0x450d05;
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
      uStack_12c = 0x450d51;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6ff4 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0xe);
    local_124 = (undefined1 *)0x450d73;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x450d85;
    FUN_004040a0();
    pcVar7 = PTR_s_InitialSpeed_00691838;
    local_124 = (undefined1 *)0x0;
    local_10c = PTR_s_InitialSpeed_00691838;
    local_f4[0] = local_10d;
    puStack_128 = (undefined *)0x450da2;
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
    uStack_12c = 0x450dba;
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
      uStack_12c = 0x450e09;
      fVar8 = (float10)FUN_005ad390();
      *(float *)(iVar4 + 0x60) = (float)fVar8;
    }
    else {
      fVar8 = (float10)*(float *)(iVar4 + 0x60);
    }
    _DAT_006b6ff0 = (float)fVar8;
    local_4 = CONCAT31(local_4._1_3_,0x10);
    local_124 = (undefined1 *)0x450e2e;
    FUN_005acca0();
    local_124 = (undefined1 *)0x1;
    local_4 = 0xffffffff;
    puStack_128 = (undefined *)0x450e40;
    FUN_004040a0();
    DAT_006b7014 = '\x01';
  }
  puVar3 = local_f8;
  local_108 = _DAT_006b6ff0 * *param_4;
  local_104 = _DAT_006b6ff0 * param_4[1];
  local_100 = _DAT_006b6ff0 * param_4[2];
  *(float *)((int)local_f8 + 0x234) = local_108;
  *(float *)((int)local_f8 + 0x238) = local_104;
  *(float *)((int)local_f8 + 0x23c) = local_100;
  *(float *)((int)local_f8 + 0x220) = _DAT_006b6ff4;
  *(float *)((int)local_f8 + 0x1f0) = _DAT_006b7008;
  local_124 = (undefined1 *)DAT_006b7004;
  puStack_128 = (undefined *)DAT_006b6ffc;
  uStack_12c = 0x450ebd;
  fVar8 = (float10)FUN_00442e30();
  local_124 = (undefined1 *)(float)fVar8;
  puStack_128 = (undefined *)0x450ec9;
  uVar5 = FUN_004432e0();
  local_f8 = (undefined1 *)&uStack_130;
  FUN_004041b0(uVar5);
  FUN_00442bc0();
  *(float *)((int)puVar3 + 0x208) = _DAT_006b7000;
  *(float *)((int)puVar3 + 0x1d8) = _DAT_006b7010;
  local_124 = (undefined1 *)0x450f02;
  uVar5 = __ftol();
  *(undefined4 *)((int)puVar3 + 0x21c) = uVar5;
  *(float *)((int)puVar3 + 0x1ec) = _DAT_006b700c;
  ExceptionList = pvStack_c;
  return;
}

