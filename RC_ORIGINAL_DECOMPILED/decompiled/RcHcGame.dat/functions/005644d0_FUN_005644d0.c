/*
 * FUN_005644d0 at 005644d0
 * undefined FUN_005644d0(void)
 * Address ranges: 005644d0-005646ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005644d0(int param_1)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 auStack_2c [4];
  undefined4 *puStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fec0;
  pvStack_c = ExceptionList;
  if ((param_1 < 0) || (ExceptionList = &pvStack_c, 3 < param_1)) {
    local_1c[0] = (undefined1)param_1;
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_10 = 0;
    ExceptionList = &pvStack_c;
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
      FUN_00404190(uVar3);
    }
    local_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_DriverNr_>__0____a_DriverNr_<_4_006a3798,
                                  s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x84b,local_1c);
    (*pcVar2)();
    local_4 = 0xffffffff;
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
  switch(param_1) {
  case 0:
    goto switchD_005645ad_caseD_0;
  case 1:
    FUN_00559c40();
    ExceptionList = pvStack_c;
    return;
  case 2:
    FUN_005598e0();
    ExceptionList = pvStack_c;
    return;
  case 3:
    FUN_00559a00();
    ExceptionList = pvStack_c;
    return;
  default:
    auStack_2c[0] = (undefined1)param_1;
    uVar3 = 0xffffffff;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3 - 1;
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
    cVar1 = FUN_00401940(uVar3,1);
    if (cVar1 != '\0') {
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = puStack_28;
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
      FUN_00404190(uVar3);
    }
    local_4 = 1;
    pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x84f
                                  ,auStack_2c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    if (puStack_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)puStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)puStack_28 + -1));
      }
      else {
        *(char *)((int)puStack_28 + -1) = cVar1 + -1;
      }
    }
    puStack_28 = (undefined4 *)0x0;
    uStack_24 = 0;
    uStack_20 = 0;
switchD_005645ad_caseD_0:
    FUN_00559b20();
    ExceptionList = pvStack_c;
    return;
  }
}

