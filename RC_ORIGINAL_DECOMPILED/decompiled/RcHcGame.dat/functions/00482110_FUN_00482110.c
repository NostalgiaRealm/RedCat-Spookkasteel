/*
 * FUN_00482110 at 00482110
 * undefined FUN_00482110(void)
 * Address ranges: 00482110-004828c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e388 slot 1 for .?AVCRcInput@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64e388 slot 1 for
   .?AVCRcInput@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_00482110(int param_1,float *param_2,undefined1 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  int local_70;
  int local_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined1 auStack_5c [4];
  char *pcStack_58;
  undefined1 auStack_4c [4];
  char *pcStack_48;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629588;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005b3070();
  if (DAT_006b915c == 0) {
    FUN_004bc480();
  }
  if ((*(char *)(param_1 + 0x46) != '\0') && (*(char *)(param_1 + 0x45) == '\0')) {
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
      local_4 = 0;
      pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                    s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_005aa220(&local_6c,&local_70,*(undefined4 *)(param_1 + 0x3c));
    fStack_60 = (float)local_70 * 0.125;
    local_68 = (float)local_6c * 0.125;
    FUN_005b2fa0(*(undefined4 *)(param_1 + 0x40));
  }
  local_3c[0] = param_3._0_1_;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_MoveForward_006932c8;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MoveForward_006932c8,~uVar5 - 1);
  local_4 = 1;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 2;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_004040a0(1);
  }
  local_70 = param_1 + 0x14;
  cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (cVar2 == '\0') {
    local_3c[0] = param_3._0_1_;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_006932bc;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006932bc,~uVar5 - 1);
    local_4 = 3;
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
      local_4._0_1_ = 4;
      pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                    s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,3);
      FUN_004040a0(1);
    }
    cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    if (cVar2 != '\0') {
      fStack_60 = 1.0;
    }
  }
  else {
    fStack_60 = -1.0;
  }
  local_3c[0] = param_3._0_1_;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_MoveDown_006932b0;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(s_MoveDown_006932b0,~uVar5 - 1);
  local_4 = 5;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 6;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (cVar2 == '\0') {
    local_3c[0] = param_3._0_1_;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_MoveUp_006932a8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(s_MoveUp_006932a8,~uVar5 - 1);
    local_4 = 7;
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
      local_4._0_1_ = 8;
      pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                    s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
      (*pcVar4)();
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_004040a0(1);
    }
    cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    if (cVar2 != '\0') {
      fStack_64 = 1.0;
    }
  }
  else {
    fStack_64 = -1.0;
  }
  local_2c[0] = param_3._0_1_;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = &DAT_0069329c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_0069329c,~uVar5 - 1);
  local_4 = 9;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(auStack_4c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 10;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(local_2c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  if (cVar2 == '\0') {
    local_3c[0] = param_3._0_1_;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_00693290;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_00693290,~uVar5 - 1);
    local_4._0_1_ = 0xb;
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = FUN_005ae390(auStack_4c,s_You_probably_forgot_to_call_CAda_00693308);
      local_4._0_1_ = 0xc;
      pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                    s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
      (*pcVar4)();
      local_4._0_1_ = 0xb;
      FUN_004040a0(1);
    }
    cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,9);
    FUN_004040a0(1);
    bVar1 = false;
    if (cVar2 != '\0') goto LAB_00482652;
  }
  else {
LAB_00482652:
    bVar1 = true;
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (bVar1) {
    local_68 = -1.0;
    goto LAB_00482854;
  }
  auStack_4c[0] = param_3._0_1_;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_MoveRight_00693284;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    pcVar7 = s_MoveRight_00693284;
    pcVar8 = pcStack_48;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4 = 0xd;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 0xe;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,0xd);
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(auStack_4c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  if (cVar2 == '\0') {
    auStack_5c[0] = param_3._0_1_;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_TurnRight_00693278;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = s_TurnRight_00693278;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcStack_58 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcStack_58 = pcStack_58 + 4;
      }
      for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcStack_58 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcStack_58 = pcStack_58 + 1;
      }
      FUN_00404190(uVar5);
    }
    local_4._0_1_ = 0xf;
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = FUN_005ae390(auStack_1c,s_You_probably_forgot_to_call_CAda_00693308);
      local_4._0_1_ = 0x10;
      pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                    s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
      (*pcVar4)();
      local_4._0_1_ = 0xf;
      FUN_004040a0(1);
    }
    cVar2 = FUN_00544ce0(auStack_5c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
    local_4 = CONCAT31(local_4._1_3_,0xd);
    FUN_004040a0(1);
    bVar1 = false;
    if (cVar2 != '\0') goto LAB_00482821;
  }
  else {
LAB_00482821:
    bVar1 = true;
  }
  if (pcStack_48 != (char *)0x0) {
    cVar2 = pcStack_48[-1];
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0(pcStack_48 + -1);
    }
    else {
      pcStack_48[-1] = cVar2 + -1;
    }
  }
  if (bVar1) {
    local_68 = 1.0;
  }
LAB_00482854:
  fVar9 = (float10)FUN_005b2fd0();
  if (fVar9 == (float10)0.0) {
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    if ((float10)1.0 < fVar9) {
      FUN_005b2f20();
    }
  }
  *param_2 = local_68;
  param_2[1] = fStack_64;
  param_2[2] = fStack_60;
  ExceptionList = pvStack_c;
  return;
}

