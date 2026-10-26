/*
 * FUN_00483780 at 00483780
 * undefined FUN_00483780(void)
 * Address ranges: 00483780-00483bbc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_00483780(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined1 auStack_4c [4];
  undefined4 *puStack_48;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629760;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006933b4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006933b4,~uVar5 - 1);
  local_4 = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (cVar2 != '\0') {
    ExceptionList = pvStack_c;
    return 0;
  }
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006933ac;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006933ac,~uVar5 - 1);
  local_4 = 2;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 3;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (cVar2 != '\0') {
    ExceptionList = pvStack_c;
    return 1;
  }
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_006933a4;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_006933a4,~uVar5 - 1);
  local_4 = 4;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 5;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (cVar2 != '\0') {
    ExceptionList = pvStack_c;
    return 2;
  }
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = &DAT_0069339c;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  FUN_004040f0(&DAT_0069339c,~uVar5 - 1);
  local_4 = 6;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_2c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 7;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(local_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (cVar2 != '\0') {
    ExceptionList = pvStack_c;
    return 3;
  }
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar8 = (char *)&DAT_00693394;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    puVar7 = &DAT_00693394;
    puVar9 = puStack_48;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    FUN_00404190(uVar5);
  }
  local_4 = 8;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(auStack_1c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 9;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = CONCAT31(local_4._1_3_,8);
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(auStack_4c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  if (puStack_48 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)puStack_48 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)puStack_48 + -1));
    }
    else {
      *(char *)((int)puStack_48 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return (-(uint)(cVar2 != '\0') & 5) - 1;
}

