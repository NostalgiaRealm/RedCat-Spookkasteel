/*
 * FUN_005363e0 at 005363e0
 * undefined FUN_005363e0(void)
 * Address ranges: 005363e0-00536658
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_005363e0(undefined1 *param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b938;
  local_c = ExceptionList;
  local_1c[0] = (undefined1)param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar2 = 0xffffffff;
  pcVar6 = (char *)&DAT_0069ff78;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar2 = ~uVar2 - 1;
  cVar1 = FUN_00401940(uVar2,1);
  if (cVar1 != '\0') {
    puVar4 = &DAT_0069ff78;
    puVar5 = local_18;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_00404190(uVar2);
  }
  local_4 = 0;
  switch(param_2) {
  case 0:
    uVar2 = 0xffffffff;
    pcVar6 = &DAT_0069ff70;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto switchD_0053646f_default;
    puVar4 = (undefined4 *)&DAT_0069ff70;
    puVar5 = local_18;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    goto LAB_005364ea;
  case 1:
    uVar2 = 0xffffffff;
    pcVar6 = &DAT_0069ff74;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto switchD_0053646f_default;
    puVar4 = (undefined4 *)&DAT_0069ff74;
    puVar5 = local_18;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
LAB_005364ea:
    for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    FUN_00404190(uVar2);
    goto switchD_0053646f_default;
  case 2:
    uVar2 = 0xffffffff;
    pcVar6 = (char *)&DAT_006a0ce8;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 != '\0') {
      puVar4 = &DAT_006a0ce8;
      puVar5 = local_18;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      *(undefined1 *)((int)local_18 + uVar2) = 0;
      local_14 = uVar2;
    }
    goto switchD_0053646f_default;
  case 3:
    uVar2 = 0xffffffff;
    pcVar6 = (char *)&DAT_0069ff6c;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto switchD_0053646f_default;
    puVar4 = &DAT_0069ff6c;
    break;
  case 4:
    uVar2 = 0xffffffff;
    pcVar6 = (char *)&DAT_0069ff68;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto switchD_0053646f_default;
    puVar4 = &DAT_0069ff68;
    break;
  case 5:
    uVar2 = 0xffffffff;
    pcVar6 = (char *)&DAT_0069ff64;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto switchD_0053646f_default;
    puVar4 = &DAT_0069ff64;
    break;
  default:
    goto switchD_0053646f_default;
  }
  puVar5 = local_18;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  *(undefined1 *)((int)local_18 + uVar2) = 0;
  local_14 = uVar2;
switchD_0053646f_default:
  *param_1 = local_1c[0];
  FUN_004040a0(0);
  FUN_0040cc00(local_1c,0,0xffffffff);
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return param_1;
    }
    FUN_005fe5f0((undefined1 *)((int)local_18 + -1));
  }
  ExceptionList = local_c;
  return param_1;
}

