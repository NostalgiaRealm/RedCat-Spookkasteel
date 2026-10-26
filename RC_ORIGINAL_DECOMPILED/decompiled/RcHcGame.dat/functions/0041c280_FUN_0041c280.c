/*
 * FUN_0041c280 at 0041c280
 * undefined FUN_0041c280(void)
 * Address ranges: 0041c280-0041c48f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c280(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 local_3c [4];
  char *local_38;
  uint local_34;
  undefined1 local_2c [4];
  char *local_28;
  uint local_24;
  undefined1 local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00621ab8;
  local_c = ExceptionList;
  if (param_1 == 0) {
    local_1c[0] = (undefined1)param_3;
    uVar3 = 0xffffffff;
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    pcVar5 = s_teleport_0068f100;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    ExceptionList = &local_c;
    FUN_004040f0(s_teleport_0068f100,~uVar3 - 1);
    puVar7 = local_1c;
    local_4 = 1;
    FUN_00423700(puVar7,param_2,param_3);
    FUN_004a0660(puVar7,param_2,param_3);
    if (local_18 == 0) {
      ExceptionList = local_c;
      return;
    }
    pcVar5 = (char *)(local_18 + -1);
    cVar1 = *(char *)(local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *pcVar5 = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  else {
    if ((param_1 < 1) || (2 < param_1)) {
      local_2c[0] = (undefined1)param_3;
      ExceptionList = &local_c;
      FUN_004040a0(0);
      uVar3 = 0xffffffff;
      pcVar5 = s_Invalid_Extra_motion_type_in_CRc_0068f320;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3 - 1;
      cVar1 = FUN_00401940(uVar3,1);
      if (cVar1 != '\0') {
        pcVar5 = s_Invalid_Extra_motion_type_in_CRc_0068f320;
        pcVar6 = local_28;
        for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar6 = pcVar6 + 4;
        }
        for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar6 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        }
        local_28[uVar3] = '\0';
        local_24 = uVar3;
      }
      local_4 = 2;
      pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_RCSource_RcDung_0068f1d0,
                                    0x16a,local_2c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      ExceptionList = local_c;
      return;
    }
    pcVar5 = (&PTR_s_teleport_0064b724)[param_1];
    local_3c[0] = (undefined1)param_3;
    ExceptionList = &local_c;
    FUN_004040a0(0);
    uVar3 = 0xffffffff;
    pcVar6 = pcVar5;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      pcVar6 = local_38;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      local_38[uVar3] = '\0';
      local_34 = uVar3;
    }
    local_4 = 0;
    FUN_004a0660(local_3c,param_2,param_3);
    if (local_38 == (char *)0x0) {
      ExceptionList = local_c;
      return;
    }
    pcVar5 = local_38 + -1;
    cVar1 = local_38[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *pcVar5 = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
  }
  FUN_005fe5f0(pcVar5);
  ExceptionList = local_c;
  return;
}

