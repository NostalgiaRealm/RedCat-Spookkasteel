/*
 * FUN_0043ee90 at 0043ee90
 * undefined FUN_0043ee90(void)
 * Address ranges: 0043ee90-0043f25c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0043ee90(void)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  int local_34;
  int *local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624970;
  pvStack_c = ExceptionList;
  uVar2 = 0;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_34);
  uVar8 = 0xffffffff;
  local_4 = 0;
  if (*piVar3 == 0) {
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar5 = FUN_0060a6f2(*(undefined4 *)(*piVar3 + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor,
                       &CRCPlayer::RTTI_Type_Descriptor,0);
  local_4 = 0xffffffff;
  if (local_34 != 0) {
    iVar9 = *(int *)(local_34 + 0x14) + -1;
    *(int *)(local_34 + 0x14) = iVar9;
    if (iVar9 == 0) {
      FUN_005abfc0(0);
    }
    local_34 = 0;
  }
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x1f0) == 0) {
      FUN_004040a0(0);
      uVar7 = 0xffffffff;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s___AdamSource_AdamPlayer_h_0068f988,0x15b,auStack_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      FUN_004040a0(1);
    }
    FUN_0060a6f2(*(undefined4 *)(iVar5 + 0x1f0),0,&CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                 &CRcPlayerProperties::RTTI_Type_Descriptor,0);
    iVar9 = local_30[0xd5];
    if (iVar9 == 0) {
      FUN_00439d20(DAT_006b5a58);
      if (*(int *)(iVar5 + 0x1f0) == 0) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4 = 3;
        pcVar4 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                      s___AdamSource_AdamPlayer_h_0068f988,0x15b,auStack_1c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar2 = (**(code **)(**(int **)(iVar5 + 0x1f0) + 0x20))((float)_DAT_006b5a68,0,0);
      uVar8 = 0;
    }
    else if (iVar9 == 1) {
      FUN_00439d20(DAT_006b5a54);
      if (*(int *)(iVar5 + 0x1f0) == 0) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4 = 4;
        pcVar4 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                      s___AdamSource_AdamPlayer_h_0068f988,0x15b,auStack_1c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar2 = (**(code **)(**(int **)(iVar5 + 0x1f0) + 0x20))((float)_DAT_006b5a64,0,0);
      uVar8 = 1;
    }
    else if (iVar9 == 2) {
      FUN_00439d20(DAT_006b5a50);
      if (*(int *)(iVar5 + 0x1f0) == 0) {
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4 = 5;
        pcVar4 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                      s___AdamSource_AdamPlayer_h_0068f988,0x15b,auStack_1c);
        (*pcVar4)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      uVar2 = (**(code **)(**(int **)(iVar5 + 0x1f0) + 0x20))((float)_DAT_006b5a60,0,0);
      uVar8 = 2;
    }
  }
  if (local_30[0xd6] != 0) {
    puVar6 = (undefined4 *)(**(code **)(*local_30 + 0x48))(local_2c,uVar8);
    FUN_004699f0(*puVar6,puVar6[1],puVar6[2],uVar8);
  }
  ExceptionList = pvStack_c;
  return uVar2;
}

