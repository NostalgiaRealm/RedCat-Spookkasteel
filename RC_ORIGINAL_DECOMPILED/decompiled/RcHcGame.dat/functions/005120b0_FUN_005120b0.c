/*
 * FUN_005120b0 at 005120b0
 * undefined FUN_005120b0(void)
 * Address ranges: 005120b0-00512398
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_005120b0(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined3 uVar9;
  int iVar6;
  code *pcVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar10;
  char *pcVar11;
  char local_51;
  undefined1 local_4c [16];
  undefined1 auStack_3c [16];
  undefined1 local_2c [4];
  int local_28;
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637640;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x170) == '\0') {
    return (uint)ExceptionList & 0xffffff00;
  }
  local_51 = '\x01';
  ExceptionList = &local_c;
  iVar2 = FUN_00512c20(param_2);
  if (iVar2 < 0) {
    puVar3 = *(undefined1 **)(param_2 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_CAdamCommunicator__Message__s_no_0069ee9c,puVar3);
    local_4 = 0;
    FUN_004c43e0(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    local_51 = '\0';
  }
  iVar5 = FUN_00511810(param_3);
  if (iVar5 < 0) {
    puVar3 = *(undefined1 **)(param_3 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c,s_CAdamCommunicator__Portrait__s_n_0069ee6c,puVar3);
    local_4 = 1;
    FUN_004c43e0(uVar4);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
    local_51 = '\0';
  }
  FUN_005ae390(local_2c,&DAT_006b3f70);
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  if (-1 < param_4) {
    uVar4 = FUN_00511280(local_1c,param_4);
    local_4._0_1_ = 3;
    FUN_0040cc00(uVar4,0,0xffffffff);
    local_4._0_1_ = 2;
    param_4 = 0;
    if (local_18 != 0) {
      cVar1 = *(char *)(local_18 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        param_4 = FUN_005fe5f0((char *)(local_18 + -1));
      }
      else {
        param_4 = CONCAT31((int3)((uint)local_18 >> 8),cVar1 + -1);
        *(char *)(local_18 + -1) = cVar1 + -1;
      }
    }
  }
  uVar9 = (undefined3)((uint)param_4 >> 8);
  if (local_51 == '\0') goto LAB_0051235c;
  param_2._0_1_ = (undefined1)iVar5;
  if (iVar5 < 0) {
LAB_00512244:
    local_4c[0] = (undefined1)param_2;
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
    local_4._0_1_ = 4;
    pcVar7 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x97,local_4c);
    (*pcVar7)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  else {
    if (*(int *)(param_1 + 0x17c) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 0x180) - *(int *)(param_1 + 0x17c) >> 2;
    }
    if (iVar6 <= iVar5) goto LAB_00512244;
  }
  iVar6 = *(int *)(param_1 + 0x17c);
  if (iVar2 < 0) {
LAB_005122d6:
    auStack_3c[0] = (undefined1)param_2;
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
    pcVar7 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                  s___AdamSource_DaviList_h_0068f458,0x97,auStack_3c);
    (*pcVar7)();
    local_4._0_1_ = 2;
    FUN_004040a0(1);
  }
  else {
    if (*(int *)(param_1 + 0x18c) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c) >> 2;
    }
    if (iVar8 <= iVar2) goto LAB_005122d6;
  }
  FUN_004a9e10(*(undefined4 *)(*(int *)(param_1 + 0x18c) + iVar2 * 4),
               *(undefined4 *)(iVar6 + iVar5 * 4),local_2c);
  uVar9 = extraout_var;
LAB_0051235c:
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(local_28 + -1);
      uVar9 = extraout_var_00;
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar9,local_51);
}

