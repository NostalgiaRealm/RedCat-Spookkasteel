/*
 * FUN_00544620 at 00544620
 * undefined FUN_00544620(void)
 * Address ranges: 00544620-005448a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00544620(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063cd88;
  local_c = ExceptionList;
  iVar2 = DAT_006b915c;
  ExceptionList = &local_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &local_c;
    iVar2 = FUN_004bc480();
  }
  iVar2 = *(int *)(iVar2 + 0x58);
  cVar1 = FUN_005a64d0();
  if ((cVar1 != '\0') && (cVar1 = FUN_005a6490(param_1), cVar1 != '\0')) {
    ExceptionList = local_c;
    return cVar1;
  }
  local_1c[0] = (undefined1)param_1;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_LeftMouse_006a13a8;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_LeftMouse_006a13a8;
    pcVar7 = local_18;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar7 = pcVar7 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar7 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar7 = pcVar7 + 1;
    }
    FUN_00404190(uVar4);
  }
  local_4 = 0;
  iVar3 = FUN_005471e0(local_1c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  if (param_1 == iVar3) {
    cVar1 = FUN_005aac70(param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return *(char *)(iVar2 + 0x14);
    }
  }
  else {
    local_1c[0] = (undefined1)param_1;
    FUN_004040a0(0);
    uVar4 = 0xffffffff;
    pcVar6 = s_MiddleMouse_006a14d4;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4 - 1;
    cVar1 = FUN_00401940(uVar4,1);
    if (cVar1 != '\0') {
      pcVar6 = s_MiddleMouse_006a14d4;
      pcVar7 = local_18;
      for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_18[uVar4] = '\0';
      local_14 = uVar4;
    }
    local_4 = 1;
    iVar3 = FUN_005471e0(local_1c);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    if (param_1 == iVar3) {
      cVar1 = FUN_005aac70(param_2);
      if (cVar1 != '\0') {
        ExceptionList = local_c;
        return *(char *)(iVar2 + 0x15);
      }
    }
    else {
      local_2c[0] = (undefined1)param_1;
      uVar4 = 0xffffffff;
      pcVar6 = s_RightMouse_006a1360;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      FUN_004040f0(s_RightMouse_006a1360,~uVar4 - 1);
      local_4 = 2;
      iVar3 = FUN_005471e0(local_2c);
      local_4 = 0xffffffff;
      if (local_28 != 0) {
        cVar1 = *(char *)(local_28 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(local_28 + -1));
        }
        else {
          *(char *)(local_28 + -1) = cVar1 + -1;
        }
      }
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      if (param_1 != iVar3) {
        cVar1 = FUN_005a9bb0(param_1,param_2);
        ExceptionList = local_c;
        return cVar1;
      }
      cVar1 = FUN_005aac70(param_2);
      if (cVar1 != '\0') {
        ExceptionList = local_c;
        return *(char *)(iVar2 + 0x16);
      }
    }
  }
  ExceptionList = local_c;
  return '\0';
}

