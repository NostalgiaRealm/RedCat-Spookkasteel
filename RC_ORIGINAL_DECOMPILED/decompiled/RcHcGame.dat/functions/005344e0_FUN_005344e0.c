/*
 * FUN_005344e0 at 005344e0
 * undefined FUN_005344e0(void)
 * Address ranges: 005344e0-00534812
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005344e0(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  uint uVar8;
  char *pcVar9;
  char local_56;
  undefined1 uStack_55;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  char local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b640;
  pvStack_c = ExceptionList;
  iVar5 = DAT_006b915c;
  ExceptionList = &pvStack_c;
  if (DAT_006b915c == 0) {
    ExceptionList = &pvStack_c;
    iVar5 = FUN_004bc480();
  }
  if (*(int *)(iVar5 + 0x3a4) == 0) {
    local_2c[0] = local_56;
    FUN_004040a0(0);
    uVar8 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
    local_4 = 0;
    pcVar6 = (code *)FUN_005a07f0(s_m_Game_0068e584,s___AdamSource_AdamApplication_h_0068e58c,0x130,
                                  local_2c);
    (*pcVar6)();
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  iVar5 = *(int *)(iVar5 + 0x3a4);
  local_44 = iVar5;
  FUN_00453d20(&local_30);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iStack_54 = 0;
  iStack_48 = 0;
  iStack_34 = 0;
  local_56 = '\0';
  iStack_50 = 0;
LAB_005345b3:
  iVar3 = iStack_34;
  if (*(int *)(iVar5 + 0x28) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x28) >> 2;
  }
  if ((iVar5 <= iStack_50) || (local_56 != '\0')) {
    local_4 = CONCAT31(local_4._1_3_,1);
    if (iStack_54 != 0) {
      FUN_004098d0();
      iStack_54 = 0;
    }
    local_4 = 0xffffffff;
    if ((local_30 != 0) &&
       (iVar5 = *(int *)(local_30 + 0x14) + -1, *(int *)(local_30 + 0x14) = iVar5, iVar5 == 0)) {
      FUN_005abfc0(0);
    }
    ExceptionList = pvStack_c;
    return iVar3;
  }
  iStack_4c = 0;
  do {
    piVar7 = (int *)FUN_005293c0(&iStack_40,iStack_50);
    local_4._0_1_ = 3;
    if (*piVar7 == 0) {
      local_2c[0] = local_56;
      FUN_004040a0(0);
      uVar8 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar8 - 1);
      local_4._0_1_ = 4;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    local_2c);
      (*pcVar6)();
      local_4._0_1_ = 3;
      FUN_004040a0(1);
    }
    iVar5 = FUN_004f21d0();
    local_4._0_1_ = 2;
    bVar2 = iVar5 <= iStack_4c;
    if (iStack_40 != 0) {
      FUN_004098d0();
      iStack_40 = 0;
    }
    if (bVar2) goto LAB_005347ad;
    piVar7 = (int *)FUN_005293c0(&iStack_38,iStack_50);
    local_4._0_1_ = 5;
    uVar4 = (undefined1)local_4;
    local_4._0_1_ = 5;
    if (*piVar7 == 0) {
      FUN_00409810(&DAT_006b3f70,&uStack_55);
      local_4._0_1_ = 6;
      pcVar6 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                    auStack_1c);
      (*pcVar6)();
      local_4._0_1_ = 5;
      FUN_004040a0(1);
      uVar4 = (undefined1)local_4;
    }
    local_4._0_1_ = uVar4;
    piVar7 = (int *)FUN_004f1f00(&iStack_3c,iStack_4c);
    local_4._0_1_ = 7;
    if (iStack_54 != *piVar7) {
      if ((iStack_54 != 0) &&
         (iVar5 = *(int *)(iStack_54 + 0x14) + -1, *(int *)(iStack_54 + 0x14) = iVar5, iVar5 == 0))
      {
        FUN_005abfc0(0);
      }
      iStack_54 = *piVar7;
      FUN_005844b0();
    }
    local_4._0_1_ = 5;
    if (iStack_3c != 0) {
      FUN_004098d0();
      iStack_3c = 0;
    }
    local_4._0_1_ = 2;
    if (iStack_38 != 0) {
      FUN_004098d0();
      iStack_38 = 0;
    }
    if (local_30 == iStack_54) break;
    iStack_48 = iStack_48 + 1;
    iStack_4c = iStack_4c + 1;
  } while( true );
  local_56 = '\x01';
  iStack_34 = iStack_48;
LAB_005347ad:
  iStack_50 = iStack_50 + 1;
  iVar5 = local_44;
  goto LAB_005345b3;
}

