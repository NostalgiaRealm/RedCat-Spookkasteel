/*
 * FUN_004a9e10 at 004a9e10
 * undefined FUN_004a9e10(void)
 * Address ranges: 004a9e10-004aa435
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_004a9e10(int param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined3 uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  int local_84;
  void *pvStack_80;
  undefined1 auStack_7c [16];
  undefined1 local_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [4];
  int iStack_38;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062df41;
  local_c = ExceptionList;
  iVar9 = 0;
  uVar7 = *(uint *)(param_2 + 0x4c);
  if (((uVar7 == 0) || (*(int *)(param_2 + 0x50) < (int)uVar7)) && (0 < *(int *)(param_2 + 0x40))) {
    local_84 = 0;
    ExceptionList = &local_c;
    do {
      if (*(int *)(param_1 + 0x144) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = (*(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x144)) / 0x30;
      }
      if (iVar8 <= local_84) {
        auStack_3c[0] = uStack_85;
        FUN_004040a0(0);
        local_4 = 3;
        FUN_0044e4a0(&uStack_85);
        local_4 = CONCAT31(local_4._1_3_,4);
        FUN_0044e4a0(&uStack_86);
        local_4 = 5;
        FUN_0040cc00(param_2 + 0x28,0,0xffffffff);
        FUN_0040cc00(param_3 + 0x38,0,0xffffffff);
        FUN_0040cc00(param_4,0,0xffffffff);
        FUN_004aa660(*(undefined4 *)(param_1 + 0x148),auStack_3c);
        local_84 = *(int *)(param_1 + 0x150) * *(int *)(param_2 + 0x40);
        pvStack_80 = *(void **)(*(int *)(param_1 + 300) + 0x1d4);
        if (local_84 == -1) {
          FUN_00409810(&DAT_006b3f70,&local_87);
          local_4._0_1_ = 6;
          pcVar2 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                        s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_4c);
          (*pcVar2)();
          local_4 = CONCAT31(local_4._1_3_,5);
          FUN_004040a0(1);
        }
        iVar9 = __ftol();
        uVar4 = FUN_00513250();
        if (*(int *)(param_1 + 0x134) == -1) {
          *(undefined4 *)(param_1 + 0x134) = 0;
        }
        if (*(int *)(param_4 + 8) != 0) {
          pvStack_80 = operator_new(0x8c);
          local_4._0_1_ = 7;
          if (pvStack_80 == (void *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_004abe10(uVar4,*(undefined4 *)(param_1 + 0x134),
                                 *(undefined4 *)(param_1 + 0x130),iVar9,
                                 *(undefined4 *)(param_1 + 300),param_4);
          }
          local_4 = CONCAT31(local_4._1_3_,5);
          FUN_004ad2e0(uVar5);
        }
        pvStack_80 = operator_new(0x80);
        local_4._0_1_ = 8;
        if (pvStack_80 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_004ab600(uVar4,*(undefined4 *)(param_1 + 0x134),
                               *(undefined4 *)(param_1 + 0x130),iVar9,*(undefined4 *)(param_1 + 300)
                               ,param_2);
        }
        local_4 = CONCAT31(local_4._1_3_,5);
        FUN_004ad2e0(uVar5);
        if (*(int *)(param_2 + 0x4c) != 0) {
          *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
        }
        local_84 = CONCAT31(local_84._1_3_,1);
        if (*(int *)(param_1 + 0x13c) != 0) {
          cVar1 = FUN_004abc20(0);
          local_84 = CONCAT31(local_84._1_3_,cVar1 == '\0');
        }
        pvStack_80 = operator_new(0x88);
        local_4._0_1_ = 9;
        if (pvStack_80 == (void *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_004ab8e0(uVar4,*(undefined4 *)(param_1 + 0x134),
                               *(undefined4 *)(param_1 + 0x130),iVar9,*(undefined4 *)(param_1 + 300)
                               ,param_3,local_84);
        }
        local_4._0_1_ = 5;
        FUN_004ad2e0(uVar4);
        FUN_004ad9a0(0,0xffffffff);
        *(undefined4 *)(param_1 + 0x13c) = uVar4;
        local_84 = *(undefined4 *)(*(int *)(param_1 + 300) + 0x1d4);
        pvStack_80 = (void *)(*(int *)(param_1 + 0x130) * 2);
        if (pvStack_80 != (void *)0xffffffff) goto LAB_004aa38e;
        auStack_7c[0] = uStack_85;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        goto code_r0x004aa33f;
      }
      if ((iVar9 < 0) || (iVar8 = FUN_004aa630(), iVar8 <= local_84)) {
        FUN_00409810(&DAT_006b3f70,&local_87);
        local_4 = 0;
        pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                      s___AdamSource_DaviList_h_0068f458,0x97,local_6c);
        (*pcVar2)();
        local_4 = 0xffffffff;
        FUN_004040a0(1);
      }
      puVar3 = *(undefined1 **)(param_2 + 0x2c);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_0064a3b4;
      }
      iVar8 = FUN_004251b0(0,*(undefined4 *)(iVar9 + *(int *)(param_1 + 0x144) + 8),puVar3,
                           *(undefined4 *)(param_2 + 0x30));
      if (iVar8 == 0) {
        if ((iVar9 < 0) || (iVar8 = FUN_004aa630(), iVar8 <= local_84)) {
          FUN_00409810(&DAT_006b3f70,&uStack_86);
          local_4 = 1;
          pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                        s___AdamSource_DaviList_h_0068f458,0x97,auStack_5c);
          (*pcVar2)();
          local_4 = 0xffffffff;
          FUN_004040a0(1);
        }
        puVar3 = *(undefined1 **)(param_3 + 0x3c);
        if (puVar3 == (undefined1 *)0x0) {
          puVar3 = &DAT_0064a3b4;
        }
        iVar8 = FUN_004251b0(0,*(undefined4 *)(iVar9 + *(int *)(param_1 + 0x144) + 0x18),puVar3,
                             *(undefined4 *)(param_3 + 0x40));
        if (iVar8 == 0) {
          if ((iVar9 < 0) || (iVar8 = FUN_004aa630(), iVar8 <= local_84)) {
            FUN_00409810(&DAT_006b3f70,&uStack_85);
            local_4 = 2;
            pcVar2 = (code *)FUN_005a07f0(s_a_Index>_0____a_Index<Count()_0068f470,
                                          s___AdamSource_DaviList_h_0068f458,0x97,auStack_4c);
            (*pcVar2)();
            local_4 = 0xffffffff;
            FUN_004040a0(1);
          }
          puVar3 = *(undefined1 **)(param_4 + 4);
          if (puVar3 == (undefined1 *)0x0) {
            puVar3 = &DAT_0064a3b4;
          }
          iVar8 = FUN_004251b0(0,*(undefined4 *)(*(int *)(param_1 + 0x144) + iVar9 + 0x28),puVar3,
                               *(undefined4 *)(param_4 + 8));
          uVar7 = 0;
          if (iVar8 == 0) break;
        }
      }
      local_84 = local_84 + 1;
      iVar9 = iVar9 + 0x30;
    } while( true );
  }
  ExceptionList = local_c;
  return uVar7 & 0xffffff00;
  while( true ) {
    uVar7 = uVar7 - 1;
    cVar1 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    if (cVar1 == '\0') break;
code_r0x004aa33f:
    if (uVar7 == 0) break;
  }
  FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
  local_4._0_1_ = 10;
  pcVar2 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                s___AdamSource_AdamClock_h_0068e22c,0x8a,auStack_7c);
  (*pcVar2)();
  local_4._0_1_ = 5;
  FUN_004040a0(1);
LAB_004aa38e:
  iVar8 = __ftol();
  *(int *)(param_1 + 0x134) = *(int *)(param_1 + 0x134) + iVar8 + iVar9;
  local_4 = 0xc;
  FUN_004040a0(1);
  uVar6 = 0;
  if (iStack_28 != 0) {
    cVar1 = *(char *)(iStack_28 + -1);
    uVar6 = (undefined3)((uint)iStack_28 >> 8);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iStack_28 + -1));
      uVar6 = extraout_var;
    }
    else {
      *(char *)(iStack_28 + -1) = cVar1 + -1;
    }
  }
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  if (iStack_38 != 0) {
    cVar1 = *(char *)(iStack_38 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_38 + -1);
      uVar6 = extraout_var_00;
    }
    else {
      *(char *)(iStack_38 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return CONCAT31(uVar6,1);
}

