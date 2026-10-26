/*
 * FUN_004ad9c0 at 004ad9c0
 * undefined FUN_004ad9c0(void)
 * Address ranges: 004ad9c0-004addf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004ad9c0(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  char cVar8;
  char *pcVar9;
  undefined1 local_4c [4];
  int iStack_48;
  undefined1 auStack_3c [4];
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  int iStack_28;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e330;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    ExceptionList = &local_c;
    uVar3 = FUN_005ae390(local_4c,s_CAdamAnimationCell__OnFrameCall__00696454,param_2);
    local_4 = 0;
    FUN_005aff00(uVar3);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  if (param_1[9] <= param_2) {
    if ((char)param_1[0xc] == '\0') {
      cVar1 = '\x01';
      *(undefined1 *)(param_1 + 0xc) = 1;
      param_1[0xd] = 0;
      if (param_1[0x13] == -1) {
        param_1[0xe] = -1;
        param_1[0xf] = -1;
        param_1[0x10] = 0x3f800000;
        *(undefined1 *)(param_1 + 0x11) = 1;
      }
      else {
        iVar5 = param_1[0x13] + param_1[9];
        if ((iVar5 != -1) && (iVar5 < 0)) {
          local_4c[0] = (undefined1)param_2;
          FUN_004040a0(0);
          uVar7 = 0xffffffff;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar8 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar8 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
          local_4 = 1;
          pcVar4 = (code *)FUN_005a07f0(s__a_LifeTime____ADAMTIME_NONE_____0068d490,
                                        s___AdamSource_AdamLifeTime_h_0068d4c8,0x56,local_4c);
          (*pcVar4)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        param_1[0xe] = iVar5;
        param_1[0xf] = -1;
        param_1[0x10] = 0x3f800000;
        *(undefined1 *)(param_1 + 0x11) = 1;
      }
    }
    else {
      cVar1 = '\0';
    }
    iVar5 = param_1[0xe];
    cVar8 = '\x01';
    if (iVar5 != -1) {
      iVar2 = param_1[0xf];
      if (iVar2 == -1) {
        param_1[0x10] = 0x3f800000;
        param_1[0xf] = iVar5 + param_2;
      }
      else if (iVar2 < param_2) {
        param_1[0x10] = 0;
        cVar8 = '\0';
      }
      else if (iVar5 < 1) {
        param_1[0x10] = 0;
      }
      else {
        param_1[0x10] = (int)((float)(iVar2 - param_2) / (float)iVar5);
      }
    }
    *(char *)(param_1 + 0x11) = cVar8;
    if (cVar8 == '\0') {
      if (cVar1 == '\0') {
        if (*(char *)((int)param_1 + 0x31) == '\0') {
          ExceptionList = local_c;
          return;
        }
        iVar5 = (**(code **)(*param_1 + 0x14))(auStack_2c);
        puVar6 = *(undefined1 **)(iVar5 + 4);
        local_4 = 9;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar3 = FUN_005ae390(auStack_3c,s_Time__d__No_framecall_for__s__Li_00696420,param_2,puVar6);
        local_4 = CONCAT31(local_4._1_3_,10);
        FUN_005aff00(uVar3);
        if (iStack_38 != 0) {
          cVar1 = *(char *)(iStack_38 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)(iStack_38 + -1));
          }
          else {
            *(char *)(iStack_38 + -1) = cVar1 + -1;
          }
        }
        iStack_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        if (iStack_28 == 0) {
          ExceptionList = local_c;
          return;
        }
        cVar1 = *(char *)(iStack_28 + -1);
        if ((cVar1 != '\0') && (cVar1 != -1)) {
          *(char *)(iStack_28 + -1) = cVar1 + -1;
          ExceptionList = local_c;
          return;
        }
        FUN_005fe5f0((char *)(iStack_28 + -1));
        ExceptionList = local_c;
        return;
      }
    }
    else if ((cVar1 == '\0') && (param_1[0x12] != -1)) {
      iVar5 = param_1[0xd];
      param_1[0xd] = iVar5 + param_3;
      if (iVar5 + param_3 < param_1[0x12]) {
        if (*(char *)((int)param_1 + 0x31) == '\0') {
          ExceptionList = local_c;
          return;
        }
        iVar5 = (**(code **)(*param_1 + 0x14))(local_4c);
        puVar6 = *(undefined1 **)(iVar5 + 4);
        local_4 = 5;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar3 = FUN_005ae390(auStack_1c,s_Time__d__NO_framecall_for__s_wit_00696388,param_2,puVar6,
                             param_1[0x12],param_1[0xd]);
        local_4._0_1_ = 6;
        FUN_005aff00(uVar3);
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_004040a0(1);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
        ExceptionList = local_c;
        return;
      }
      if (*(char *)((int)param_1 + 0x31) != '\0') {
        iVar5 = (**(code **)(*param_1 + 0x14))(auStack_1c);
        puVar6 = *(undefined1 **)(iVar5 + 4);
        local_4 = 3;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar3 = FUN_005ae390(local_4c,s_Time__d__framecall_for__s_with_d_006963e0,param_2,puVar6,
                             param_1[0x12],param_1[0xd],param_1[0xd] - param_1[0x12]);
        local_4._0_1_ = 4;
        FUN_005aff00(uVar3);
        local_4 = CONCAT31(local_4._1_3_,3);
        FUN_004040a0(1);
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      param_1[0xd] = param_1[0xd] - param_1[0x12];
    }
    if (*(char *)((int)param_1 + 0x31) != '\0') {
      iVar5 = (**(code **)(*param_1 + 0x14))(local_4c);
      puVar6 = *(undefined1 **)(iVar5 + 4);
      local_4 = 7;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar3 = FUN_005ae390(auStack_1c,s_Time__d__framecall_for__s_006963c4,param_2,puVar6);
      local_4._0_1_ = 8;
      FUN_005aff00(uVar3);
      local_4 = CONCAT31(local_4._1_3_,7);
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      if (iStack_48 != 0) {
        cVar8 = *(char *)(iStack_48 + -1);
        if ((cVar8 == '\0') || (cVar8 == -1)) {
          FUN_005fe5f0((char *)(iStack_48 + -1));
        }
        else {
          *(char *)(iStack_48 + -1) = cVar8 + -1;
        }
      }
    }
    (**(code **)(*param_1 + 4))(param_2,param_3,cVar1,param_4);
  }
  ExceptionList = local_c;
  return;
}

