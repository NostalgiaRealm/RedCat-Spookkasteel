/*
 * FUN_0057e850 at 0057e850
 * undefined FUN_0057e850(void)
 * Address ranges: 0057e850-0057ec06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0057e850(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  undefined1 local_55;
  int local_54;
  int iStack_50;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00642210;
  pvStack_c = ExceptionList;
  piVar9 = (int *)(param_1 + 0x120);
  if (*(char *)(param_1 + 0x140) == '\0') {
    piVar9 = (int *)(param_1 + 0x130);
  }
  ExceptionList = &pvStack_c;
  if (*piVar9 != 0) {
    piVar9 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar9 = (int *)(param_1 + 0x130);
    }
    ExceptionList = &pvStack_c;
    if (*piVar9 == 0) {
      local_4c[0] = local_55;
      ExceptionList = &pvStack_c;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4 = 0;
      pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_4c);
      (*pcVar2)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_00553130();
    iStack_50 = 0;
    local_4 = 1;
    piVar9 = (int *)(param_1 + 0x120);
    if (*(char *)(param_1 + 0x140) == '\0') {
      piVar9 = (int *)(param_1 + 0x130);
    }
    iVar5 = *piVar9;
    if (iVar5 != 0) {
      iVar3 = *(int *)(iVar5 + 0x14) + -1;
      *(int *)(iVar5 + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_005abfc0(0);
      }
      *piVar9 = 0;
      FUN_005844b0();
    }
  }
  local_4 = 0xffffffff;
  iVar5 = param_1 + 0x120;
  piVar9 = (int *)(param_1 + 0x120);
  if (*(char *)(param_1 + 0x140) == '\0') {
    local_54 = param_1 + 0x130;
    iVar5 = param_1 + 0x130;
    piVar9 = (int *)(param_1 + 0x130);
  }
  else {
    local_54 = param_1 + 0x120;
  }
  uVar4 = FUN_00580390(auStack_3c,*(undefined4 *)(iVar5 + 8));
  local_4 = 2;
  iVar5 = DAT_006c8de0;
  if (DAT_006c8de0 == 0) {
    iVar5 = FUN_0055b280();
  }
  if (*(int *)(iVar5 + 0xfc) == 0) {
    FUN_00409810(&DAT_006b3f70,&local_55);
    local_4._0_1_ = 3;
    pcVar2 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,s___AdamSource_AdamEngine_h_0068eb58,399,
                                  local_4c);
    (*pcVar2)();
    local_4 = CONCAT31(local_4._1_3_,2);
    FUN_004040a0(1);
  }
  piVar6 = (int *)FUN_0054efe0(&iStack_50,uVar4,*(undefined1 *)(local_54 + 0xd),0x3f800000,0,0);
  iVar5 = *piVar9;
  local_4._0_1_ = 4;
  if (iVar5 != *piVar6) {
    if ((iVar5 != 0) &&
       (iVar3 = *(int *)(iVar5 + 0x14) + -1, *(int *)(iVar5 + 0x14) = iVar3, iVar3 == 0)) {
      FUN_005abfc0(0);
    }
    *piVar9 = *piVar6;
    FUN_005844b0();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iStack_50 != 0) {
    FUN_004098d0();
    iStack_50 = 0;
  }
  local_4 = 0xffffffff;
  FUN_004040a0(1);
  cVar1 = *(char *)(param_1 + 0x140);
  piVar9 = (int *)(param_1 + 0x120);
  if (cVar1 == '\0') {
    piVar9 = (int *)(param_1 + 0x130);
  }
  if (*piVar9 == 0) {
    iVar5 = param_1 + 0x120;
    if (cVar1 == '\0') {
      iVar5 = param_1 + 0x130;
    }
    iVar5 = FUN_00580390(auStack_1c,*(undefined4 *)(iVar5 + 8));
    puVar7 = *(undefined1 **)(iVar5 + 4);
    local_4 = 6;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(auStack_2c,s_CAdamEffectMusic__DoOnFrameCall__006a5230,puVar7);
    local_4._0_1_ = 7;
    FUN_005035a0(uVar4);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_004040a0(1);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        ExceptionList = pvStack_c;
        return;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
    ExceptionList = pvStack_c;
    return;
  }
  iVar5 = param_1 + 0x120;
  if (cVar1 == '\0') {
    iVar5 = param_1 + 0x130;
    piVar9 = (int *)(param_1 + 0x130);
  }
  else {
    piVar9 = (int *)(param_1 + 0x120);
  }
  if (*piVar9 == 0) {
    local_4c[0] = local_55;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 5;
    pcVar2 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_4c);
    (*pcVar2)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  FUN_00553610(*(undefined4 *)(iVar5 + 4));
  ExceptionList = pvStack_c;
  return;
}

