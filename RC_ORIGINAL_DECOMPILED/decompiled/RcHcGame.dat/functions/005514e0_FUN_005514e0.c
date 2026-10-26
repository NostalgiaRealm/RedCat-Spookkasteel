/*
 * FUN_005514e0 at 005514e0
 * undefined FUN_005514e0(void)
 * Address ranges: 005514e0-0055183c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_005514e0(int param_1,int *param_2,int param_3)

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
  undefined1 local_4d;
  int local_4c;
  int iStack_48;
  int local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [16];
  undefined1 local_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063df7f;
  pvStack_c = ExceptionList;
  local_40 = 0;
  ExceptionList = &pvStack_c;
  local_44 = param_1;
  FUN_00516fb0();
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    puVar4 = *(undefined1 **)(param_3 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    uVar5 = FUN_005ae390(local_1c,s_CAdamSoundDefMgr__GetOrCreateSou_006a1d44,puVar4);
    local_4 = 1;
    FUN_005aff00(uVar5);
    local_4 = local_4 & 0xffffff00;
    FUN_004040a0(1);
  }
  local_4c = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  cVar2 = FUN_00553640();
  if ((cVar2 != '\0') && (*(char *)(*(int *)(param_1 + 0x38) + 0x8c) != '\0')) {
    pcVar11 = *(char **)(param_3 + 4);
    if (pcVar11 == (char *)0x0) {
      pcVar11 = "";
    }
    local_3c[0] = (undefined1)param_3;
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
    local_4._0_1_ = 3;
    if (*(int *)(param_1 + 0x30) == 0) {
      FUN_00409810(&DAT_006b3f70,&local_4d);
      local_4._0_1_ = 4;
      pcVar6 = (code *)FUN_005a07f0(s_m_Func_0069522c,s___AdamSource_DaviSortedList_h_00690798,0xb9,
                                    local_2c);
      (*pcVar6)();
      local_4._0_1_ = 3;
      FUN_004040a0(1);
    }
    iVar3 = FUN_0044e4c0();
    if (iVar3 == 0) {
      iVar12 = 0;
      bVar1 = false;
    }
    else {
      iStack_48 = 0;
      iVar10 = (-(uint)(*(int *)(param_1 + 0x2c) != 0) & 0xfffffffe) + 2;
      iVar3 = FUN_0044e4c0();
      bVar1 = false;
      iVar3 = iVar3 + -1;
      do {
        iVar12 = (iVar3 + iStack_48) / 2;
        iVar7 = (**(code **)(param_1 + 0x30))(local_3c,*(int *)(param_1 + 0x20) + iVar12 * 4);
        if (iVar7 == 1) {
          bVar1 = true;
          param_1 = local_44;
          goto LAB_00551696;
        }
        if (iVar7 == iVar10) {
          iStack_48 = iVar12 + 1;
        }
        else {
          iVar3 = iVar12 + -1;
        }
      } while (iStack_48 <= iVar3);
      param_1 = local_44;
      if (iVar7 == iVar10) {
        iVar12 = iVar12 + 1;
      }
    }
LAB_00551696:
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    iVar3 = param_3;
    if (bVar1) {
      iVar3 = *(int *)(param_1 + 0x20);
      if (local_4c != *(int *)(iVar3 + iVar12 * 4)) {
        if ((local_4c != 0) &&
           (iVar10 = *(int *)(local_4c + 0x14) + -1, *(int *)(local_4c + 0x14) = iVar10, iVar10 == 0
           )) {
          FUN_005abfc0(0);
        }
        local_4c = *(int *)(iVar3 + iVar12 * 4);
        FUN_005844b0();
      }
      if (local_4c != 0) goto LAB_005517e8;
      local_3c[0] = (undefined1)param_3;
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
      local_4._0_1_ = 7;
      pcVar6 = (code *)FUN_005a07f0(s_result_IsNotNull___00695234,
                                    s_D__Work_RCHorror_AdamSource_Adam_006a1798,0x374,local_3c);
      (*pcVar6)();
    }
    else {
      piVar8 = (int *)FUN_00550bf0(&param_3,param_3);
      local_4._0_1_ = 5;
      if (local_4c != *piVar8) {
        if (local_4c != 0) {
          FUN_004098d0();
        }
        local_4c = *piVar8;
        FUN_005844b0();
      }
      local_4._0_1_ = 2;
      FUN_0057d310();
      if (local_4c != 0) goto LAB_005517e8;
      puVar4 = *(undefined1 **)(iVar3 + 4);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &DAT_0064a3b4;
      }
      uVar5 = FUN_005ae390(local_2c,s_CAdamSoundDefMgr__GetOrCreateSou_006a1d08,puVar4);
      local_4._0_1_ = 6;
      FUN_004c43e0(uVar5);
    }
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
LAB_005517e8:
  *param_2 = local_4c;
  if (local_4c != 0) {
    *(int *)(local_4c + 0x14) = *(int *)(local_4c + 0x14) + 1;
  }
  local_40 = 1;
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_4c != 0) &&
     (iVar3 = *(int *)(local_4c + 0x14) + -1, *(int *)(local_4c + 0x14) = iVar3, iVar3 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = pvStack_c;
  return param_2;
}

