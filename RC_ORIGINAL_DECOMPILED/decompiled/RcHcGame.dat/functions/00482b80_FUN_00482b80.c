/*
 * FUN_00482b80 at 00482b80
 * undefined FUN_00482b80(void)
 * Address ranges: 00482b80-00482d9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00482b80(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined3 uVar5;
  undefined3 extraout_var;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined1 auStack_3c [4];
  char *pcStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  uint local_24;
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629600;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  uVar6 = 0xffffffff;
  pcVar10 = &DAT_0069329c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar2 = *pcVar10;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  uVar6 = ~uVar6 - 1;
  cVar2 = FUN_00401940(uVar6,1);
  if (cVar2 != '\0') {
    puVar9 = (undefined4 *)&DAT_0069329c;
    puVar11 = local_28;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    *(undefined1 *)((int)local_28 + uVar6) = 0;
    local_24 = uVar6;
  }
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_1c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  cVar2 = FUN_00544ce0(local_2c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
  if (cVar2 == '\0') {
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar10 = s_MoveRight_00693284;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940(uVar6,1);
    if (cVar2 != '\0') {
      pcVar10 = s_MoveRight_00693284;
      pcVar12 = pcStack_38;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar12 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar12 = pcVar12 + 1;
      }
      pcStack_38[uVar6] = '\0';
      uStack_34 = uVar6;
    }
    local_4._0_1_ = 2;
    if (*(int *)(param_1 + 0x3c) == 0) {
      uVar3 = FUN_005ae390(local_1c,s_You_probably_forgot_to_call_CAda_00693308);
      local_4._0_1_ = 3;
      pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                    s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
      (*pcVar4)();
      local_4._0_1_ = 2;
      FUN_004040a0(1);
    }
    cVar2 = FUN_00544ce0(auStack_3c,*(undefined4 *)(param_1 + 0x3c),0,0xffffffff);
    if (pcStack_38 != (char *)0x0) {
      cVar1 = pcStack_38[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(pcStack_38 + -1);
      }
      else {
        pcStack_38[-1] = cVar1 + -1;
      }
    }
    pcStack_38 = (char *)0x0;
    uStack_34 = 0;
    uStack_30 = 0;
    uVar8 = 0;
    if (cVar2 == '\0') goto LAB_00482d62;
  }
  uVar8 = 1;
LAB_00482d62:
  uVar5 = 0;
  if (local_28 != (undefined4 *)0x0) {
    cVar2 = *(char *)((int)local_28 + -1);
    uVar5 = (undefined3)((uint)local_28 >> 8);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)((int)local_28 + -1));
      uVar5 = extraout_var;
    }
    else {
      *(char *)((int)local_28 + -1) = cVar2 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return CONCAT31(uVar5,uVar8);
}

