/*
 * FUN_00538c30 at 00538c30
 * undefined FUN_00538c30(void)
 * Address ranges: 00538c30-00538e7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_00538c30(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bc10;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00537a20(param_2,param_3,param_7);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  param_1[0x10] = param_4;
  param_1[0x11] = param_5;
  param_1[0x12] = param_6;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *param_1 = &PTR_FUN_0064f740;
  if (param_4 == 0) {
    local_1c[0] = (undefined1)param_7;
    uVar3 = 0xffffffff;
    local_18 = (undefined4 *)0x0;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(&DAT_006b3f70,~uVar3 - 1);
    local_4._0_1_ = 1;
    pcVar2 = (code *)FUN_005a07f0(s_m_GetValueFunc_006a0ef8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0xd4,local_1c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  if (param_1[0x11] == 0) {
    local_1c[0] = (undefined1)param_7;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4._0_1_ = 2;
    pcVar2 = (code *)FUN_005a07f0(s_m_SetValueFunc_006a0ee8,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0xd5,local_1c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    if (local_18 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_18 + -1));
      }
      else {
        *(char *)((int)local_18 + -1) = cVar1 + -1;
      }
    }
  }
  if (((int)param_1[0x12] < 2) || (10 < (int)param_1[0x12])) {
    local_1c[0] = (undefined1)param_7;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_18;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar3) = 0;
      local_14 = uVar3;
    }
    local_4._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_m_MaxValue_>__MIN_MAX_VALUE____m_006a0eac,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a0d5c,0xd6,local_1c);
    (*pcVar2)();
    local_4._0_1_ = 0;
    FUN_004040a0(1);
  }
  FUN_00538e80();
  ExceptionList = pvStack_c;
  return param_1;
}

