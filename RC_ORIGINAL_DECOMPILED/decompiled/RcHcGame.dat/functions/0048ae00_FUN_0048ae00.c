/*
 * FUN_0048ae00 at 0048ae00
 * undefined FUN_0048ae00(void)
 * Address ranges: 0048ae00-0048b30a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_0048ae00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 local_b5;
  undefined1 local_b4 [16];
  undefined1 local_a4 [16];
  undefined1 local_94 [4];
  int iStack_90;
  undefined4 *local_84;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062a884;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_84 = param_1;
  FUN_0051afc0(param_2,param_3,param_4);
  local_4 = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  FUN_004041b0(0xffffffff);
  param_1[0x30] = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(param_1 + 0x31) = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  param_1[0x39] = 0;
  local_4._0_1_ = 3;
  *(undefined1 *)(param_1 + 0x3e) = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  param_1[0x42] = 0;
  local_4._0_1_ = 5;
  *(undefined1 *)(param_1 + 0x47) = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  local_4._0_1_ = 6;
  *(undefined1 *)(param_1 + 0x4b) = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  local_4._0_1_ = 7;
  *(undefined1 *)(param_1 + 0x53) = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = &DAT_006b3f70;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
  param_1[0x5b] = 0;
  param_1[100] = 0;
  param_1[0x75] = 0;
  local_4._0_1_ = 0xb;
  *(undefined1 *)(param_1 + 0x7e) = local_b5;
  FUN_004040a0(0);
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  local_4._0_1_ = 0xd;
  *(undefined1 *)(param_1 + 0x8e) = local_b5;
  FUN_004040a0(0);
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  local_4._0_1_ = 0xf;
  *(undefined1 *)(param_1 + 0x9e) = local_b5;
  FUN_004040a0(0);
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  local_4._0_1_ = 0x11;
  *(undefined1 *)(param_1 + 0xae) = local_b5;
  FUN_004040a0(0);
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  *param_1 = &PTR_FUN_0064e520;
  local_4._0_1_ = 0x12;
  uVar2 = FUN_005a1d60(s__Debriefing_ini_00693780);
  FUN_0040cad0(local_94,uVar2);
  local_4._0_1_ = 0x13;
  local_a4[0] = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar4 - 1);
  local_b4[0] = local_b5;
  local_4._0_1_ = 0x14;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_FadeInTime_00693408;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_FadeInTime_00693408,~uVar4 - 1);
  local_4._0_1_ = 0x15;
  iVar3 = FUN_005a3d10(local_b4,local_a4,0x3f800000,0,0x41200000,local_94);
  local_4._0_1_ = 0x16;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_b5);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  uVar2 = __ftol();
  param_1[0x14] = uVar2;
  local_4._0_1_ = 0x15;
  FUN_005a3ce0();
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar4 - 1);
  local_4._0_1_ = 0x17;
  local_a4[0] = local_b5;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_FadeOutTime_006933fc;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_FadeOutTime_006933fc,~uVar4 - 1);
  local_4._0_1_ = 0x18;
  iVar3 = FUN_005a3d10(local_a4,local_b4,0x3f800000,0,0x41200000,local_94);
  local_4._0_1_ = 0x19;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar6 = (float10)FUN_005ad390(iVar3 + 0x14,&local_b5);
    *(float *)(iVar3 + 0x60) = (float)fVar6;
  }
  uVar2 = __ftol();
  param_1[0x15] = uVar2;
  local_4._0_1_ = 0x18;
  FUN_005a3ce0();
  local_4._0_1_ = 0x17;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x13);
  FUN_004040a0(1);
  if (iStack_90 != 0) {
    cVar1 = *(char *)(iStack_90 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_90 + -1);
    }
    else {
      *(char *)(iStack_90 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

