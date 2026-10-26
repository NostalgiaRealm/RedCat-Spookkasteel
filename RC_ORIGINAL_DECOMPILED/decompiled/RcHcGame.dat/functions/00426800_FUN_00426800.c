/*
 * FUN_00426800 at 00426800
 * undefined FUN_00426800(void)
 * Address ranges: 00426800-00426df1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00426800(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  float10 fVar10;
  undefined1 local_b5;
  undefined1 local_b4 [4];
  char *local_b0;
  undefined1 local_a4 [4];
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float local_94;
  int local_90;
  undefined1 local_8c [4];
  int iStack_88;
  undefined4 *local_7c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00622af3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_7c = param_1;
  FUN_00425220(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0064bda0;
  FUN_00425390(local_8c);
  local_4._0_1_ = 1;
  FUN_00425570(local_a4);
  local_4._0_1_ = 2;
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_AverageShotsPerSalvo_0068fc98;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_AverageShotsPerSalvo_0068fc98,~uVar7 - 1);
  local_4 = CONCAT31(local_4._1_3_,3);
  iVar2 = FUN_005ac9d0(local_b4,local_a4,3,local_8c,0);
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  param_1[0xb] = iVar4;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_94 = (float)(int)param_1[0xb];
  local_90 = FUN_0060a4a0();
  local_90 = local_90 % 10000;
  uVar5 = __ftol();
  param_1[0xb] = uVar5;
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_BulletDeviation_0068fc88;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_BulletDeviation_0068fc88,~uVar7 - 1);
  local_4._0_1_ = 4;
  iVar4 = FUN_005ac8b0(local_b4,local_a4,0x3d4ccccd,local_8c,0);
  local_4._0_1_ = 5;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_b5);
    *(float *)(iVar4 + 0x60) = (float)fVar10;
  }
  else {
    fVar10 = (float10)*(float *)(iVar4 + 0x60);
  }
  param_1[10] = (float)fVar10;
  local_4._0_1_ = 4;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_ChanceToMoveAfterSalvo_0068fc70;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_ChanceToMoveAfterSalvo_0068fc70,~uVar7 - 1);
  local_4._0_1_ = 6;
  iVar4 = FUN_005ac8b0(local_b4,local_a4,0x3f000000,local_8c,0);
  local_4._0_1_ = 7;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_b5);
    *(float *)(iVar4 + 0x60) = (float)fVar10;
  }
  else {
    fVar10 = (float10)*(float *)(iVar4 + 0x60);
  }
  param_1[0xd] = (float)fVar10;
  local_4._0_1_ = 6;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_DrawMotionPart_0068fc60;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_DrawMotionPart_0068fc60,~uVar7 - 1);
  local_4._0_1_ = 8;
  iVar4 = FUN_005ac8b0(local_b4,local_a4,0x3f000000,local_8c,0);
  local_4._0_1_ = 9;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_b5);
    *(float *)(iVar4 + 0x60) = (float)fVar10;
  }
  else {
    fVar10 = (float10)*(float *)(iVar4 + 0x60);
  }
  param_1[9] = (float)fVar10;
  local_4._0_1_ = 8;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_WaitTimeAfterSalvo_0068fc4c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WaitTimeAfterSalvo_0068fc4c,~uVar7 - 1);
  local_4._0_1_ = 10;
  iVar4 = FUN_005ac9d0(local_b4,local_a4,2,local_8c,0);
  local_4._0_1_ = 0xb;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_b5);
    *(float *)(iVar4 + 0x60) = (float)fVar10;
  }
  uVar5 = __ftol();
  param_1[0xe] = uVar5;
  local_4._0_1_ = 10;
  FUN_005acca0();
  local_4._0_1_ = 2;
  FUN_004040a0(1);
  local_b4[0] = local_b5;
  FUN_004040a0(0);
  uVar7 = 0xffffffff;
  pcVar9 = s_WaitTimeBetweenShots_0068fc34;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_WaitTimeBetweenShots_0068fc34,~uVar7 - 1);
  local_4._0_1_ = 0xc;
  iVar4 = FUN_005ac9d0(local_b4,local_a4,2,local_8c,0);
  local_4._0_1_ = 0xd;
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_b5);
    *(float *)(iVar4 + 0x60) = (float)fVar10;
  }
  uVar5 = __ftol();
  param_1[0xc] = uVar5;
  local_4._0_1_ = 0xc;
  FUN_005acca0();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_004040a0(1);
  if (((float)param_1[9] < 0.0) || (1.0 < (float)param_1[9])) {
    local_b4[0] = local_b5;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar9 = s_ShootInfo_contains_invalid_draw_m_0068fc08;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar1 = FUN_00401940(uVar7,1);
    if (cVar1 != '\0') {
      pcVar9 = s_ShootInfo_contains_invalid_draw_m_0068fc08;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)local_b0 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        local_b0 = local_b0 + 4;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_b0 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        local_b0 = local_b0 + 1;
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 0xe;
    pcVar6 = (code *)FUN_005a07f0(s_0_0f_<__m_DrawPart_&&_m_DrawPart_0068fbdc,
                                  s_D__Work_RCHorror_RCSource_RCEnem_0068fa60,0x89,local_b4);
    (*pcVar6)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  if (local_a0 != 0) {
    cVar1 = *(char *)(local_a0 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_a0 + -1);
    }
    else {
      *(char *)(local_a0 + -1) = cVar1 + -1;
    }
  }
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  if (iStack_88 != 0) {
    cVar1 = *(char *)(iStack_88 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_88 + -1);
    }
    else {
      *(char *)(iStack_88 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

