/*
 * FUN_00551840 at 00551840
 * undefined FUN_00551840(void)
 * Address ranges: 00551840-00551bca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00551840(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  undefined1 local_5d;
  int local_5c;
  int iStack_58;
  int local_54;
  undefined4 local_50;
  undefined1 local_4c [16];
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063dfe7;
  pvStack_c = ExceptionList;
  local_50 = 0;
  ExceptionList = &pvStack_c;
  local_54 = param_1;
  FUN_00516fb0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    iVar3 = FUN_005a3150(local_1c,param_4);
    puVar4 = *(undefined1 **)(iVar3 + 4);
    local_4 = 1;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_2c,s_CAdamSoundDefMgr__GetOrCreateSou_006a1d70,puVar4);
    local_4._0_1_ = 2;
    FUN_005aff00(uVar5);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  local_5c = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  cVar2 = FUN_00553640();
  if ((cVar2 != '\0') && (*(char *)(*(int *)(param_1 + 0x38) + 0x8c) != '\0')) {
    pcVar11 = *(char **)(param_4 + 4);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = "";
    }
    local_4c[0] = (undefined1)param_4;
    FUN_004040a0(0);
    uVar9 = 0xffffffff;
    pcVar13 = pcVar11;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar2 != '\0');
    FUN_004040f0(pcVar11,~uVar9 - 1);
    local_4._0_1_ = 4;
    if (*(int *)(param_1 + 0x30) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_5d);
      local_4._0_1_ = 5;
      pcVar6 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                    local_3c);
      (*pcVar6)();
      local_4._0_1_ = 4;
      FUN_004040a0(1);
    }
    iVar3 = FUN_0044e4c0();
    if (iVar3 == 0) {
      iVar12 = 0;
      bVar1 = false;
    }
    else {
      iStack_58 = 0;
      iVar10 = (-(uint)(*(int *)(param_1 + 0x2c) != 0) & 0xfffffffe) + 2;
      iVar3 = FUN_0044e4c0();
      bVar1 = false;
      iVar3 = iVar3 + -1;
      do {
        iVar12 = (iVar3 + iStack_58) / 2;
        iVar7 = (**(code **)(param_1 + 0x30))(local_4c,*(int *)(param_1 + 0x20) + iVar12 * 4);
        if (iVar7 == 1) {
          bVar1 = true;
          param_1 = local_54;
          goto LAB_00551a1d;
        }
        if (iVar7 == iVar10) {
          iStack_58 = iVar12 + 1;
        }
        else {
          iVar3 = iVar12 + -1;
        }
      } while (iStack_58 <= iVar3);
      param_1 = local_54;
      if (iVar7 == iVar10) {
        iVar12 = iVar12 + 1;
      }
    }
LAB_00551a1d:
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    iVar3 = param_4;
    if (bVar1) {
      iVar3 = *(int *)(param_1 + 0x20);
      if (local_5c != *(int *)(iVar3 + iVar12 * 4)) {
        if ((local_5c != 0) &&
           (iVar10 = *(int *)(local_5c + 0x14) + -1, *(int *)(local_5c + 0x14) = iVar10, iVar10 == 0
           )) {
          FUN_005abfc0(0);
        }
        local_5c = *(int *)(iVar3 + iVar12 * 4);
        FUN_005844b0();
      }
      if (local_5c != 0) goto LAB_00551b76;
      local_4c[0] = (undefined1)param_4;
      FUN_004040a0(0);
      uVar9 = 0xffffffff;
      pcVar11 = &DAT_006b3f70;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar2 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar2 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
      local_4._0_1_ = 8;
      pcVar6 = (code *)FUN_005a07f0(s_result_IsNotNull___00695234,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x394,local_4c);
      (*pcVar6)();
    }
    else {
      piVar8 = (int *)FUN_00550f30(&param_4,param_3,param_4);
      local_4._0_1_ = 6;
      if (local_5c != *piVar8) {
        if (local_5c != 0) {
          FUN_004098d0();
        }
        local_5c = *piVar8;
        FUN_005844b0();
      }
      local_4._0_1_ = 3;
      FUN_0057d310();
      if (local_5c != 0) goto LAB_00551b76;
      puVar4 = *(undefined1 **)(iVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_3c,s_CAdamSoundDefMgr__GetOrCreateSou_006a1d08,puVar4);
      local_4._0_1_ = 7;
      FUN_004c43e0(uVar5);
    }
    local_4._0_1_ = 3;
    FUN_004040a0(1);
  }
LAB_00551b76:
  *param_2 = local_5c;
  if (local_5c != 0) {
    *(int *)(local_5c + 0x14) = *(int *)(local_5c + 0x14) + 1;
  }
  local_50 = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_5c != 0) &&
     (iVar3 = *(int *)(local_5c + 0x14) + -1, *(int *)(local_5c + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_2;
}

