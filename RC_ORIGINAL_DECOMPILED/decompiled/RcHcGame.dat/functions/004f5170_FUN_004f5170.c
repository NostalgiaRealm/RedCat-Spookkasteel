/*
 * FUN_004f5170 at 004f5170
 * undefined FUN_004f5170(void)
 * Address ranges: 004f5170-004f5742
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5170(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_8a;
  undefined1 uStack_89;
  int iStack_88;
  int local_84;
  int iStack_80;
  int local_7c [2];
  int *local_74;
  int *local_70;
  undefined1 local_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00634a38;
  pvStack_c = ExceptionList;
  local_74 = (int *)0x0;
  local_70 = (int *)0x0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  piVar4 = (int *)FUN_004f4920(local_7c);
  piVar2 = (int *)*piVar4;
  local_70 = (int *)piVar4[1];
  local_74 = piVar2;
  do {
    if (piVar2 == (int *)0x0) {
      local_6c[0] = local_8a;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 1;
      pcVar5 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                    local_6c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    local_70 = (int *)*piVar2;
    if ((local_70 == (int *)0x0) || (puVar7 = (undefined4 *)*local_70, puVar7 == (undefined4 *)0x0))
    break;
    FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x1ec);
    local_4._0_1_ = 2;
    FUN_004f4e10(puVar7);
    (**(code **)*puVar7)(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_005ae770();
  } while( true );
  iVar6 = FUN_00565870();
  iVar8 = DAT_0069c5c0;
  local_7c[0] = iVar6;
  if ((iVar6 != -1) && (DAT_0069c5c0 != -1)) {
    if (iVar6 < DAT_0069c5c0) {
      local_6c[0] = local_8a;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 3;
      pcVar5 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c,
                                    0x7d,local_6c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    if (iVar6 - iVar8 < 0) {
      auStack_5c[0] = local_8a;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 4;
      pcVar5 = (code *)FUN_005a07f0(s_CAdamClock__TimeDiff__now__prevN_0069c878,
                                    s_D__Work_RCHorror_AdamSource_Adam_0069c628,500,auStack_5c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
  }
  iVar8 = local_84;
  DAT_0069c5c0 = iVar6;
  if (*(int *)(local_84 + 1000) == -1) {
    *(int *)(local_84 + 1000) = iVar6;
    *(int *)(local_84 + 0x3e0) = iVar6;
    *(int *)(local_84 + 0x3e4) = iVar6;
  }
  iVar3 = *(int *)(local_84 + 1000);
  if ((iVar6 != -1) && (iVar3 != -1)) {
    if (iVar6 < iVar3) {
      FUN_00409810(&DAT_006b3f70,&local_8a);
      local_4._0_1_ = 5;
      pcVar5 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c,
                                    0x7d,auStack_3c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    if (500 < iVar6 - iVar3) {
      *(int *)(iVar8 + 1000) = iVar6 + -500;
    }
  }
  iVar6 = *(int *)(iVar8 + 1000);
  *(undefined4 *)(iVar8 + 0x3ec) = 0;
  do {
    if ((local_7c[0] == -1) || (iVar6 == -1)) {
      iStack_88 = 0;
    }
    else {
      if (local_7c[0] < iVar6) {
        auStack_5c[0] = local_8a;
        FUN_004040a0(0);
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4._0_1_ = 6;
        pcVar5 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,auStack_5c);
        (*pcVar5)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
        iVar8 = local_84;
      }
      iStack_88 = local_7c[0] - iVar6;
      if (0x7d < iStack_88) {
        iStack_88 = 0x7d;
      }
    }
    iVar6 = iVar6 + iStack_88;
    iStack_80 = iVar6;
    puVar7 = (undefined4 *)FUN_004f4900(local_6c);
    piVar2 = (int *)*puVar7;
    local_70 = (int *)puVar7[1];
    local_74 = piVar2;
    if (piVar2 == (int *)0x0) {
      auStack_4c[0] = local_8a;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 7;
      pcVar5 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,0x51,
                                    auStack_4c);
      (*pcVar5)();
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      iVar8 = local_84;
    }
    local_70 = (int *)*piVar2;
    if (local_70 != (int *)0x0) {
      iVar3 = *local_70;
      while (iVar3 != 0) {
        if ((*(int *)(iVar3 + 0xc4) == -1) || (*(int *)(iVar3 + 0xcc) == -1)) {
LAB_004f5622:
          FUN_00502e40(iVar6,iStack_88);
          if (*(int *)(iVar3 + 0xc4) == -1) {
            *(int *)(iVar3 + 0xc4) = iVar6;
          }
          *(int *)(iVar3 + 200) = iVar6;
        }
        else {
          iVar8 = *(int *)(iVar3 + 200);
          if ((iStack_80 == -1) || (iVar8 == -1)) {
            iVar8 = 0;
          }
          else {
            if (iStack_80 < iVar8) {
              FUN_004040a0(0);
              uVar9 = 0xffffffff;
              pcVar10 = &DAT_006b3f70;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
              local_4._0_1_ = 8;
              pcVar5 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,
                                            s___AdamSource_AdamClock_h_0068e22c,0x7d,auStack_3c);
              (*pcVar5)();
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_004040a0(1);
            }
            iVar8 = iStack_80 - iVar8;
          }
          iVar6 = iStack_80;
          if (*(int *)(iVar3 + 0xcc) < iVar8) goto LAB_004f5622;
        }
        if (local_74 == (int *)0x0) {
          FUN_00409810(&DAT_006b3f70,&local_8a);
          local_4._0_1_ = 9;
          pcVar5 = (code *)FUN_005a07f0(s_m_List_00699eec,s___AdamSource_DaviLinkedList_h_00699ef4,
                                        0x5f,auStack_2c);
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        if (local_70 == (int *)0x0) {
          FUN_00409810(&DAT_006b3f70,&uStack_89);
          local_4._0_1_ = 10;
          pcVar5 = (code *)FUN_005a07f0(s_m_Node_00699ec4,s___AdamSource_DaviLinkedList_h_00699ef4,
                                        0x60,auStack_1c);
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        piVar2 = (int *)local_70[1];
        iVar8 = local_84;
        if (piVar2 == (int *)0x0) break;
        local_70 = piVar2;
        iVar3 = *piVar2;
      }
    }
    *(int *)(iVar8 + 0x3ec) = *(int *)(iVar8 + 0x3ec) + 1;
    if (local_7c[0] <= iVar6) {
      *(int *)(iVar8 + 1000) = local_7c[0];
      *(int *)(iVar8 + 0x3e4) = local_7c[0];
      ExceptionList = pvStack_c;
      return;
    }
  } while( true );
}

