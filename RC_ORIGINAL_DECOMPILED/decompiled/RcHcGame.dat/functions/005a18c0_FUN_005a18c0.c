/*
 * FUN_005a18c0 at 005a18c0
 * undefined FUN_005a18c0(void)
 * Address ranges: 005a18c0-005a1a65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005a18c0(int param_1,int param_2)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 local_98 [4];
  char *local_94;
  uint local_90;
  undefined4 local_8c;
  undefined1 local_88 [4];
  char *local_84;
  uint local_80;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00644fae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_Status_006a79b8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_Status_006a79b8;
    pcVar6 = local_94;
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
    local_94[uVar3] = '\0';
    local_90 = uVar3;
  }
  local_4 = 0;
  FUN_004040a0(0);
  uVar3 = 0xffffffff;
  pcVar5 = s_LastSectionEntered_006a79a4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  cVar1 = FUN_00401940(uVar3,1);
  if (cVar1 != '\0') {
    pcVar5 = s_LastSectionEntered_006a79a4;
    pcVar6 = local_84;
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
    local_84[uVar3] = '\0';
    local_80 = uVar3;
  }
  local_4._0_1_ = 1;
  FUN_005acaf0(local_88,local_98,&DAT_006b3f70,param_1 + 0x14,0);
  local_4._0_1_ = 4;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (local_94 != (char *)0x0) {
    cVar1 = local_94[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_94 + -1);
    }
    else {
      local_94[-1] = cVar1 + -1;
    }
  }
  local_94 = (char *)0x0;
  local_90 = 0;
  local_8c = 0;
  if (param_2 == 0) {
    puVar2 = &DAT_006b3f70;
  }
  else {
    puVar2 = *(undefined1 **)(param_2 + 0x20);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &DAT_0064a3b4;
    }
  }
  FUN_005acdb0(puVar2);
  local_4 = 0xffffffff;
  FUN_005acca0();
  ExceptionList = local_c;
  return;
}

