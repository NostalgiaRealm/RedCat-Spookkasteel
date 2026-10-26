/*
 * FUN_004c7560 at 004c7560
 * undefined FUN_004c7560(void)
 * Address ranges: 004c7560-004c7853
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004c7560(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined3 extraout_var;
  code *pcVar5;
  undefined3 extraout_var_00;
  undefined3 uVar6;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  undefined1 local_155;
  undefined1 local_154 [16];
  undefined1 local_144 [4];
  int iStack_140;
  undefined1 local_134 [4];
  undefined1 *local_130;
  undefined1 local_124 [280];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630788;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  local_155 = 0;
  iVar8 = 0;
  do {
    uVar2 = FUN_005ae390(local_144,s_ScreenDump_d_bmp_00698a08,iVar8);
    local_4._0_1_ = 1;
    uVar2 = FUN_005a3150(local_154,uVar2);
    local_4._0_1_ = 2;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    puVar3 = local_130;
    if (local_130 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060b47d(puVar3,local_124);
    if (iVar4 == -1) {
      puVar3 = &DAT_0064a3b4;
      if (local_130 != (undefined1 *)0x0) {
        puVar3 = local_130;
      }
      iVar8 = DAT_006b915c;
      if (DAT_006b915c == 0) {
        iVar8 = FUN_004bc480();
      }
      iVar8 = *(int *)(iVar8 + 0x3a0);
      if (*(int *)(iVar8 + 0x100) != 0) goto LAB_004c775d;
      local_154[0] = 0;
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      goto code_r0x004c770f;
    }
    FUN_0060b60c(iVar4);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 100);
  iVar8 = FUN_005a2f50(local_154);
  puVar3 = *(undefined1 **)(iVar8 + 4);
  local_4._0_1_ = 3;
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  uVar2 = FUN_005ae390(local_144,s_Could_not_generate_a_valid_filen_006989dc,puVar3);
  local_4._0_1_ = 4;
  FUN_0040cc00(uVar2,0,0xffffffff);
  local_4._0_1_ = 3;
  FUN_004040a0(1);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004040a0(1);
  uVar6 = extraout_var;
  goto LAB_004c7816;
  while( true ) {
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
    if (cVar1 == '\0') break;
code_r0x004c770f:
    if (uVar7 == 0) break;
  }
  FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
  local_4._0_1_ = 5;
  pcVar5 = (code *)FUN_005a07f0(s_m_Engine_006934e0,s___AdamSource_AdamEngine_h_0068eb58,0x1ad,
                                local_154);
  (*pcVar5)();
  local_4._0_1_ = 0;
  FUN_004040a0(1);
LAB_004c775d:
  iVar8 = FUN_005b7cc0(*(undefined4 *)(iVar8 + 0x100),puVar3);
  if (iVar8 == 0) {
    uVar2 = FUN_004caa20(local_144,s_Error_writing_screen_to_006989a8,local_134);
    local_4 = CONCAT31(local_4._1_3_,7);
    FUN_0040cc00(uVar2,0,0xffffffff);
    uVar6 = 0;
    if (iStack_140 != 0) {
      cVar1 = *(char *)(iStack_140 + -1);
      uVar6 = (undefined3)((uint)iStack_140 >> 8);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_140 + -1));
        uVar6 = extraout_var_01;
      }
      else {
        *(char *)(iStack_140 + -1) = cVar1 + -1;
      }
    }
  }
  else {
    uVar2 = FUN_004caa20(local_144,s_Saved_screendump_to_006989c4,local_134);
    local_4._0_1_ = 6;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_155 = 1;
    uVar6 = extraout_var_00;
  }
LAB_004c7816:
  if (local_130 != (undefined1 *)0x0) {
    cVar1 = local_130[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_130 + -1);
      uVar6 = extraout_var_02;
    }
    else {
      local_130[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar6,local_155);
}

