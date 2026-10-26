/*
 * FUN_0049fa20 at 0049fa20
 * undefined FUN_0049fa20(void)
 * Address ranges: 0049fa20-0049fd97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x0049fc2b) */
/* WARNING: Removing unreachable block (ram,0x0049fc2e) */
/* WARNING: Removing unreachable block (ram,0x0049fc47) */

void __fastcall FUN_0049fa20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_45;
  int local_44;
  undefined1 local_3c [16];
  undefined1 local_2c [4];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [16];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062cd98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_0064e854;
  local_4 = 0;
  FUN_00515ff0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    DVar3 = timeGetTime();
    local_44 = param_1[5];
    if ((DVar3 == 0xffffffff) || (local_44 == -1)) {
      local_44 = 0;
    }
    else {
      if ((int)DVar3 < local_44) {
        FUN_004040a0();
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
        pcVar4 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_3c);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
      }
      local_44 = DVar3 - local_44;
      if (local_44 == -1) {
        FUN_004040a0();
        uVar9 = 0xffffffff;
        pcVar10 = &DAT_006b3f70;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
        local_4._0_1_ = 2;
        pcVar4 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_2c);
        (*pcVar4)();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0();
      }
    }
    if ((DAT_00710381 & 1) == 0) {
      DAT_00710381 = DAT_00710381 | 1;
      DAT_00710390 = local_45;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar10 = s_No_Description_006951d4;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_No_Description_006951d4,~uVar9 - 1);
      FUN_0060a57b();
    }
    iVar5 = FUN_00442d80();
    iVar2 = DAT_006b993c;
    if (iVar5 == 0) {
      puVar6 = &DAT_00710390;
    }
    else {
      iVar5 = FUN_00442d80();
      puVar6 = (undefined *)(iVar5 * 0x10 + -0x10 + iVar2);
    }
    puVar7 = *(undefined1 **)(puVar6 + 4);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    uVar8 = FUN_005ae390(auStack_1c,s_CAdamLoadUpdater____s__took__f_s_006951fc,puVar7,
                         (double)((float)local_44 * 0.001));
    local_4._0_1_ = 3;
    FUN_005aff00(uVar8);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0();
  }
  FUN_00442da0(DAT_006b9940 + -0x10,DAT_006b9940);
  DAT_006b9940 = DAT_006b9940 + -0x10;
  FUN_0051c180();
  iVar5 = FUN_00515ff0();
  iVar2 = *(int *)(iVar5 + 100);
  if (iVar2 == -0x80000000) {
    iVar2 = FUN_0060af10();
    *(int *)(iVar5 + 100) = iVar2;
  }
  if (iVar2 != 0) {
    if ((DAT_00710381 & 1) == 0) {
      DAT_00710381 = DAT_00710381 | 1;
      DAT_00710390 = local_45;
      FUN_004040a0();
      uVar9 = 0xffffffff;
      pcVar10 = s_No_Description_006951d4;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(s_No_Description_006951d4,~uVar9 - 1);
      FUN_0060a57b();
    }
    iVar5 = FUN_00442d80();
    iVar2 = DAT_006b993c;
    if (iVar5 == 0) {
      puVar6 = &DAT_00710390;
    }
    else {
      iVar5 = FUN_00442d80();
      puVar6 = (undefined *)(iVar5 * 0x10 + -0x10 + iVar2);
    }
    puVar7 = *(undefined1 **)(puVar6 + 4);
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &DAT_0064a3b4;
    }
    uVar8 = FUN_005ae390(local_2c,s_CAdamLoadUpdater_<<__s_006951e4,puVar7);
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_005aff00(uVar8);
    if (iStack_28 != 0) {
      cVar1 = *(char *)(iStack_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_28 + -1) = cVar1 + -1;
      }
    }
    iStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
  }
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = pvStack_c;
  return;
}

