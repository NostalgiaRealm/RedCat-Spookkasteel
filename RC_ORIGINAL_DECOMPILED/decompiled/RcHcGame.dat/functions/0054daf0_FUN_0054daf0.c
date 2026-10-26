/*
 * FUN_0054daf0 at 0054daf0
 * undefined FUN_0054daf0(void)
 * Address ranges: 0054daf0-0054e05f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0054daf0(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float10 fVar7;
  undefined1 local_b9;
  float fStack_b8;
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined1 local_94 [16];
  float local_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0063d93c;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s___Settings_Computer_ini_006a1830;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s___Settings_Computer_ini_006a1830,~uVar4 - 1);
  local_a4[0] = local_b9;
  local_4._0_1_ = 1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_3DSound_006a1828;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_3DSound_006a1828,~uVar4 - 1);
  local_4._0_1_ = 2;
  local_94[0] = local_b9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_MinDistanceMeters_006a1814;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MinDistanceMeters_006a1814,~uVar4 - 1);
  local_4._0_1_ = 3;
  iVar2 = FUN_005a3d10(local_94,local_a4,0x40a00000,0,0x447a0000,local_b4);
  local_4._0_1_ = 4;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_b9);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
    local_84 = (float)fVar7;
  }
  else {
    local_84 = *(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 3;
  FUN_005a3ce0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  local_94[0] = local_b9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s___Settings_Computer_ini_006a1830;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s___Settings_Computer_ini_006a1830,~uVar4 - 1);
  local_a4[0] = local_b9;
  local_4._0_1_ = 5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_3DSound_006a1828;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_3DSound_006a1828,~uVar4 - 1);
  local_4._0_1_ = 6;
  local_b4[0] = local_b9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_MaxDistanceFactor_006a1800;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxDistanceFactor_006a1800,~uVar4 - 1);
  local_4._0_1_ = 7;
  iVar2 = FUN_005a3d10(local_b4,local_a4,0x459c4000,0x3f800000,0x47c35000,local_94);
  local_4._0_1_ = 8;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_b9);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
    fStack_b8 = (float)fVar7;
  }
  else {
    fStack_b8 = *(float *)(iVar2 + 0x60);
  }
  local_4._0_1_ = 7;
  FUN_005a3ce0();
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  pcVar5 = param_3;
  if (param_3 == (char *)0x0) {
    pcVar5 = "";
  }
  local_a4[0] = local_b9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = pcVar5;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(pcVar5,~uVar4 - 1);
  local_b4[0] = local_b9;
  local_4._0_1_ = 9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_MinDistanceMeters_006a1814;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MinDistanceMeters_006a1814,~uVar4 - 1);
  local_4._0_1_ = 10;
  uVar3 = FUN_00436f90(local_94);
  local_4._0_1_ = 0xb;
  iVar2 = FUN_005a3d10(local_b4,local_a4,local_84,0,0x447a0000,uVar3);
  local_4._0_1_ = 0xc;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_b9);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
  }
  else {
    fVar7 = (float10)*(float *)(iVar2 + 0x60);
  }
  *(float *)(param_1 + 0x1ec) = (float)fVar7;
  local_4._0_1_ = 0xb;
  FUN_005a3ce0();
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_004040a0(1);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  if (param_3 == (char *)0x0) {
    param_3 = "";
  }
  local_a4[0] = local_b9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = param_3;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(param_3,~uVar4 - 1);
  local_4._0_1_ = 0xd;
  local_b4[0] = local_b9;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_MaxDistanceFactor_006a1800;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_MaxDistanceFactor_006a1800,~uVar4 - 1);
  local_4._0_1_ = 0xe;
  uVar3 = FUN_00436f90(local_94);
  local_4._0_1_ = 0xf;
  iVar2 = FUN_005a3d10(local_b4,local_a4,fStack_b8,0x3f800000,0x47c35000,uVar3);
  local_4._0_1_ = 0x10;
  if (*(float *)(iVar2 + 0x60) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar2 + 0x14,&local_b9);
    *(float *)(iVar2 + 0x60) = (float)fVar7;
    fStack_b8 = (float)fVar7;
  }
  else {
    fStack_b8 = *(float *)(iVar2 + 0x60);
  }
  FUN_0054dad0(fStack_b8);
  local_4._0_1_ = 0xf;
  FUN_005a3ce0();
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return;
}

