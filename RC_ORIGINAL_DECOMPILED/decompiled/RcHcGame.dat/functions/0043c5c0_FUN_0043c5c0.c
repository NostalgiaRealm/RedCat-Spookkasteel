/*
 * FUN_0043c5c0 at 0043c5c0
 * undefined FUN_0043c5c0(void)
 * Address ranges: 0043c5c0-0043c84e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0043c5c0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined1 local_35;
  int *local_34;
  int *local_30;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00624588;
  pvStack_c = ExceptionList;
  local_35 = 0;
  ExceptionList = &pvStack_c;
  piVar3 = (int *)FUN_004042e0(&local_34);
  local_4 = 0;
  if (*piVar3 == 0) {
    local_2c[0] = 0;
    FUN_004040a0(0);
    uVar7 = 0xffffffff;
    pcVar10 = &DAT_006b3f70;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar2 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar2 != '\0');
    uVar7 = ~uVar7 - 1;
    cVar2 = FUN_00401940(uVar7,1);
    if (cVar2 != '\0') {
      puVar6 = (undefined4 *)&DAT_006b3f70;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *local_28 = *puVar6;
        puVar6 = puVar6 + 1;
        local_28 = local_28 + 1;
      }
      for (uVar8 = uVar7 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)local_28 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        local_28 = (undefined4 *)((int)local_28 + 1);
      }
      FUN_00404190(uVar7);
    }
    local_4._0_1_ = 1;
    pcVar4 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6,
                                  local_2c);
    (*pcVar4)();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  iVar5 = FUN_0060a6f2(*(undefined4 *)(*piVar3 + 0x360),0,&CAdamPlayer::RTTI_Type_Descriptor,
                       &CRCPlayer::RTTI_Type_Descriptor,0);
  uVar9 = 0xffffffff;
  local_4 = 0xffffffff;
  if (local_34 != (int *)0x0) {
    iVar1 = local_34[5];
    local_34[5] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      FUN_005abfc0(0);
    }
    local_34 = (int *)0x0;
  }
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x1f0) == 0) {
      auStack_1c[0] = 0;
      uVar7 = 0xffffffff;
      iStack_18 = 0;
      pcVar10 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar2 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar2 != '\0');
      uStack_14 = 0;
      uStack_10 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 2;
      pcVar4 = (code *)FUN_005a07f0(s_m_GameProperties____0_0068f970,
                                    s___AdamSource_AdamPlayer_h_0068f988,0x15b,auStack_1c);
      (*pcVar4)();
      local_4 = 0xffffffff;
      if (iStack_18 != 0) {
        cVar2 = *(char *)(iStack_18 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar2 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    iVar5 = FUN_0060a6f2(*(undefined4 *)(iVar5 + 0x1f0),0,
                         &CAdamPlayerGameProperties::RTTI_Type_Descriptor,
                         &CRcPlayerProperties::RTTI_Type_Descriptor,0);
    if (iVar5 != 0) {
      FUN_00439db0(1);
      iVar5 = local_30[0xd5];
      if (iVar5 == 0) {
        local_35 = FUN_00439d20(DAT_006b5948);
        uVar9 = 0;
      }
      else if (iVar5 == 1) {
        local_35 = FUN_00439d20(DAT_006b5944);
        uVar9 = 2;
      }
      else if (iVar5 == 2) {
        local_35 = FUN_00439d20(DAT_006b5940);
        uVar9 = 3;
      }
    }
  }
  if (local_30[0xd6] != 0) {
    puVar6 = (undefined4 *)(**(code **)(*local_30 + 0x48))(local_2c,uVar9);
    FUN_004699f0(*puVar6,puVar6[1],puVar6[2],uVar9);
  }
  ExceptionList = pvStack_c;
  return local_35;
}

