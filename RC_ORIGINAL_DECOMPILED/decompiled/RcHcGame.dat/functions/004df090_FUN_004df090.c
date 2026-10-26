/*
 * FUN_004df090 at 004df090
 * undefined FUN_004df090(void)
 * Address ranges: 004df090-004df318
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004df090(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006323a0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00501cb0(param_2);
  uVar4 = 0xffffffff;
  param_1[0x3e] = 0;
  param_1[0x43] = 0xffffffff;
  param_1[0x44] = 0xffffffff;
  param_1[0x45] = 0xffffffff;
  param_1[0x46] = param_3[7];
  param_1[0x47] = param_3[0xf];
  param_1[0x48] = param_3[0x11];
  param_1[0x49] = param_3[0xb];
  param_1[0x4a] = param_3[0xd];
  param_1[0x4b] = 0xffffffff;
  param_1[0x4c] = 0xffffffff;
  param_1[0x4d] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  param_1[0x4f] = 0xffffffff;
  param_1[0x50] = 0xffffffff;
  param_1[0x51] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x52) = 1;
  param_1[0x53] = 0xffffffff;
  param_1[0x54] = 0xffffffff;
  param_1[0x55] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x56) = 1;
  local_4 = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *param_1 = &PTR_FUN_0064f210;
  if (param_3 == (undefined4 *)0x0) {
    local_1c[0] = (undefined1)param_2;
    pcVar6 = s_cannot_construct_CAdamCommandTim_0069a0ec;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    FUN_004040f0(s_cannot_construct_CAdamCommandTim_0069a0ec,~uVar4 - 1);
    local_4 = CONCAT31(local_4._1_3_,4);
    pcVar2 = (code *)FUN_005a07f0(s_a_Timer____NULL_0069a0a8,
                                  s_D__Work_RCHorror_AdamSource_Adam_0069a0b8,0x37,local_1c);
    (*pcVar2)();
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  param_1[0x3f] = *param_3;
  param_1[0x40] = param_3[1];
  param_1[0x41] = param_3[2];
  *(bool *)(param_1 + 0x42) = param_3[5] != 0;
  uVar3 = __ftol();
  param_1[0x43] = uVar3;
  if (0.0 < (float)param_3[0xe]) {
    uVar3 = __ftol();
    param_1[0x44] = uVar3;
  }
  if (0.0 < (float)param_3[0x10]) {
    uVar3 = __ftol();
    param_1[0x45] = uVar3;
  }
  pcVar6 = (char *)param_3[8];
  if (pcVar6 != (char *)0x0) {
    iVar5 = -1;
    pcVar7 = pcVar6;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      param_1[0x57] = pcVar6;
    }
  }
  pcVar6 = (char *)param_3[9];
  if (pcVar6 != (char *)0x0) {
    iVar5 = -1;
    pcVar7 = pcVar6;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      param_1[0x58] = pcVar6;
    }
  }
  pcVar6 = (char *)param_3[10];
  if (pcVar6 != (char *)0x0) {
    iVar5 = -1;
    pcVar7 = pcVar6;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      param_1[0x59] = pcVar6;
    }
  }
  pcVar6 = (char *)param_3[0xc];
  if (pcVar6 != (char *)0x0) {
    iVar5 = -1;
    pcVar7 = pcVar6;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      param_1[0x5a] = pcVar6;
    }
  }
  pcVar6 = (char *)param_3[0x12];
  if (pcVar6 != (char *)0x0) {
    iVar5 = -1;
    pcVar7 = pcVar6;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    if (iVar5 != -2) {
      param_1[0x5b] = pcVar6;
    }
  }
  ExceptionList = pvStack_c;
  return param_1;
}

