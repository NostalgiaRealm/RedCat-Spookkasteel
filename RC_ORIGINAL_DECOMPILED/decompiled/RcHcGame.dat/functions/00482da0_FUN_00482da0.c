/*
 * FUN_00482da0 at 00482da0
 * undefined FUN_00482da0(void)
 * Address ranges: 00482da0-00482edc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_00482da0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined3 uVar5;
  undefined3 extraout_var;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_2c [4];
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00629620;
  pvStack_c = ExceptionList;
  uVar6 = 0xffffffff;
  pcVar8 = s_Scores_00693348;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6 - 1;
  local_28 = (char *)0x0;
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  cVar1 = FUN_00401940(uVar6,1);
  if (cVar1 != '\0') {
    pcVar8 = s_Scores_00693348;
    pcVar9 = local_28;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar9 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_00404190(uVar6);
  }
  local_4 = 0;
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = FUN_005ae390(local_1c,s_You_probably_forgot_to_call_CAda_00693308);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_InputHandle____NULL_006932d4,
                                  s___AdamSource_AdamInput_h_006932ec,0xbc,uVar3);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_18 + -1));
      }
      else {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
      }
    }
    iStack_18 = 0;
    uStack_14 = 0;
    uStack_10 = 0;
  }
  uVar2 = FUN_00544ce0(local_2c,*(undefined4 *)(param_1 + 0x3c),1,0xffffffff);
  uVar5 = 0;
  if (local_28 != (char *)0x0) {
    cVar1 = local_28[-1];
    uVar5 = (undefined3)((uint)local_28 >> 8);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
      uVar5 = extraout_var;
    }
    else {
      local_28[-1] = cVar1 + -1;
    }
  }
  ExceptionList = pvStack_c;
  return CONCAT31(uVar5,uVar2);
}

