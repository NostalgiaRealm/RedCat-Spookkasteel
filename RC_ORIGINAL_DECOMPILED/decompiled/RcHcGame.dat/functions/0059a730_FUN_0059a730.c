/*
 * FUN_0059a730 at 0059a730
 * undefined FUN_0059a730(void)
 * Address ranges: 0059a730-0059aec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_0059a730(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_6c [4];
  char *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [4];
  char *local_58;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644557;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_WayPointSystem_006a6ff0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WayPointSystem_006a6ff0,~uVar3 - 1);
  local_4 = 0;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_CacheTime_006a6fe4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_CacheTime_006a6fe4,~uVar3 - 1);
  local_4._0_1_ = 1;
  uVar2 = FUN_00436f90(local_2c);
  local_4._0_1_ = 2;
  FUN_005ac8b0(local_4c,local_3c,0x3f000000,uVar2,0);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_WayPointSystem_006a6ff0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WayPointSystem_006a6ff0,~uVar3 - 1);
  local_4._0_1_ = 7;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_DistanceToWalls_006a6fd4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_DistanceToWalls_006a6fd4,~uVar3 - 1);
  local_4._0_1_ = 8;
  uVar2 = FUN_00436f90(local_1c);
  local_4._0_1_ = 9;
  FUN_005ac8b0(local_5c,local_6c,0x41700000,uVar2,0);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_WayPointSystem_006a6ff0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WayPointSystem_006a6ff0,~uVar3 - 1);
  local_4._0_1_ = 0xe;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_PickRadius_006a6fc8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_PickRadius_006a6fc8,~uVar3 - 1);
  local_4._0_1_ = 0xf;
  uVar2 = FUN_00436f90(local_2c);
  local_4._0_1_ = 0x10;
  FUN_005ac8b0(local_3c,local_4c,0x43960000,uVar2,0);
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_WayPointSystem_006a6ff0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WayPointSystem_006a6ff0,~uVar3 - 1);
  local_4._0_1_ = 0x15;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MaxConnectionDistance_006a6fb0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxConnectionDistance_006a6fb0,~uVar3 - 1);
  local_4._0_1_ = 0x16;
  uVar2 = FUN_00436f90(local_1c);
  local_4._0_1_ = 0x17;
  FUN_005ac8b0(local_5c,local_6c,0x43960000,uVar2,0);
  local_4._0_1_ = 0x1b;
  FUN_004040a0(1);
  local_4._0_1_ = 0x1a;
  FUN_004040a0(1);
  local_4._0_1_ = 0x19;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_WayPointSystem_006a6ff0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WayPointSystem_006a6ff0,~uVar3 - 1);
  local_4._0_1_ = 0x1c;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MaxDegreesBetweenLinks_006a6f98;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxDegreesBetweenLinks_006a6f98,~uVar3 - 1);
  local_4._0_1_ = 0x1d;
  uVar2 = FUN_00436f90(local_2c);
  local_4._0_1_ = 0x1e;
  FUN_005ac8b0(local_3c,local_4c,0x41f00000,uVar2,0);
  local_4._0_1_ = 0x22;
  FUN_004040a0(1);
  local_4._0_1_ = 0x21;
  FUN_004040a0(1);
  local_4._0_1_ = 0x20;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_WayPointSystem_006a6ff0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WayPointSystem_006a6ff0,~uVar3 - 1);
  local_4._0_1_ = 0x23;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MaxWayPointDistance_006a6f84;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxWayPointDistance_006a6f84,~uVar3 - 1);
  local_4._0_1_ = 0x24;
  uVar2 = FUN_00436f90(local_1c);
  local_4._0_1_ = 0x25;
  FUN_005ac8b0(local_5c,local_6c,0x42c80000,uVar2,0);
  local_4._0_1_ = 0x29;
  FUN_004040a0(1);
  local_4._0_1_ = 0x28;
  FUN_004040a0(1);
  local_4._0_1_ = 0x27;
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_WayPointSystem_006a6ff0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WayPointSystem_006a6ff0,~uVar3 - 1);
  local_4._0_1_ = 0x2a;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MinPointToLineDistance_006a6f6c;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MinPointToLineDistance_006a6f6c,~uVar3 - 1);
  local_4._0_1_ = 0x2b;
  uVar2 = FUN_00436f90(local_2c);
  local_4._0_1_ = 0x2c;
  FUN_005ac8b0(local_3c,local_4c,0x41f00000,uVar2,0);
  local_4._0_1_ = 0x30;
  FUN_004040a0(1);
  local_4._0_1_ = 0x2f;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x2e);
  FUN_004040a0(1);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_WayPointSystem_006a6ff0;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_WayPointSystem_006a6ff0;
    pcVar6 = local_58;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,0x31);
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_MaxWayPointHeight_006a6f58;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_MaxWayPointHeight_006a6f58;
    pcVar6 = local_68;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00404190(uVar3);
  }
  local_4._0_1_ = 0x32;
  uVar2 = FUN_00436f90(local_1c);
  local_4._0_1_ = 0x33;
  FUN_005ac8b0(local_6c,local_5c,0x42480000,uVar2,0);
  local_4 = CONCAT31(local_4._1_3_,0x37);
  FUN_004040a0(1);
  if (local_68 != (char *)0x0) {
    cVar1 = local_68[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_68 + -1);
    }
    else {
      local_68[-1] = cVar1 + -1;
    }
  }
  local_68 = (char *)0x0;
  local_64 = 0;
  local_60 = 0;
  if (local_58 != (char *)0x0) {
    cVar1 = local_58[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_58[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_005fe5f0(local_58 + -1);
  }
  ExceptionList = local_c;
  return param_1;
}

