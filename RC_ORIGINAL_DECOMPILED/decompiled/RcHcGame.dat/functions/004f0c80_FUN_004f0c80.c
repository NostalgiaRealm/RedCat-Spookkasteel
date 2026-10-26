/*
 * FUN_004f0c80 at 004f0c80
 * undefined FUN_004f0c80(void)
 * Address ranges: 004f0c80-004f102c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x004f0dd8) */
/* WARNING: Removing unreachable block (ram,0x004f0de9) */

int * FUN_004f0c80(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int aiStack_a4 [5];
  undefined4 uStack_90;
  char *pcStack_8c;
  char *pcStack_88;
  char *pcStack_84;
  int *piStack_80;
  int local_70;
  int iStack_6c;
  undefined1 auStack_68 [4];
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 local_40 [16];
  int local_30 [9];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  iVar3 = param_3;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634157;
  pvStack_c = ExceptionList;
  local_64 = 0;
  if ((param_3 < 0) || (ExceptionList = &pvStack_c, 8 < param_3)) {
    piStack_80 = (int *)param_3;
    pcStack_88 = local_40;
    pcStack_84 = s_____0_<__a_Size_(_i)_<__8_)_0069c404;
    pcStack_8c = (char *)0x4f0cc1;
    ExceptionList = &pvStack_c;
    piStack_80 = (int *)FUN_005ae390();
    pcStack_84 = (char *)0x17f;
    pcStack_88 = s_D__Work_RCHorror_AdamSource_Adam_0069c284;
    pcStack_8c = s__0<_a_Size)_&&_(a_Size<_8)_0069c3e8;
    local_4 = 1;
    uStack_90 = 0x4f0ce4;
    pcVar2 = (code *)FUN_005a07f0();
    uStack_90 = 0x4f0ce6;
    (*pcVar2)();
    local_4 = local_4 & 0xffffff00;
    piStack_80 = (int *)0x1;
    pcStack_84 = (char *)0x4f0cf8;
    FUN_004040a0();
  }
  local_70 = 0;
  local_4 = 2;
  local_30[0] = 1 << ((byte)iVar3 & 0x1f);
  local_30[3] = 1;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  local_30[1] = local_30[0];
  local_30[2] = local_30[0];
  local_30[8] = 0;
  iVar3 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    piStack_80 = (int *)0x4f0d44;
    iVar3 = FUN_0055b280();
  }
  if (*(int *)(iVar3 + 0xd8) == 0) {
    piStack_80 = &param_3;
    pcStack_84 = &DAT_006b3f70;
    pcStack_88 = (char *)0x4f0d64;
    FUN_00409810();
    piStack_80 = (int *)auStack_60;
    local_4._0_1_ = 3;
    pcStack_84 = (char *)0x188;
    pcStack_88 = s___AdamSource_AdamEngine_h_0068eb58;
    pcStack_8c = s_m_BitmapMgr_0068eb4c;
    uStack_90 = 0x4f0d82;
    pcVar2 = (code *)FUN_005a07f0();
    uStack_90 = 0x4f0d84;
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,2);
    piStack_80 = (int *)0x1;
    pcStack_84 = (char *)0x4f0d97;
    FUN_004040a0();
  }
  piStack_80 = (int *)0x1;
  piVar4 = local_30;
  piVar6 = aiStack_a4;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  }
  piVar4 = (int *)FUN_0050d4d0(auStack_68,param_2);
  if (*piVar4 != 0) {
    local_4._0_1_ = 4;
    local_70 = *piVar4;
    piStack_80 = (int *)0x4f0dfe;
    FUN_005844b0();
  }
  local_4._0_1_ = 2;
  piStack_80 = (int *)0x4f0e0c;
  FUN_0057d310();
  if (local_70 == 0) {
    piStack_80 = (int *)0x0;
    auStack_60[0] = (undefined1)param_3;
    pcStack_84 = (char *)0x4f0e27;
    FUN_004040a0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006b3f70;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    piStack_80 = (int *)(~uVar5 - 1);
    pcStack_84 = &DAT_006b3f70;
    pcStack_88 = (char *)0x4f0e45;
    FUN_004040f0();
    piStack_80 = (int *)auStack_60;
    local_4._0_1_ = 5;
    pcStack_84 = (char *)0x191;
    pcStack_88 = s_D__Work_RCHorror_AdamSource_Adam_0069c284;
    pcStack_8c = s_result_IsNotNull____0069c3d4;
    uStack_90 = 0x4f0e63;
    pcVar2 = (code *)FUN_005a07f0();
    uStack_90 = 0x4f0e65;
    (*pcVar2)();
    local_4._0_1_ = 2;
    piStack_80 = (int *)0x1;
    pcStack_84 = (char *)0x4f0e78;
    FUN_004040a0();
  }
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    piStack_80 = (int *)0x4f0e87;
    iVar3 = FUN_004bc480();
  }
  if (*(int *)(iVar3 + 0x3a4) == 0) {
    piStack_80 = &param_3;
    pcStack_84 = &DAT_006b3f70;
    pcStack_88 = (char *)0x4f0ea7;
    FUN_00409810();
    piStack_80 = (int *)auStack_50;
    local_4._0_1_ = 6;
    pcStack_84 = (char *)0x130;
    pcStack_88 = s___AdamSource_AdamApplication_h_0068e58c;
    pcStack_8c = s_m_Game_0068e584;
    uStack_90 = 0x4f0ec5;
    pcVar2 = (code *)FUN_005a07f0();
    uStack_90 = 0x4f0ec7;
    (*pcVar2)();
    local_4._0_1_ = 2;
    piStack_80 = (int *)0x1;
    pcStack_84 = (char *)0x4f0eda;
    FUN_004040a0();
  }
  piStack_80 = &iStack_6c;
  pcStack_84 = (char *)0x4f0eea;
  FUN_00453d20();
  piStack_80 = (int *)local_70;
  if (local_70 != 0) {
    *(int *)(local_70 + 0x14) = *(int *)(local_70 + 0x14) + 1;
  }
  local_4._0_1_ = 7;
  pcStack_84 = (char *)0x4f0f13;
  FUN_00421430();
  pcStack_84 = (char *)0x4f0f1a;
  cVar1 = FUN_004fbca0();
  if (cVar1 == '\0') {
    piStack_80 = (int *)local_70;
    if (local_70 != 0) {
      *(int *)(local_70 + 0x14) = *(int *)(local_70 + 0x14) + 1;
    }
    local_4._0_1_ = 7;
    pcStack_84 = (char *)0x4f0f4b;
    FUN_00421430();
    pcStack_84 = (char *)0x4f0f52;
    cVar1 = FUN_004fb310();
    if (cVar1 == '\0') {
      piStack_80 = (int *)0x0;
      auStack_60[0] = (undefined1)param_3;
      pcStack_84 = (char *)0x4f0f6b;
      FUN_004040a0();
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_006b3f70;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      piStack_80 = (int *)(~uVar5 - 1);
      pcStack_84 = &DAT_006b3f70;
      pcStack_88 = (char *)0x4f0f89;
      FUN_004040f0();
      piStack_80 = (int *)auStack_60;
      local_4._0_1_ = 10;
      pcStack_84 = (char *)0x198;
      pcStack_88 = s_D__Work_RCHorror_AdamSource_Adam_0069c284;
      pcStack_8c = s_subLevel_>AddBitmap__result___0069c3b4;
      uStack_90 = 0x4f0fa7;
      pcVar2 = (code *)FUN_005a07f0();
      uStack_90 = 0x4f0fa9;
      (*pcVar2)();
      local_4._0_1_ = 7;
      piStack_80 = (int *)0x1;
      pcStack_84 = (char *)0x4f0fbc;
      FUN_004040a0();
    }
  }
  *param_1 = local_70;
  if (local_70 != 0) {
    *(int *)(local_70 + 0x14) = *(int *)(local_70 + 0x14) + 1;
  }
  local_64 = 1;
  local_4._0_1_ = 2;
  if (iStack_6c != 0) {
    piStack_80 = (int *)0x4f0ff2;
    FUN_004098d0();
    iStack_6c = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_70 != 0) &&
     (iVar3 = *(int *)(local_70 + 0x14) + -1, *(int *)(local_70 + 0x14) = iVar3, iVar3 == 0)) {
    piStack_80 = (int *)0x0;
    pcStack_84 = (char *)0x4f1019;
    FUN_005abfc0();
  }
  ExceptionList = pvStack_c;
  return param_1;
}

