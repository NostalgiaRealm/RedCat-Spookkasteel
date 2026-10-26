/*
 * FUN_00447d90 at 00447d90
 * undefined FUN_00447d90(void)
 * Address ranges: 00447d90-00448261
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00447d90(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_10d;
  char *local_10c;
  undefined1 local_108 [16];
  uint local_f8;
  undefined1 local_f4 [4];
  char *local_f0;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00625361;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 4) == '\0') {
    ExceptionList = &local_c;
    FUN_00443300(param_2,param_3);
    local_10c = s_TrailDamage_006912e8;
    local_108[0] = local_10d;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_TrailDamage_006912e8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(local_10c,~uVar3 - 1);
    local_4 = 0;
    iVar2 = FUN_005ac8b0(local_108,param_3,0x40a00000,param_2,0);
    local_4._0_1_ = 1;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x20) = (float)fVar6;
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    local_10c = s_TrailRed_006912dc;
    local_108[0] = local_10d;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_TrailRed_006912dc;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(local_10c,~uVar3 - 1);
    local_4 = 2;
    iVar2 = FUN_005ac9d0(local_108,param_3,0xff,param_2,0);
    local_4._0_1_ = 3;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x28) = (float)fVar6;
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    local_108[0] = local_10d;
    local_10c = s_TrailGreen_006912d0;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_TrailGreen_006912d0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(local_10c,~uVar3 - 1);
    local_4 = 4;
    iVar2 = FUN_005ac9d0(local_108,param_3,0xff,param_2,0);
    local_4._0_1_ = 5;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x2c) = (float)fVar6;
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    local_10c = s_TrailBlue_006912c4;
    local_108[0] = local_10d;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_TrailBlue_006912c4;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(local_10c,~uVar3 - 1);
    local_4 = 6;
    iVar2 = FUN_005ac9d0(local_108,param_3,0xff,param_2,0);
    local_4._0_1_ = 7;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x30) = (float)fVar6;
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    local_10c = s_TrailAlpha_006912b8;
    local_108[0] = local_10d;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_TrailAlpha_006912b8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(local_10c,~uVar3 - 1);
    local_4 = 8;
    iVar2 = FUN_005ac9d0(local_108,param_3,0xff,param_2,0);
    local_4._0_1_ = 9;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x34) = (float)fVar6;
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    local_f4[0] = local_10d;
    local_10c = s_TrailFadeTime_006912a8;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_TrailFadeTime_006912a8;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_f8 = uVar3;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = local_10c;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)local_f0 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        local_f0 = local_f0 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *local_f0 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        local_f0 = local_f0 + 1;
      }
      FUN_00404190(uVar3);
    }
    local_4 = 10;
    iVar2 = FUN_005ac8b0(local_f4,param_3,0x3eb33333,param_2,0);
    local_4._0_1_ = 0xb;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x38) = (float)fVar6;
    local_4 = CONCAT31(local_4._1_3_,10);
    FUN_005acca0();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  ExceptionList = local_c;
  return;
}

