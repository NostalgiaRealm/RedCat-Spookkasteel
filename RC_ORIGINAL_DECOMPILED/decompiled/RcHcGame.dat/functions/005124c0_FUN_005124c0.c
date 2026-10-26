/*
 * FUN_005124c0 at 005124c0
 * undefined FUN_005124c0(void)
 * Address ranges: 005124c0-005127c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_005124c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined1 local_4e;
  undefined1 local_4c [4];
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [16];
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  undefined1 *local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637688;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x170) == '\0') {
    return 0;
  }
  local_4e = 0;
  ExceptionList = &local_c;
  FUN_005ae390(local_1c,s_Parkeer_0069eb40);
  local_4 = 0;
  uVar3 = FUN_005123a0(param_2);
  FUN_00511280(local_4c,uVar3);
  local_4._0_1_ = 1;
  iVar4 = FUN_00512d80(param_2,param_3,param_4);
  if (iVar4 < 0) {
    iVar5 = FUN_0050dd60(local_3c,param_2,param_3,param_4);
    puVar6 = *(undefined1 **)(iVar5 + 4);
    local_4._0_1_ = 2;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_2c,s_CAdamCommunicator__Message___s__n_0069eec8,puVar6);
    local_4._0_1_ = 3;
    FUN_004c43e0(uVar3);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar5 = FUN_00511810(local_1c);
  if (iVar5 < 0) {
    puVar6 = local_18;
    if (local_18 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    uVar3 = FUN_005ae390(local_2c,s_CAdamCommunicator__Portrait__s_n_0069ee6c,puVar6);
    local_4._0_1_ = 4;
    FUN_004c43e0(uVar3);
    if (local_28 != 0) {
      cVar1 = *(char *)(local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(local_28 + -1));
      }
      else {
        *(char *)(local_28 + -1) = cVar1 + -1;
      }
    }
    goto LAB_00512757;
  }
  if (!bVar2) goto LAB_00512757;
  iVar7 = FUN_0044e4c0();
  param_2._0_1_ = (undefined1)iVar4;
  if (iVar7 <= iVar5) {
    local_3c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 5;
    pcVar8 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x97,local_3c);
    (*pcVar8)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  iVar7 = *(int *)(param_1 + 0x17c);
  if (iVar4 < 0) {
LAB_005126cd:
    local_2c[0] = (undefined1)param_2;
    FUN_004040a0(0);
    uVar10 = 0xffffffff;
    pcVar11 = &DAT_006b3f70;
    do {
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
    local_4._0_1_ = 6;
    pcVar8 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x97,local_2c);
    (*pcVar8)();
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  else {
    iVar9 = FUN_0044e4c0();
    if (iVar9 <= iVar4) goto LAB_005126cd;
  }
  local_4e = FUN_004a9e10(*(undefined4 *)(*(int *)(param_1 + 0x18c) + iVar4 * 4),
                          *(undefined4 *)(iVar7 + iVar5 * 4),local_4c);
LAB_00512757:
  if (local_48 != 0) {
    cVar1 = *(char *)(local_48 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_48 + -1);
    }
    else {
      *(char *)(local_48 + -1) = cVar1 + -1;
    }
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  if (local_18 != (undefined1 *)0x0) {
    cVar1 = local_18[-1];
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_18 + -1);
    }
    else {
      local_18[-1] = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return local_4e;
}

