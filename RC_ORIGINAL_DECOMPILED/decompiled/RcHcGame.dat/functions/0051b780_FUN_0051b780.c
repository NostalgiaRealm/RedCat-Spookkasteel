/*
 * FUN_0051b780 at 0051b780
 * undefined FUN_0051b780(void)
 * Address ranges: 0051b780-0051ba55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0051b780(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char *pcVar8;
  undefined1 *puStack_60;
  undefined1 local_49;
  undefined1 *local_48;
  int iStack_44;
  int local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638898;
  pvStack_c = ExceptionList;
  puStack_60 = (undefined1 *)0x0;
  ExceptionList = &pvStack_c;
  local_40 = param_1;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar8 = s_progress_bmp_0069f520;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  puStack_60 = (undefined1 *)(~uVar7 - 1);
  FUN_004040f0(s_progress_bmp_0069f520);
  local_4 = 0;
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    puStack_60 = (undefined1 *)0x51b7e7;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    puStack_60 = (undefined1 *)0x0;
    local_3c[0] = local_49;
    FUN_004040a0();
    uVar7 = 0xffffffff;
    pcVar8 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    puStack_60 = (undefined1 *)(~uVar7 - 1);
    FUN_004040f0(&DAT_006b3f70);
    puStack_60 = local_3c;
    local_4._0_1_ = 1;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4 = (uint)local_4._1_3_ << 8;
    puStack_60 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  puStack_60 = local_2c;
  piVar4 = (int *)FUN_0050d980(&local_48);
  iVar2 = *(int *)(param_1 + 0xa0);
  local_4._0_1_ = 2;
  if (iVar2 != *piVar4) {
    if ((iVar2 != 0) &&
       (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
      puStack_60 = (undefined1 *)0x0;
      FUN_005abfc0();
    }
    *(int *)(param_1 + 0xa0) = *piVar4;
    puStack_60 = (undefined1 *)0x51b8a1;
    FUN_005844b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_48 != (undefined1 *)0x0) {
    puStack_60 = (undefined1 *)0x51b8b3;
    FUN_004098d0();
    local_48 = (undefined1 *)0x0;
  }
  puStack_60 = (undefined1 *)0x1;
  local_4 = 0xffffffff;
  FUN_004040a0();
  puStack_60 = (undefined1 *)0x0;
  local_3c[0] = local_49;
  FUN_004040a0();
  uVar7 = 0xffffffff;
  pcVar8 = s_progress_a_bmp_0069f510;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  puStack_60 = (undefined1 *)(~uVar7 - 1);
  FUN_004040f0(s_progress_a_bmp_0069f510);
  local_4 = 3;
  iVar2 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    puStack_60 = (undefined1 *)0x51b912;
    iVar2 = FUN_0055b280();
  }
  if (*(int *)(iVar2 + 0xd8) == 0) {
    puStack_60 = &local_49;
    FUN_00409810(&DAT_006b3f70);
    puStack_60 = auStack_1c;
    local_4._0_1_ = 4;
    pcVar3 = (code *)FUN_005a07f0(s_m_BitmapMgr_0068eb4c,s___AdamSource_AdamEngine_h_0068eb58,0x188)
    ;
    (*pcVar3)();
    local_4 = CONCAT31(local_4._1_3_,3);
    puStack_60 = (undefined1 *)0x1;
    FUN_004040a0();
  }
  puStack_60 = local_3c;
  piVar6 = (int *)FUN_0050d980(&iStack_44);
  local_4._0_1_ = 5;
  piVar4 = (int *)(local_40 + 0xa4);
  iVar2 = *(int *)(local_40 + 0xa4);
  if (iVar2 != *piVar6) {
    if ((iVar2 != 0) &&
       (iVar5 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar5, iVar5 == 0)) {
      puStack_60 = (undefined1 *)0x0;
      FUN_005abfc0();
    }
    *piVar4 = *piVar6;
    puStack_60 = (undefined1 *)0x51b9b4;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  if (iStack_44 != 0) {
    puStack_60 = (undefined1 *)0x51b9c5;
    FUN_004098d0();
    iStack_44 = 0;
  }
  puStack_60 = (undefined1 *)0x1;
  local_4 = 0xffffffff;
  FUN_004040a0();
  if ((*(int *)(param_1 + 0xa0) != 0) &&
     (puStack_60 = (undefined1 *)*piVar4, puStack_60 != (undefined1 *)0x0)) {
    local_48 = (undefined1 *)&puStack_60;
    *(int *)(puStack_60 + 0x14) = *(int *)(puStack_60 + 0x14) + 1;
    local_4 = 0xffffffff;
    FUN_00412de0();
    FUN_0050aea0();
  }
  *(undefined4 *)(local_40 + 0x9c) = 0x3ecccccd;
  *(undefined4 *)(local_40 + 0x8c) = 0x3e99999a;
  *(undefined4 *)(local_40 + 0x90) = 0x3f333333;
  *(undefined4 *)(local_40 + 0x94) = 0x3f4ccccd;
  *(undefined4 *)(local_40 + 0x98) = 0x3f51eb85;
  ExceptionList = pvStack_c;
  return;
}

