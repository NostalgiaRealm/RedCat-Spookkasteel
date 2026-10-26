/*
 * FUN_004d57b0 at 004d57b0
 * undefined FUN_004d57b0(void)
 * Address ranges: 004d57b0-004d60ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004d57b0(undefined4 *param_1)

{
  float fVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  char *pcVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined1 local_101;
  undefined1 auStack_f4 [4];
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 local_e4 [4];
  int iStack_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined4 *local_9c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631a2f;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_9c = param_1;
  FUN_00501cb0();
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_004041b0();
  FUN_004041b0();
  *(undefined1 *)(param_1 + 0x4c) = 1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 1;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x56] = 200;
  param_1[99] = 0;
  param_1[100] = 0;
  puVar3 = operator_new(0x10);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    *(undefined4 *)(puVar3 + 4) = 0;
    *puVar3 = local_101;
    *(undefined4 *)(puVar3 + 8) = 0;
    *(undefined4 *)(puVar3 + 0xc) = 0;
    local_4._0_1_ = 3;
    FUN_00514e80();
  }
  param_1[0x6c] = puVar3;
  param_1[0x70] = 0;
  local_4._0_1_ = 1;
  FUN_005545a0();
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  *(undefined1 *)(param_1 + 0x7f) = local_101;
  local_4._0_1_ = 4;
  FUN_004040a0();
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  local_4._0_1_ = 7;
  FUN_004041b0();
  FUN_0059b1d0();
  param_1[0x8b] = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  param_1[0x8c] = 0x447a0000;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x8f) = 0;
  FUN_004041b0();
  *param_1 = &PTR_FUN_0064f118;
  fVar8 = (float10)FUN_00431000();
  fVar1 = (float)fVar8;
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x140) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0xf4);
    *(float *)(iVar4 + 0x140) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x140);
  }
  _DAT_006b92a8 = (float)fVar8;
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x6bc) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x670);
    *(float *)(iVar4 + 0x6bc) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x6bc);
  }
  _DAT_006b92ac = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x728) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x6dc);
    *(float *)(iVar4 + 0x728) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x728);
  }
  _DAT_006b92b0 = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x2f0) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x2a4);
    *(float *)(iVar4 + 0x2f0) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x2f0);
  }
  _DAT_006b92b4 = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x650) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x604);
    *(float *)(iVar4 + 0x650) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x650);
  }
  DAT_006b92b8 = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x5e4) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x598);
    *(float *)(iVar4 + 0x5e4) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x5e4);
  }
  _DAT_006b92bc = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x35c) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x310);
    *(float *)(iVar4 + 0x35c) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x35c);
  }
  DAT_006b92c0 = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x3c8) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x37c);
    *(float *)(iVar4 + 0x3c8) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x3c8);
  }
  DAT_006b92c4 = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x434) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 1000);
    *(float *)(iVar4 + 0x434) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x434);
  }
  DAT_006b92c8 = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x4a0) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x454);
    *(float *)(iVar4 + 0x4a0) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x4a0);
  }
  DAT_006b92cc = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x50c) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x4c0);
    *(float *)(iVar4 + 0x50c) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x50c);
  }
  DAT_006b92d0 = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x578) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x52c);
    *(float *)(iVar4 + 0x578) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x578);
  }
  DAT_006b92d4 = (float)(fVar8 * (float10)fVar1);
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x1ac) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar4 + 0x160);
    *(float *)(iVar4 + 0x1ac) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar4 + 0x1ac);
  }
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x218) == 0.0) {
    fVar9 = (float10)FUN_005ad390(iVar4 + 0x1cc);
    *(float *)(iVar4 + 0x218) = (float)fVar9;
  }
  else {
    fVar9 = (float10)*(float *)(iVar4 + 0x218);
  }
  iVar4 = FUN_004d60b0();
  if (*(float *)(iVar4 + 0x284) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x238);
    *(float *)(iVar4 + 0x284) = (float)fVar10;
  }
  else {
    fVar10 = (float10)*(float *)(iVar4 + 0x284);
  }
  local_d4 = (float)(fVar8 * (float10)fVar1) * -0.5;
  local_d0 = -_DAT_006b92b4;
  local_cc = (float)(fVar10 * (float10)fVar1 * (float10)-0.5);
  local_c8 = local_d4 + (float)(fVar8 * (float10)fVar1);
  local_c4 = local_d0 + (float)(fVar9 * (float10)fVar1);
  local_c0 = (float)((float10)local_cc + fVar10 * (float10)fVar1);
  FUN_00554a30();
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  FUN_005b3070();
  param_1[0x58] = DAT_006b92b8;
  param_1[0x5b] = (float)param_1[0x58] * -2.0 - 1.0;
  param_1[0x65] = SQRT(_DAT_006b92bc * _DAT_006b92b0 + _DAT_006b92bc * _DAT_006b92b0);
  iVar4 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar4 = FUN_004bc480();
  }
  if (*(int *)(iVar4 + 0x3a8) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 9;
    pcVar5 = (code *)FUN_005a07f0(s_m_Input____0_00693a28,s___AdamSource_AdamApplication_h_0068e58c,
                                  0x136);
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_004040a0();
  }
  FUN_0053dc20();
  if (*(int *)(iVar4 + 0x3a4) == 0) {
    FUN_00409810(&DAT_006b3f70);
    local_4._0_1_ = 10;
    pcVar5 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130)
    ;
    (*pcVar5)();
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_004040a0();
  }
  FUN_004040a0();
  iVar4 = -1;
  pcVar7 = s_General_00690810;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_General_00690810);
  local_4._0_1_ = 0xb;
  FUN_004040a0();
  iVar4 = -1;
  pcVar7 = s_PlayerName_006996ec;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_PlayerName_006996ec);
  local_4._0_1_ = 0xc;
  uVar6 = FUN_0043b0a0();
  local_4._0_1_ = 0xd;
  iVar4 = FUN_005acbc0(auStack_f4,local_e4,&DAT_006b92e0,uVar6);
  auStack_bc[0] = *(undefined1 *)(iVar4 + 0x14);
  local_4._0_1_ = 0xe;
  FUN_004040a0();
  FUN_0040cc00(iVar4 + 0x14,0);
  auStack_ac[0] = auStack_bc[0];
  local_4._0_1_ = 0xf;
  FUN_004040a0();
  FUN_0040cc00(auStack_bc,0);
  local_4._0_1_ = 0x10;
  FUN_0040cc00(auStack_ac,0);
  local_4._0_1_ = 0xf;
  FUN_004040a0();
  local_4._0_1_ = 0xe;
  FUN_004040a0();
  local_4._0_1_ = 0xd;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,0xc);
  FUN_004040a0();
  if (iStack_f0 != 0) {
    cVar2 = *(char *)(iStack_f0 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_f0 + -1) = cVar2 + -1;
    }
  }
  iStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  if (iStack_e0 != 0) {
    cVar2 = *(char *)(iStack_e0 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0();
    }
    else {
      *(char *)(iStack_e0 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

