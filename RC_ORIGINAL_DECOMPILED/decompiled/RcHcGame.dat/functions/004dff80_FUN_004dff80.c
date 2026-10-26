/*
 * FUN_004dff80 at 004dff80
 * undefined FUN_004dff80(void)
 * Address ranges: 004dff80-004e018f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dff80(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  float10 fVar8;
  undefined1 local_a9;
  undefined1 local_a8 [4];
  char *local_a4;
  uint local_a0;
  undefined4 local_9c;
  undefined1 local_98 [4];
  char *local_94;
  uint local_90;
  undefined1 local_88 [4];
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006324c9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_General_00690810;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_General_00690810;
    pcVar7 = local_94;
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
    local_94[uVar4] = '\0';
    local_90 = uVar4;
  }
  local_a8[0] = local_a9;
  local_4 = 0;
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar6 = s_ItemYOffset_0069a194;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  cVar1 = FUN_00401940(uVar4,1);
  if (cVar1 != '\0') {
    pcVar6 = s_ItemYOffset_0069a194;
    pcVar7 = local_a4;
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
    local_a4[uVar4] = '\0';
    local_a0 = uVar4;
  }
  local_4._0_1_ = 1;
  uVar2 = FUN_0043b450(local_88);
  local_4._0_1_ = 2;
  iVar3 = FUN_005ac8b0(local_a8,local_98,0x41900000,uVar2,0);
  local_4._0_1_ = 3;
  if (*(float *)(iVar3 + 0x60) == 0.0) {
    fVar8 = (float10)FUN_005ad390(iVar3 + 0x14,&local_a9);
    *(float *)(iVar3 + 0x60) = (float)fVar8;
  }
  else {
    fVar8 = (float10)*(float *)(iVar3 + 0x60);
  }
  _DAT_006b9410 = (float)fVar8;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_005acca0();
  if (local_84 != 0) {
    cVar1 = *(char *)(local_84 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_84 + -1));
    }
    else {
      *(char *)(local_84 + -1) = cVar1 + -1;
    }
  }
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  if (local_a4 != (char *)0x0) {
    cVar1 = local_a4[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_a4 + -1);
    }
    else {
      local_a4[-1] = cVar1 + -1;
    }
  }
  local_a4 = (char *)0x0;
  local_a0 = 0;
  local_9c = 0;
  if (local_94 != (char *)0x0) {
    cVar1 = local_94[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_94[-1] = cVar1 + -1;
      ExceptionList = local_c;
      return;
    }
    FUN_005fe5f0(local_94 + -1);
  }
  ExceptionList = local_c;
  return;
}

