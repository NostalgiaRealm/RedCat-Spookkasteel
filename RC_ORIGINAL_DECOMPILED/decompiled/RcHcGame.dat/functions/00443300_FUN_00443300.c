/*
 * FUN_00443300 at 00443300
 * undefined FUN_00443300(void)
 * Address ranges: 00443300-0044333f;004437b1-004437c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00443300(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_10d;
  char *pcStack_10c;
  undefined1 local_108 [16];
  uint uStack_f8;
  undefined1 auStack_f4 [4];
  char *pcStack_f0;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_00624f71;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 4) == '\0') {
    ExceptionList = &local_c;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_Damage_0068fccc;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Damage_0068fccc,~uVar3 - 1);
    iStack_4 = 0;
    iVar2 = FUN_005ac8b0(local_108,param_3,0x40a00000,param_2,0);
    iStack_4._0_1_ = 1;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 8) = (float)fVar6;
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    FUN_005acca0();
    iStack_4 = 0xffffffff;
    FUN_004040a0(1);
    local_108[0] = local_10d;
    pcStack_10c = s_Gravity_00690e28;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_Gravity_00690e28;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcStack_10c,~uVar3 - 1);
    iStack_4 = 2;
    iVar2 = FUN_005ac8b0(local_108,param_3,0x40a00000,param_2,0);
    iStack_4._0_1_ = 3;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0xc) = (float)fVar6;
    iStack_4 = CONCAT31(iStack_4._1_3_,2);
    FUN_005acca0();
    iStack_4 = 0xffffffff;
    FUN_004040a0(1);
    pcStack_10c = s_MaximumLifeTimeInSeconds_00690e0c;
    local_108[0] = local_10d;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_MaximumLifeTimeInSeconds_00690e0c;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcStack_10c,~uVar3 - 1);
    iStack_4 = 4;
    iVar2 = FUN_005ac8b0(local_108,param_3,0x40a00000,param_2,0);
    iStack_4._0_1_ = 5;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x10) = (float)fVar6;
    iStack_4 = CONCAT31(iStack_4._1_3_,4);
    FUN_005acca0();
    iStack_4 = 0xffffffff;
    FUN_004040a0(1);
    pcStack_10c = s_MinimumLifeTimeInSeconds_00690df0;
    local_108[0] = local_10d;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_MinimumLifeTimeInSeconds_00690df0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcStack_10c,~uVar3 - 1);
    iStack_4 = 6;
    iVar2 = FUN_005ac8b0(local_108,param_3,0x40a00000,param_2,0);
    iStack_4._0_1_ = 7;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x14) = (float)fVar6;
    iStack_4 = CONCAT31(iStack_4._1_3_,6);
    FUN_005acca0();
    iStack_4 = 0xffffffff;
    FUN_004040a0(1);
    local_108[0] = local_10d;
    pcStack_10c = s_InitialSpeed_00690de0;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_InitialSpeed_00690de0;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcStack_10c,~uVar3 - 1);
    iStack_4 = 8;
    iVar2 = FUN_005ac8b0(local_108,param_3,0x437a0000,param_2,0);
    iStack_4._0_1_ = 9;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x18) = (float)fVar6;
    iStack_4 = CONCAT31(iStack_4._1_3_,8);
    FUN_005acca0();
    iStack_4 = 0xffffffff;
    FUN_004040a0(1);
    pcStack_10c = s_aCSize_00690dd6 + 2;
    auStack_f4[0] = local_10d;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar5 = s_aCSize_00690dd6 + 2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    uStack_f8 = uVar3;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar5 = pcStack_10c;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcStack_f0 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcStack_f0 = pcStack_f0 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcStack_f0 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcStack_f0 = pcStack_f0 + 1;
      }
      FUN_00404190(uVar3);
    }
    iStack_4 = 10;
    iVar2 = FUN_005ac8b0(auStack_f4,param_3,0x3f4ccccd,param_2,0);
    iStack_4._0_1_ = 0xb;
    if (*(float *)(iVar2 + 0x60) == 0.0) {
      fVar6 = (float10)FUN_005ad390(iVar2 + 0x14,&local_10d);
      *(float *)(iVar2 + 0x60) = (float)fVar6;
    }
    else {
      fVar6 = (float10)*(float *)(iVar2 + 0x60);
    }
    *(float *)(param_1 + 0x1c) = (float)fVar6;
    iStack_4 = CONCAT31(iStack_4._1_3_,10);
    FUN_005acca0();
    iStack_4 = 0xffffffff;
    FUN_004040a0(1);
    *(undefined1 *)(param_1 + 4) = 1;
  }
  ExceptionList = local_c;
  return;
}

