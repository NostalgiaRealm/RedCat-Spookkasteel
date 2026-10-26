/*
 * FUN_0050a800 at 0050a800
 * undefined FUN_0050a800(void)
 * Address ranges: 0050a800-0050aa6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0050a800(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_1c [4];
  char *local_18;
  uint uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636779;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064f534;
  local_4 = 3;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x1c);
  local_4._0_1_ = 4;
  if (*(char *)(param_1 + 0x13) != '\0') {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Bitmap_still_exists_in_engine_0069e600;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = s_Bitmap_still_exists_in_engine_0069e600;
      pcVar8 = local_18;
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
    local_4._0_1_ = 5;
    pcVar3 = (code *)FUN_005a07f0(s___m_IsAddedToEngine_0069e5ec,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x1d,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 4;
    FUN_004040a0(1);
  }
  if ((param_1[0xd] != 0) && ((param_1[0xe] - param_1[0xd] & 0xfffffffc) != 0)) {
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Bitmap_still_exists_in_sublevel__0069e5c8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    uVar5 = ~uVar5 - 1;
    cVar2 = FUN_00401940(uVar5,1);
    if (cVar2 != '\0') {
      pcVar7 = s_Bitmap_still_exists_in_sublevel__0069e5c8;
      pcVar8 = local_18;
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
      local_18[uVar5] = '\0';
      uStack_14 = uVar5;
    }
    local_4._0_1_ = 6;
    pcVar3 = (code *)FUN_005a07f0(s_m_SubLevels_Count____0_0069e5b0,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069e554,0x1e,local_1c);
    (*pcVar3)();
    local_4._0_1_ = 4;
    FUN_004040a0(1);
  }
  if (param_1[0xb] != 0) {
    FUN_005c02b0();
  }
  local_4._0_1_ = 3;
  FUN_005ae770();
  iVar1 = param_1[0x14];
  local_4._0_1_ = 2;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar4;
    if (iVar4 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x14] = 0;
  }
  local_4._0_1_ = 7;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  iVar1 = param_1[0xe];
  iVar4 = param_1[0xd];
  local_4 = CONCAT31(local_4._1_3_,1);
  for (; iVar4 != iVar1; iVar4 = iVar4 + 4) {
    FUN_00554170(0);
  }
  FUN_005fe5f0(param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  iVar1 = param_1[8];
  if (iVar1 != 0) {
    cVar2 = *(char *)(iVar1 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = cVar2 + -1;
    }
  }
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_0064e794;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

