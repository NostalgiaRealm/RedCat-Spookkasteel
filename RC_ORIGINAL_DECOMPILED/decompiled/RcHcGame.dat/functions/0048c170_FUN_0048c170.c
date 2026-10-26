/*
 * FUN_0048c170 at 0048c170
 * undefined FUN_0048c170(void)
 * Address ranges: 0048c170-0048c86e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0048c170(int *param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  char *pcVar7;
  float10 fVar8;
  float10 fVar9;
  undefined1 local_16d;
  float local_16c;
  int iStack_168;
  undefined1 local_164 [16];
  float local_154;
  undefined1 local_150 [16];
  undefined4 local_140;
  undefined1 local_13c [16];
  undefined1 local_12c [16];
  undefined1 local_11c [16];
  undefined1 local_10c;
  char *pcStack_108;
  undefined1 local_fc [240];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ac43;
  pvStack_c = ExceptionList;
  local_140 = 0;
  ExceptionList = &pvStack_c;
  uVar3 = FUN_005a1d60(s__Debriefing_ini_00693780);
  FUN_0040cad0(local_13c,uVar3);
  local_4 = 1;
  local_16c = (float)DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    local_16c = (float)FUN_0055b280();
  }
  local_11c[0] = local_16d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 2;
  uVar3 = FUN_0040cad0(local_fc,param_2,s__Font_006935d0);
  local_4._0_1_ = 3;
  iVar4 = FUN_005acaf0(uVar3,local_11c,s_Comic_Sans_MS_006930a4,local_13c,0);
  local_12c[0] = *(undefined1 *)(iVar4 + 0x14);
  local_4._0_1_ = 4;
  FUN_004040a0(0);
  FUN_0040cc00(iVar4 + 0x14,0,0xffffffff);
  local_10c = local_12c[0];
  local_4._0_1_ = 5;
  FUN_004040a0(0);
  FUN_0040cc00(local_12c,0,0xffffffff);
  local_4._0_1_ = 10;
  FUN_004040a0(1);
  local_4._0_1_ = 9;
  FUN_005acca0();
  local_4._0_1_ = 8;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_164[0] = local_16d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 0xb;
  uVar3 = FUN_0040cad0(local_150,param_2,s__Size_006935c8);
  local_4._0_1_ = 0xc;
  iVar4 = FUN_005a3d10(uVar3,local_164,0x41200000,0x41000000,0x42800000,local_13c);
  local_4._0_1_ = 0xd;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x14,&local_16d);
    *(float *)(iVar4 + 0x60) = (float)fVar8;
    local_154 = (float)fVar8;
  }
  else {
    local_154 = *(float *)(iVar4 + 0x60);
  }
  local_4._0_1_ = 0xc;
  FUN_005a3ce0();
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  if (*(int *)((int)local_16c + 0x198) == 0) {
    local_154 = local_154 * 1.43;
  }
  local_164[0] = local_16d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 0xe;
  uVar3 = FUN_0040cad0(local_150,param_2,&DAT_006935c4);
  local_4._0_1_ = 0xf;
  iVar4 = FUN_005acaf0(uVar3,local_164,s_Comic_Sans_MS_006930a4,local_13c,0);
  local_4._0_1_ = 0x10;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x14,&local_16d);
    *(float *)(iVar4 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x60);
  }
  local_4._0_1_ = 0xf;
  *param_3 = (float)fVar8;
  FUN_005acca0();
  local_4._0_1_ = 0xe;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  local_164[0] = local_16d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = s_General_00690810;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_General_00690810,~uVar6 - 1);
  local_4._0_1_ = 0x11;
  uVar3 = FUN_0040cad0(local_150,param_2,&DAT_006935c0);
  local_4._0_1_ = 0x12;
  iVar4 = FUN_005acaf0(uVar3,local_164,s_Comic_Sans_MS_006930a4,local_13c,0);
  local_4._0_1_ = 0x13;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x14,&local_16d);
    *(float *)(iVar4 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x60);
  }
  param_3[2] = (float)fVar8;
  local_4._0_1_ = 0x12;
  FUN_005acca0();
  local_4._0_1_ = 0x11;
  FUN_004040a0(1);
  local_4._0_1_ = 7;
  FUN_004040a0(1);
  if (pcStack_108 == (char *)0x0) {
    pcStack_108 = "";
  }
  local_164[0] = local_16d;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar7 = pcStack_108;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(pcStack_108,~uVar6 - 1);
  local_4._0_1_ = 0x14;
  iVar4 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar4 = FUN_0055b280();
  }
  if (*(char *)(iVar4 + 0x125) == '\0') {
    FUN_00409810(&DAT_006b3f70,&local_16d);
    local_4._0_1_ = 0x15;
    pcVar5 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x12d,local_150);
    (*pcVar5)();
    local_4._0_1_ = 0x14;
    FUN_004040a0(1);
  }
  local_16c = *(float *)(iVar4 + 0x44);
  uVar3 = __ftol(0,1);
  FUN_004b09f0(&iStack_168,local_164,uVar3);
  local_4._0_1_ = 0x17;
  FUN_004040a0(1);
  if (iStack_168 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_16d);
    local_4._0_1_ = 0x18;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_150);
    (*pcVar5)();
    local_4._0_1_ = 0x17;
    FUN_004040a0(1);
  }
  fVar8 = (float10)FUN_004b21b0(param_4);
  local_16c = (float)fVar8;
  if (iStack_168 == 0) {
    FUN_00409810(&DAT_006b3f70,&local_16d);
    local_4._0_1_ = 0x19;
    pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_150);
    (*pcVar5)();
    local_4._0_1_ = 0x17;
    FUN_004040a0(1);
  }
  fVar8 = (float10)FUN_004b1fc0(param_4);
  if (0.0 <= *param_3) {
    fVar2 = *param_3 * 0.0015625;
  }
  else {
    fVar2 = (1.0 - local_16c) * 0.5;
  }
  *param_3 = fVar2;
  if (0.0 <= param_3[2]) {
    fVar9 = (float10)0.0020833334 * (float10)param_3[2];
  }
  else {
    fVar9 = ((float10)1.0 - fVar8) * (float10)0.5;
  }
  param_3[2] = (float)fVar9;
  param_3[1] = fVar2 + local_16c;
  param_3[3] = (float)(fVar9 + fVar8);
  *param_1 = iStack_168;
  FUN_005844b0();
  local_140 = 1;
  local_4._0_1_ = 7;
  if (iStack_168 != 0) {
    FUN_004098d0();
    iStack_168 = 0;
  }
  local_4._0_1_ = 1;
  FUN_004040a0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  ExceptionList = pvStack_c;
  return param_1;
}

