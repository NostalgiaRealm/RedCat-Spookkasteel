/*
 * FUN_00591fd0 at 00591fd0
 * undefined FUN_00591fd0(void)
 * Address ranges: 00591fd0-0059224c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00591fd0(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined1 local_12c [4];
  char *local_128;
  undefined1 local_11c [4];
  int local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643806;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00557760();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (-1 < iVar4) {
    iVar2 = FUN_00557760();
    iVar4 = *(int *)(iVar2 + 100);
    if (iVar4 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar2 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar3);
      *(int *)(iVar2 + 100) = iVar4;
    }
    if (iVar4 < 4) goto LAB_00592111;
  }
  FUN_00557760();
  puVar8 = local_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,3);
  FUN_005acdb0(local_10c);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_DisplayQuality_setting_out_of_ra_006a6338;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar1 = FUN_00401940(uVar5,1);
  if (cVar1 != '\0') {
    pcVar7 = s_DisplayQuality_setting_out_of_ra_006a6338;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)local_128 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      local_128 = local_128 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *local_128 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      local_128 = local_128 + 1;
    }
    FUN_00404190(uVar5);
  }
  local_4 = 0;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a6310,0x36,local_12c);
  local_4 = 0xffffffff;
  FUN_004040a0(1);
LAB_00592111:
  iVar2 = FUN_00557970();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (-1 < iVar4) {
    iVar2 = FUN_00557970();
    iVar4 = *(int *)(iVar2 + 100);
    if (iVar4 == -0x80000000) {
      puVar3 = *(undefined1 **)(iVar2 + 0x18);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar3);
      *(int *)(iVar2 + 100) = iVar4;
    }
    if (iVar4 < 4) {
      ExceptionList = local_c;
      return;
    }
  }
  FUN_00557970();
  puVar8 = local_10c;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  FUN_0060af1b(local_10c,0xff,&DAT_00690818,3);
  FUN_005acdb0(local_10c);
  uVar5 = 0xffffffff;
  local_118 = 0;
  pcVar7 = s_DisplayEffects_setting_out_of_ra_006a62ec;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  local_114 = 0;
  local_110 = 0;
  FUN_004040f0(s_DisplayEffects_setting_out_of_ra_006a62ec,~uVar5 - 1);
  local_4 = 1;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a6310,0x3c,local_11c);
  if (local_118 != 0) {
    cVar1 = *(char *)(local_118 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(local_118 + -1) = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0((char *)(local_118 + -1));
  }
  ExceptionList = local_c;
  return;
}

