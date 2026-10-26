/*
 * FUN_00487130 at 00487130
 * undefined FUN_00487130(void)
 * Address ranges: 00487130-00487d7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00487130(int *param_1,undefined4 param_2,float *param_3,int *param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  int *piVar6;
  uint uVar7;
  float10 fVar8;
  char *pcStack_17c;
  char local_165;
  char local_164 [16];
  char *pcStack_154;
  int local_150;
  char *pcStack_14c;
  undefined1 auStack_148 [16];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  char acStack_104 [124];
  undefined1 auStack_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062a07f;
  pvStack_c = ExceptionList;
  pcStack_17c = s__Loading_ini_00693510;
  local_128 = 0;
  ExceptionList = &pvStack_c;
  uVar2 = FUN_005a1d60();
  FUN_0040cad0(local_138,uVar2);
  local_4 = 1;
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_17c = (char *)0x48718c;
    iVar3 = FUN_0055b280();
  }
  if (*(char *)(iVar3 + 0x125) == '\0') {
    pcStack_17c = &local_165;
    FUN_00409810(&DAT_006b3f70);
    pcStack_17c = local_164;
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_Initialized_00691bb0,s___AdamSource_AdamEngine_h_0068eb58,
                                  0x127);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,1);
    pcStack_17c = (char *)0x1;
    FUN_004040a0();
  }
  local_150 = 0;
  pcStack_17c = (char *)0x4871ef;
  FUN_005844b0();
  local_4._0_1_ = 3;
  pcStack_14c = (char *)0x0;
  pcStack_17c = (char *)0x487204;
  FUN_005844b0();
  acStack_104[0] = local_165;
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 4;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(s_General_00690810);
  pcStack_17c = s__FileName_00693650;
  local_4._0_1_ = 5;
  uVar2 = FUN_0040cad0(auStack_88,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 6;
  iVar3 = FUN_005acaf0(uVar2,acStack_104,&DAT_006b3f70,local_138);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 7;
  auStack_124[0] = *(undefined1 *)(iVar3 + 0x14);
  FUN_004040a0();
  pcStack_17c = (char *)0xffffffff;
  FUN_0040cc00((undefined1 *)(iVar3 + 0x14),0);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 8;
  auStack_114[0] = auStack_124[0];
  FUN_004040a0();
  pcStack_17c = (char *)0xffffffff;
  FUN_0040cc00(auStack_124,0);
  local_4._0_1_ = 0xd;
  pcStack_17c = (char *)0x1;
  FUN_004040a0();
  local_4._0_1_ = 0xc;
  pcStack_17c = (char *)0x487308;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0xb;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  pcStack_17c = (char *)0x0;
  local_164[0] = local_165;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(s_General_00690810);
  pcStack_17c = &DAT_006935c4;
  local_4._0_1_ = 0xe;
  uVar2 = FUN_0040cad0(auStack_148,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 0xf;
  iVar3 = FUN_005ac9d0(uVar2,local_164,0,local_138);
  local_4._0_1_ = 0x10;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    pcStack_17c = &local_165;
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar3 + 0x60);
  }
  local_4._0_1_ = 0xf;
  *param_3 = (float)fVar8;
  pcStack_17c = (char *)0x4873ee;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0xe;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  pcStack_17c = (char *)0x0;
  local_164[0] = local_165;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(s_General_00690810);
  pcStack_17c = &DAT_006935c0;
  local_4._0_1_ = 0x11;
  uVar2 = FUN_0040cad0(auStack_148,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 0x12;
  iVar3 = FUN_005ac9d0(uVar2,local_164,0,local_138);
  local_4._0_1_ = 0x13;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    pcStack_17c = &local_165;
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_3[2] = (float)fVar8;
  local_4._0_1_ = 0x12;
  pcStack_17c = (char *)0x4874cc;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0x11;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  pcStack_17c = (char *)0x0;
  local_164[0] = local_165;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(s_General_00690810);
  pcStack_17c = s__Width_00693648;
  local_4._0_1_ = 0x14;
  uVar2 = FUN_0040cad0(auStack_148,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 0x15;
  iVar3 = FUN_005ac9d0(uVar2,local_164,0x20,local_138);
  local_4._0_1_ = 0x16;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    pcStack_17c = &local_165;
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_3[1] = (float)fVar8;
  local_4._0_1_ = 0x15;
  pcStack_17c = (char *)0x4875aa;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0x14;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  pcStack_17c = (char *)0x0;
  local_164[0] = local_165;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(s_General_00690810);
  pcStack_17c = s__Height_00693640;
  local_4._0_1_ = 0x17;
  uVar2 = FUN_0040cad0(auStack_148,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 0x18;
  iVar3 = FUN_005ac9d0(uVar2,local_164,0x20,local_138);
  local_4._0_1_ = 0x19;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    pcStack_17c = &local_165;
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar3 + 0x60);
  }
  param_3[3] = (float)fVar8;
  local_4._0_1_ = 0x18;
  pcStack_17c = (char *)0x487688;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0x17;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  pcStack_17c = (char *)0x0;
  local_164[0] = local_165;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(s_General_00690810);
  pcStack_17c = s__BaseX_00693638;
  local_4._0_1_ = 0x1a;
  uVar2 = FUN_0040cad0(auStack_148,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 0x1b;
  iVar3 = FUN_005ac9d0(uVar2,local_164,0,local_138);
  local_4._0_1_ = 0x1c;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    pcStack_17c = &local_165;
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  pcStack_17c = (char *)0x487754;
  iVar3 = __ftol();
  local_4._0_1_ = 0x1b;
  *param_4 = iVar3;
  pcStack_17c = (char *)0x487771;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0x1a;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  pcStack_17c = (char *)0x0;
  pcStack_154 = s_General_00690810;
  local_164[0] = local_165;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(pcStack_154);
  pcStack_17c = s__BaseY_00693630;
  local_4._0_1_ = 0x1d;
  uVar2 = FUN_0040cad0(auStack_148,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 0x1e;
  iVar3 = FUN_005ac9d0(uVar2,local_164,0,local_138);
  local_4._0_1_ = 0x1f;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    pcStack_17c = &local_165;
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  pcStack_17c = (char *)0x487843;
  iVar3 = __ftol();
  param_4[2] = iVar3;
  local_4._0_1_ = 0x1e;
  pcStack_17c = (char *)0x48785a;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0x1d;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  local_164[0] = local_165;
  pcStack_17c = (char *)0x0;
  pcStack_154 = s_General_00690810;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(pcStack_154);
  pcStack_17c = s__BaseWidth_00693624;
  local_4._0_1_ = 0x20;
  uVar2 = FUN_0040cad0(auStack_148,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 0x21;
  iVar3 = FUN_005ac9d0(uVar2,local_164,0x20,local_138);
  local_4._0_1_ = 0x22;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    pcStack_17c = &local_165;
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  pcStack_17c = (char *)0x48792c;
  iVar3 = __ftol();
  param_4[1] = iVar3;
  local_4._0_1_ = 0x21;
  pcStack_17c = (char *)0x487943;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0x20;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  pcStack_17c = (char *)0x0;
  pcStack_154 = s_General_00690810;
  local_164[0] = local_165;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar5 = s_General_00690810;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcStack_17c = (char *)(~uVar7 - 1);
  FUN_004040f0(pcStack_154);
  pcStack_17c = s__BaseHeight_00693618;
  local_4._0_1_ = 0x23;
  uVar2 = FUN_0040cad0(auStack_148,param_2);
  pcStack_17c = (char *)0x0;
  local_4._0_1_ = 0x24;
  iVar3 = FUN_005ac9d0(uVar2,local_164,0x20,local_138);
  local_4._0_1_ = 0x25;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    pcStack_17c = &local_165;
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  pcStack_17c = (char *)0x487a15;
  iVar3 = __ftol();
  param_4[3] = iVar3;
  local_4._0_1_ = 0x24;
  pcStack_17c = (char *)0x487a2c;
  FUN_005acca0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 0x23;
  FUN_004040a0();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  if (*param_3 < 0.0) {
    *param_3 = (640.0 - param_3[1]) * 0.5;
  }
  if (param_3[2] < 0.0) {
    param_3[2] = (480.0 - param_3[3]) * 0.5;
  }
  param_4[1] = param_4[1] + *param_4;
  param_4[3] = param_4[3] + param_4[2];
  pcStack_17c = &DAT_00693610;
  param_3[1] = param_3[1] + *param_3;
  param_3[3] = param_3[3] + param_3[2];
  *param_3 = *param_3 * 0.0015625;
  param_3[1] = param_3[1] * 0.0015625;
  param_3[2] = param_3[2] * 0.0020833334;
  param_3[3] = param_3[3] * 0.0020833334;
  pcVar5 = (char *)FUN_0040cad0(auStack_148,auStack_114);
  local_4._0_1_ = 0x26;
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    pcStack_17c = (char *)0x487b19;
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xd8) == 0) {
    pcStack_17c = &local_165;
    FUN_00409810(&DAT_006b3f70);
    pcStack_17c = local_164;
    local_4._0_1_ = 0x27;
    pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar4)();
    local_4._0_1_ = 0x26;
    pcStack_17c = (char *)0x1;
    FUN_004040a0();
  }
  pcStack_17c = pcVar5;
  piVar6 = (int *)FUN_0050d980(&pcStack_154);
  local_4._0_1_ = 0x28;
  if (local_150 != *piVar6) {
    if (local_150 != 0) {
      pcStack_17c = (char *)0x487b9e;
      FUN_004098d0();
    }
    local_150 = *piVar6;
    pcStack_17c = (char *)0x487bad;
    FUN_005844b0();
  }
  local_4._0_1_ = 0x26;
  pcStack_17c = (char *)0x487bbd;
  FUN_0057d310();
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 10;
  FUN_004040a0();
  if (param_5 != '\0') {
    pcStack_17c = s_A_bmp_00693608;
    pcVar5 = (char *)FUN_0040cad0(auStack_148,auStack_114);
    local_4._0_1_ = 0x29;
    iVar3 = DAT_006c8de0;
    if (DAT_006c8de0 == 0) {
      pcStack_17c = (char *)0x487c10;
      iVar3 = FUN_0055b280();
    }
    if (*(int *)(iVar3 + 0xd8) == 0) {
      pcStack_17c = &local_165;
      FUN_00409810(&DAT_006b3f70);
      pcStack_17c = local_164;
      local_4._0_1_ = 0x2a;
      pcVar4 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,
                                    0x188);
      (*pcVar4)();
      local_4._0_1_ = 0x29;
      pcStack_17c = (char *)0x1;
      FUN_004040a0();
    }
    pcStack_17c = pcVar5;
    piVar6 = (int *)FUN_0050d980(&pcStack_154);
    local_4._0_1_ = 0x2b;
    if (pcStack_14c != (char *)*piVar6) {
      if (pcStack_14c != (char *)0x0) {
        pcStack_17c = (char *)0x487c95;
        FUN_004098d0();
      }
      pcStack_14c = (char *)*piVar6;
      pcStack_17c = (char *)0x487ca4;
      FUN_005844b0();
    }
    local_4._0_1_ = 0x29;
    pcStack_17c = (char *)0x487cb4;
    FUN_0057d310();
    pcStack_17c = (char *)0x1;
    local_4._0_1_ = 10;
    FUN_004040a0();
  }
  if ((local_150 != 0) && (pcStack_14c != (char *)0x0)) {
    pcStack_154 = (char *)&pcStack_17c;
    pcStack_17c = pcStack_14c;
    FUN_005844b0();
    local_4._0_1_ = 10;
    FUN_00412de0();
    FUN_0050aea0();
  }
  *param_1 = local_150;
  pcStack_17c = (char *)0x487d11;
  FUN_005844b0();
  local_128 = 1;
  pcStack_17c = (char *)0x1;
  local_4._0_1_ = 4;
  FUN_004040a0();
  local_4._0_1_ = 3;
  pcStack_17c = (char *)0x487d3d;
  FUN_0057d310();
  local_4._0_1_ = 1;
  pcStack_17c = (char *)0x487d4e;
  FUN_0057d310();
  pcStack_17c = (char *)0x1;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0();
  ExceptionList = pvStack_c;
  return param_1;
}

