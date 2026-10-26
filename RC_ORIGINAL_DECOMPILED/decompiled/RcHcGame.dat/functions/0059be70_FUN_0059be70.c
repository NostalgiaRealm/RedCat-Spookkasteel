/*
 * FUN_0059be70 at 0059be70
 * undefined FUN_0059be70(void)
 * Address ranges: 0059be70-0059c0c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0059be70(int param_1,int param_2)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  char *pcVar5;
  float10 fVar6;
  undefined1 auStack_38 [12];
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644748;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  cVar2 = FUN_0059b1f0();
  if (cVar2 == '\0') {
    local_2c[0] = (undefined1)param_2;
    uVar4 = 0xffffffff;
    pcVar5 = s_destination_not_valid_006a7278;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(s_destination_not_valid_006a7278,~uVar4 - 1);
    local_4 = 0;
    pcVar3 = (code *)FUN_005a07f0(s_m_DestinationWayPointId_IsValid__006a6c18,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a70c8,0xf4,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar2 = *(char *)(local_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar2 + -1;
      }
    }
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar4 = 0xffffffff;
    pcVar5 = s_cursor_already_at_destination_006a7258;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    local_2c[0] = (undefined1)param_2;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    FUN_004040f0(s_cursor_already_at_destination_006a7258,~uVar4 - 1);
    local_4 = 1;
    pcVar3 = (code *)FUN_005a07f0(s___m_IsAtDestination_006a7244,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a70c8,0xf5,local_2c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    if (local_28 != 0) {
      cVar2 = *(char *)(local_28 + -1);
      if ((cVar2 == '\0') || (cVar2 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar2 + -1;
      }
    }
  }
  FUN_005b2fe0(auStack_38);
  fVar6 = (float10)FUN_005b2fd0();
  if (param_2 == -1) {
    auStack_1c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar5 = &DAT_006b3f70;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar4 - 1);
    local_4 = 2;
    pcVar3 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_1c);
    (*pcVar3)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  fVar1 = (float)param_2 * *(float *)(param_1 + 0x38) * 0.001;
  FUN_0059b450();
  if (fVar1 < (float)fVar6) {
    FUN_005b3020(fVar1 / (float)fVar6,(undefined4 *)(param_1 + 0x3c));
    *(undefined1 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x2c) = 1;
    FUN_0059b4f0(param_1 + 0x1c);
  }
  ExceptionList = pvStack_c;
  return;
}

