/*
 * FUN_004f2810 at 004f2810
 * undefined FUN_004f2810(void)
 * Address ranges: 004f2810-004f2ec0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_004f2810(undefined4 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  char *pcVar8;
  char local_101;
  int local_100;
  uint local_fc;
  int local_f8;
  char *local_f4;
  undefined1 uStack_ed;
  char local_ec [4];
  int iStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 local_dc [4];
  int iStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [16];
  undefined4 *local_8c;
  undefined1 local_88 [124];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634541;
  pvStack_c = ExceptionList;
  local_fc = 0;
  ExceptionList = &pvStack_c;
  local_8c = param_1;
  FUN_005ab4a0();
  local_4 = 0;
  *(undefined1 *)(param_1 + 5) = *param_2;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4._0_1_ = 1;
  uVar2 = FUN_0043b0a0(local_ec);
  local_4._0_1_ = 2;
  uVar3 = FUN_005ae390(local_bc,s_Completed_0069c5b4);
  local_4._0_1_ = 3;
  FUN_005ac9d0(uVar3,param_2,0,uVar2,0);
  local_4._0_1_ = 6;
  FUN_004040a0(1);
  local_4._0_1_ = 5;
  FUN_004040a0(1);
  uVar2 = FUN_0043b0a0(local_ac);
  local_4._0_1_ = 7;
  local_100 = FUN_005ae390(local_cc,&DAT_006b3f70);
  local_4._0_1_ = 8;
  uVar3 = FUN_005ae390(local_dc,s_CurrentSubLevel_0069c5a4);
  local_4._0_1_ = 9;
  FUN_005acbc0(uVar3,param_2,local_100,uVar2,0);
  local_4._0_1_ = 0xd;
  FUN_004040a0(1);
  local_4._0_1_ = 0xc;
  FUN_004040a0(1);
  local_4._0_1_ = 0xb;
  FUN_004040a0(1);
  uVar2 = FUN_0043b0a0(local_9c);
  local_4._0_1_ = 0xe;
  local_100 = FUN_005ae390(local_ec,&DAT_006b3f70);
  local_4._0_1_ = 0xf;
  uVar3 = FUN_005ae390(local_bc,s_LastPlayedDateTime_0069c590);
  local_4._0_1_ = 0x10;
  FUN_005acbc0(uVar3,param_2,local_100,uVar2,0);
  local_4._0_1_ = 0x14;
  FUN_004040a0(1);
  local_4._0_1_ = 0x13;
  FUN_004040a0(1);
  local_4._0_1_ = 0x12;
  FUN_004040a0(1);
  *(char *)(param_1 + 0x5a) = local_101;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = FUN_005affe0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  local_f4 = (char *)(param_1 + 0x61);
  *local_f4 = local_101;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  local_4._0_1_ = 0x16;
  FUN_00514e80(0);
  local_4._0_1_ = 0x17;
  *param_1 = &PTR_FUN_0064f428;
  local_100 = FUN_00436f90(local_ac);
  local_4._0_1_ = 0x18;
  uVar2 = FUN_005ae390(local_9c,s_NrOfKeyItems_0069c580);
  local_4 = CONCAT31(local_4._1_3_,0x19);
  local_100 = FUN_005ac9d0(uVar2,param_2,0,local_100,0);
  iVar5 = *(int *)(local_100 + 100);
  if (*(int *)(local_100 + 100) == -0x80000000) {
    puVar4 = *(undefined1 **)(local_100 + 0x18);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_0064a3b4;
    }
    iVar5 = FUN_0060af10(puVar4);
    *(int *)(local_100 + 100) = iVar5;
  }
  local_100 = iVar5;
  FUN_005acca0();
  local_4._0_1_ = 0x18;
  FUN_004040a0(1);
  local_4 = CONCAT31(local_4._1_3_,0x17);
  FUN_004040a0(1);
  local_f8 = 0;
  if (0 < local_100) {
    do {
      uVar2 = FUN_00436f90(local_88);
      local_4._0_1_ = 0x1a;
      local_f4 = (char *)FUN_005ae390(local_ac,&DAT_006b3f70);
      local_4._0_1_ = 0x1b;
      local_f8 = local_f8 + 1;
      uVar3 = FUN_005ae390(local_9c,s_KeyItem_d_0069c574,local_f8);
      local_4._0_1_ = 0x1c;
      iVar5 = FUN_005acbc0(uVar3,param_2,local_f4,uVar2,0);
      local_cc[0] = *(undefined1 *)(iVar5 + 0x14);
      local_4._0_1_ = 0x1d;
      FUN_004040a0(0);
      FUN_0040cc00(iVar5 + 0x14,0,0xffffffff);
      local_dc[0] = local_cc[0];
      local_4._0_1_ = 0x1e;
      FUN_004040a0(0);
      FUN_0040cc00(local_cc,0,0xffffffff);
      local_4._0_1_ = 0x24;
      FUN_004040a0(1);
      local_4._0_1_ = 0x23;
      FUN_005acca0();
      local_4._0_1_ = 0x22;
      FUN_004040a0(1);
      local_4._0_1_ = 0x21;
      FUN_004040a0(1);
      local_4._0_1_ = 0x20;
      FUN_004040a0(1);
      if (*(char *)(param_1 + 0x60) != '\0') {
        local_ec[0] = local_101;
        FUN_004040a0(0);
        uVar7 = 0xffffffff;
        pcVar8 = &DAT_006b3f70;
        do {
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
        local_4._0_1_ = 0x25;
        pcVar6 = (code *)FUN_005a07f0(s__GetIsLocked___00695180,
                                      s___AdamSource_DaviSortedList_h_00690798,0x49,local_ec);
        (*pcVar6)();
        local_4._0_1_ = 0x20;
        FUN_004040a0(1);
      }
      iVar5 = FUN_004f3390(local_dc,&local_101);
      if (local_101 != '\0') {
        FUN_00409810(&DAT_006b3f70,&uStack_ed);
        local_4._0_1_ = 0x26;
        pcVar6 = (code *)FUN_005a07f0(s___exist_00695178,s___AdamSource_DaviSortedList_h_00690798,
                                      0x4b,local_bc);
        (*pcVar6)();
        local_4._0_1_ = 0x20;
        FUN_004040a0(1);
      }
      FUN_00442bf0(iVar5 * 0x10 + param_1[0x5b],local_dc);
      local_4 = CONCAT31(local_4._1_3_,0x17);
      FUN_004040a0(1);
    } while (local_f8 < local_100);
  }
  local_f8 = 0;
  do {
    local_f4 = operator_new(0x6c);
    local_4._0_1_ = 0x27;
    if (local_f4 == (char *)0x0) {
      local_100 = 0;
    }
    else {
      uVar2 = FUN_0043b0a0(local_dc);
      local_fc = local_fc | 1;
      local_4 = CONCAT31(local_4._1_3_,0x28);
      uVar3 = FUN_005ae390(local_ec,s_HasKeyItem_d_0069c564,local_f8 + 1);
      local_fc = local_fc | 2;
      local_4 = 0x29;
      local_100 = FUN_005ac9d0(uVar3,param_2,0,uVar2,0);
    }
    local_4 = 0x2b;
    FUN_0053cff0(param_1[99],1,&local_100);
    if ((local_fc & 2) != 0) {
      local_fc = local_fc & 0xfffffffd;
      if (iStack_e8 != 0) {
        cVar1 = *(char *)(iStack_e8 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_e8 + -1));
        }
        else {
          *(char *)(iStack_e8 + -1) = cVar1 + -1;
        }
      }
      iStack_e8 = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
    }
    local_4 = 0x17;
    if ((local_fc & 1) != 0) {
      local_fc = local_fc & 0xfffffffe;
      if (iStack_d8 != 0) {
        cVar1 = *(char *)(iStack_d8 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_d8 + -1));
        }
        else {
          *(char *)(iStack_d8 + -1) = cVar1 + -1;
        }
      }
      iStack_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = 0;
    }
    local_f8 = local_f8 + 1;
  } while (local_f8 < 5);
  ExceptionList = pvStack_c;
  return param_1;
}

