/*
 * FUN_00492dc0 at 00492dc0
 * undefined FUN_00492dc0(void)
 * Address ranges: 00492dc0-00493049
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00492dc0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *local_dc;
  char *pcStack_d8;
  undefined1 *puStack_d4;
  char *pcStack_d0;
  undefined1 local_bc [4];
  char *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac [4];
  char *local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c [4];
  char *local_98;
  undefined1 local_8c [16];
  undefined1 *local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b6e4;
  local_c = ExceptionList;
  pcStack_d0 = (char *)0x0;
  puStack_d4 = (undefined1 *)0x492df1;
  ExceptionList = &local_c;
  FUN_004040a0();
  uVar3 = 0xffffffff;
  pcStack_d0 = (char *)0x1;
  pcVar5 = s___ADAMWIN_INI_00693bbc;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  pcStack_d8 = (char *)0x492e0e;
  puStack_d4 = (undefined1 *)uVar3;
  cVar1 = FUN_00401940();
  if (cVar1 != '\0') {
    pcVar5 = s___ADAMWIN_INI_00693bbc;
    pcVar6 = local_98;
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
    puStack_d4 = (undefined1 *)0x492e35;
    pcStack_d0 = (char *)uVar3;
    FUN_00404190();
  }
  pcStack_d0 = (char *)0x0;
  local_4 = 0;
  puStack_d4 = (undefined1 *)0x492e53;
  FUN_004040a0();
  uVar3 = 0xffffffff;
  pcStack_d0 = (char *)0x1;
  pcVar5 = s_Folders_00693bb4;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  pcStack_d8 = (char *)0x492e70;
  puStack_d4 = (undefined1 *)uVar3;
  cVar1 = FUN_00401940();
  if (cVar1 != '\0') {
    pcVar5 = s_Folders_00693bb4;
    pcVar6 = local_b8;
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
    puStack_d4 = (undefined1 *)0x492e97;
    pcStack_d0 = (char *)uVar3;
    FUN_00404190();
  }
  pcStack_d0 = (char *)0x0;
  local_4 = CONCAT31(local_4._1_3_,1);
  puStack_d4 = (undefined1 *)0x492eb2;
  FUN_004040a0();
  uVar3 = 0xffffffff;
  pcStack_d0 = (char *)0x1;
  pcVar5 = s_SoundsFolder_00693bd8;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  pcStack_d8 = (char *)0x492ecf;
  puStack_d4 = (undefined1 *)uVar3;
  cVar1 = FUN_00401940();
  if (cVar1 != '\0') {
    pcVar5 = s_SoundsFolder_00693bd8;
    pcVar6 = local_a8;
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
    puStack_d4 = (undefined1 *)0x492ef6;
    pcStack_d0 = (char *)uVar3;
    FUN_00404190();
  }
  puStack_d4 = local_9c;
  pcStack_d0 = (char *)0x0;
  local_dc = local_bc;
  pcStack_d8 = s___Sounds_00693bcc;
  local_4._0_1_ = 2;
  iVar2 = FUN_005acaf0(local_ac);
  pcStack_d0 = (char *)0x0;
  local_4._0_1_ = 3;
  local_8c[0] = *(undefined1 *)(iVar2 + 0x14);
  puStack_d4 = (undefined1 *)0x492f39;
  FUN_004040a0();
  pcStack_d0 = (char *)0xffffffff;
  puStack_d4 = (undefined1 *)0x0;
  local_dc = (undefined1 *)0x492f4b;
  pcStack_d8 = (undefined1 *)(iVar2 + 0x14);
  FUN_0040cc00();
  local_7c = (undefined1 *)&local_dc;
  local_4._0_1_ = 4;
  local_dc = (undefined1 *)CONCAT31(local_dc._1_3_,local_8c[0]);
  FUN_004040a0(0);
  FUN_0040cc00(local_8c,0,0xffffffff);
  FUN_004967f0(1);
  pcStack_d0 = (char *)0x1;
  local_4._0_1_ = 3;
  puStack_d4 = (undefined1 *)0x492f9c;
  FUN_004040a0();
  local_4 = CONCAT31(local_4._1_3_,2);
  pcStack_d0 = (char *)0x492fad;
  FUN_005acca0();
  if (local_a8 != (char *)0x0) {
    pcStack_d0 = local_a8 + -1;
    cVar1 = local_a8[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      puStack_d4 = (undefined1 *)0x492fcf;
      FUN_005fe5f0();
    }
    else {
      *pcStack_d0 = cVar1 + -1;
    }
  }
  local_a8 = (char *)0x0;
  local_a4 = 0;
  local_a0 = 0;
  if (local_b8 != (char *)0x0) {
    cVar1 = local_b8[-1];
    pcStack_d0 = local_b8 + -1;
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      puStack_d4 = (undefined1 *)0x492ffe;
      FUN_005fe5f0();
    }
    else {
      *pcStack_d0 = cVar1 + -1;
    }
  }
  local_b8 = (char *)0x0;
  local_b4 = 0;
  local_b0 = 0;
  if (local_98 != (char *)0x0) {
    pcStack_d0 = local_98 + -1;
    cVar1 = local_98[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      puStack_d4 = (undefined1 *)0x49302f;
      FUN_005fe5f0();
    }
    else {
      *pcStack_d0 = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return;
}

