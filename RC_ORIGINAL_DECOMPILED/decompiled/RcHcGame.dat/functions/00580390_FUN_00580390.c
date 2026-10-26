/*
 * FUN_00580390 at 00580390
 * undefined FUN_00580390(void)
 * Address ranges: 00580390-005807a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * __thiscall FUN_00580390(int param_1,undefined1 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_a0 [4];
  int local_9c;
  undefined1 local_90 [4];
  char *local_8c;
  undefined1 local_80 [4];
  char *local_7c;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006423de;
  local_c = ExceptionList;
  local_20 = 0;
  ExceptionList = &local_c;
  FUN_005ae390(local_a0,&DAT_006b3f70);
  local_4 = 0;
  switch(param_3) {
  case 0:
    goto switchD_005803e3_caseD_0;
  case 1:
    pcVar6 = *(char **)(*(int *)(param_1 + 0xf8) + 0x14);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar6,~uVar4 - 1);
    local_4._0_1_ = 1;
    FUN_0040cc00(local_70,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 2:
    pcVar6 = *(char **)(*(int *)(param_1 + 0xf8) + 0x18);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar6,~uVar4 - 1);
    local_4._0_1_ = 2;
    FUN_0040cc00(local_40,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 3:
    pcVar6 = *(char **)(*(int *)(param_1 + 0xf8) + 0x1c);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar6,~uVar4 - 1);
    local_4._0_1_ = 3;
    FUN_0040cc00(local_60,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 4:
    pcVar6 = *(char **)(*(int *)(param_1 + 0xf8) + 0x20);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar6,~uVar4 - 1);
    local_4._0_1_ = 4;
    FUN_0040cc00(local_50,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 5:
    pcVar6 = *(char **)(*(int *)(param_1 + 0xf8) + 0x2c);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)local_8c = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        local_8c = local_8c + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_8c = *pcVar6;
        pcVar6 = pcVar6 + 1;
        local_8c = local_8c + 1;
      }
      FUN_00404190(uVar4);
    }
    local_4._0_1_ = 6;
    FUN_0040cc00(local_90,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 6:
    pcVar6 = *(char **)(*(int *)(param_1 + 0xf8) + 0x28);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar6,~uVar4 - 1);
    local_4._0_1_ = 5;
    FUN_0040cc00(local_30,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  case 7:
    pcVar6 = *(char **)(*(int *)(param_1 + 0xf8) + 0x24);
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar7 = pcVar6;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)local_7c = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        local_7c = local_7c + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *local_7c = *pcVar6;
        pcVar6 = pcVar6 + 1;
        local_7c = local_7c + 1;
      }
      FUN_00404190(uVar4);
    }
    local_4._0_1_ = 7;
    FUN_0040cc00(local_80,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    break;
  default:
    uVar2 = FUN_005ae390(local_1c,s_No_such_music_type___i___006a5380,param_3);
    local_4._0_1_ = 8;
    pcVar3 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a51c8,0x280
                                  ,uVar2);
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
  }
  FUN_004040a0(1);
switchD_005803e3_caseD_0:
  *param_2 = local_a0[0];
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0xc) = 0;
  FUN_0040cc00(local_a0,0,0xffffffff);
  if (local_9c != 0) {
    cVar1 = *(char *)(local_9c + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_9c + -1);
    }
    else {
      *(char *)(local_9c + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_2;
}

