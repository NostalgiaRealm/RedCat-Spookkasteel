/*
 * FUN_00421890 at 00421890
 * undefined FUN_00421890(void)
 * Address ranges: 00421890-00421a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00421890(undefined4 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 local_1c [4];
  char *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006222d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004cae90(param_2);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_0064bba4;
  cVar1 = FUN_004caf10(param_3);
  if (cVar1 == '\0') {
    FUN_00502350(0);
    uVar2 = 0xffffffff;
    pcVar4 = s_Init___failed_0068f6b8;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    local_1c[0] = (undefined1)param_3;
    local_18 = (char *)0x0;
    local_14 = 0;
    local_10 = 0;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 != '\0') {
      pcVar4 = s_Init___failed_0068f6b8;
      pcVar5 = local_18;
      for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
        pcVar5 = pcVar5 + 1;
      }
      local_18[uVar2] = '\0';
      local_14 = uVar2;
    }
    local_4._0_1_ = 1;
    FUN_005035a0(local_1c);
    local_4._0_1_ = 0;
    if (local_18 != (char *)0x0) {
      cVar1 = local_18[-1];
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0(local_18 + -1);
      }
      else {
        local_18[-1] = cVar1 + -1;
      }
    }
  }
  local_1c[0] = (undefined1)param_3;
  pcVar4 = *(char **)(param_3 + 0xc);
  FUN_004040a0(0);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pcVar4 == (char *)0x0) {
    uVar2 = 0xffffffff;
    pcVar4 = &DAT_006b3f70;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto LAB_00421a07;
    pcVar4 = &DAT_006b3f70;
  }
  else {
    uVar2 = 0xffffffff;
    pcVar5 = pcVar4;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar2 = ~uVar2 - 1;
    cVar1 = FUN_00401940(uVar2,1);
    if (cVar1 == '\0') goto LAB_00421a07;
  }
  pcVar5 = local_18;
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = uVar2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  local_18[uVar2] = '\0';
  local_14 = uVar2;
LAB_00421a07:
  FUN_00503ae0(local_1c);
  local_4 = local_4 & 0xffffff00;
  FUN_004040a0(1);
  *(bool *)(param_1 + 0x60) = *(int *)(param_3 + 0x24) != 0;
  ExceptionList = local_c;
  return param_1;
}

