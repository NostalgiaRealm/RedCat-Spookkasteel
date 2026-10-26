/*
 * FUN_005630f0 at 005630f0
 * undefined FUN_005630f0(void)
 * Address ranges: 005630f0-00563569
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_005630f0(int param_1)

{
  bool bVar1;
  char cVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puStack_38;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063fd28;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005ae5f0();
  local_4 = 0;
  if (*(char *)(param_1 + 0x125) == '\0') {
    FUN_004040a0();
    iVar5 = -1;
    pcVar10 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0();
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  if (*(char *)(param_1 + 0x67c) != '\0') {
    if (*(char *)(param_1 + 0x67d) != '\0') {
      FUN_00557fd0();
      FUN_004337e0();
    }
    FUN_00421750();
    FUN_00563570();
    FUN_00565380();
    FUN_00421750();
    FUN_00563570();
    FUN_00565390();
    FUN_00565390();
    FUN_00565390();
    FUN_005644b0();
    FUN_005bb600();
    *(undefined1 *)(param_1 + 0x67c) = 0;
  }
  iVar5 = *(int *)(param_1 + 0xb0);
  if (iVar5 == -0x80000000) {
    iVar5 = FUN_0060af10();
    *(int *)(param_1 + 0xb0) = iVar5;
  }
  if (iVar5 == 1) {
    FUN_005630e0();
  }
  if (((*(char *)(param_1 + 0x67d) != '\0') && (*(char *)(param_1 + 0x121) == '\0')) &&
     (*(char *)(param_1 + 0x122) == '\0')) {
    iVar4 = FUN_00557fd0();
    iVar5 = *(int *)(iVar4 + 100);
    if (iVar5 == -0x80000000) {
      iVar5 = FUN_0060af10();
      *(int *)(iVar4 + 100) = iVar5;
    }
    bVar1 = true;
    if (iVar5 != 0) goto LAB_005632e8;
  }
  bVar1 = false;
LAB_005632e8:
  if (*(char *)(param_1 + 0x194) != '\0') {
    FUN_004040a0();
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar6 = ~uVar6 - 1;
    cVar2 = FUN_00401940();
    if (cVar2 != '\0') {
      puVar8 = (undefined4 *)&DAT_006b3f70;
      puVar9 = puStack_38;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      *(undefined1 *)((int)puStack_38 + uVar6) = 0;
    }
    local_4._0_1_ = 2;
    pcVar3 = (code *)FUN_005a07f0();
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  *(undefined1 *)(param_1 + 0x194) = 1;
  if (*(int *)(param_1 + 0xdc) == 0) {
    FUN_004040a0();
    iVar5 = -1;
    pcVar10 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 3;
    pcVar3 = (code *)FUN_005a07f0();
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  if (*(int *)(param_1 + 0x100) == 0) {
    FUN_004040a0();
    iVar5 = -1;
    pcVar10 = &DAT_006b3f70;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0();
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0();
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  FUN_00556570();
  iVar5 = FUN_005bc850();
  if (iVar5 != 0) {
    if ((bVar1) && (*(int *)(param_1 + 0x1a8) != 0)) {
      FUN_00449760(param_1 + 0x1a8);
      FUN_005614e0();
    }
    if (((*(char *)(param_1 + 0x1a0) != '\0') && (*(int *)(param_1 + 0x19c) != 0)) &&
       (*(int *)(param_1 + 0x1a4) != 0)) {
      FUN_00449760();
      FUN_005610c0();
    }
  }
  local_4 = 0xffffffff;
  FUN_005ae770();
  ExceptionList = pvStack_c;
  return iVar5 != 0;
}

