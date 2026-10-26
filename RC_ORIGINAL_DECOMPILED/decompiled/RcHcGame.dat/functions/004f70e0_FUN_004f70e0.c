/*
 * FUN_004f70e0 at 004f70e0
 * undefined FUN_004f70e0(void)
 * Address ranges: 004f70e0-004f7784
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f70e0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  DWORD DVar5;
  int iVar6;
  undefined1 *puVar7;
  DWORD DVar8;
  code *pcVar9;
  uint uVar10;
  char *pcVar11;
  int local_1d0;
  int local_1cc;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  int local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined1 local_194 [16];
  undefined1 local_184 [4];
  int iStack_180;
  undefined1 *local_170;
  undefined1 local_164 [16];
  undefined1 local_154 [16];
  undefined1 local_144 [16];
  undefined1 local_134 [16];
  undefined1 local_124 [20];
  char local_110 [260];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634d90;
  pvStack_c = ExceptionList;
  local_1cc = 0;
  ExceptionList = &pvStack_c;
  FUN_004040a0(0);
  local_4 = 0;
  FUN_004040a0(0);
  local_4._0_1_ = 1;
  FUN_00515ff0();
  iVar2 = FUN_004337e0();
  if (iVar2 != 0) {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_1c8,s_CAdamSubLevel__CheckActorFiles____0069cac0,puVar3);
    local_4._0_1_ = 2;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
  }
  uVar4 = FUN_005a3150(local_1c8,param_1);
  local_4._0_1_ = 3;
  FUN_0040cc00(uVar4,0,0xffffffff);
  local_4._0_1_ = 1;
  FUN_004040a0();
  uVar10 = 0xffffffff;
  pcVar11 = &DAT_0069c9ac;
  do {
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(&DAT_0069c9ac,~uVar10 - 1);
  DVar5 = timeGetTime();
  puVar3 = local_170;
  if (local_170 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  local_1a8 = FUN_0060b47d(puVar3,local_124);
  if (local_1a8 != -1) {
    do {
      FUN_004040a0();
      local_4._0_1_ = 4;
      FUN_004040a0();
      local_4._0_1_ = 5;
      FUN_004040a0();
      uVar10 = 0xffffffff;
      local_1cc = local_1cc + 1;
      pcVar11 = local_110;
      do {
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar11 + 1;
      } while (cVar1 != '\0');
      local_4._0_1_ = 6;
      FUN_004040f0(local_110,~uVar10 - 1);
      FUN_005b1140(local_1b8,0,0,local_194);
      FUN_00515ff0();
      iVar2 = FUN_004337e0();
      if (iVar2 != 0) {
        uVar4 = FUN_005ae390(local_164,s_Processing_INI_file__s_INI_0069caa4);
        local_4._0_1_ = 7;
        FUN_005aff00(uVar4);
        local_4._0_1_ = 6;
        FUN_004040a0();
      }
      FUN_005b0ff0(local_1c8,0,0,local_194);
      iVar2 = FUN_004a1c80(local_1c8);
      if (*(char *)(iVar2 + 0x60) == '\0') {
        uVar4 = FUN_005ae390(local_184,s_CAdamSubLevel__CheckActorFiles___0069c9fc);
        local_4._0_1_ = 0xb;
        FUN_004c4410(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x455,uVar4);
LAB_004f748d:
        local_4._0_1_ = 6;
        FUN_004040a0();
      }
      else {
        FUN_00515ff0();
        iVar6 = FUN_004337e0();
        if (iVar6 != 0) {
          uVar4 = FUN_005ae390(local_144,s_Preload__s_0069ca94);
          local_4._0_1_ = 8;
          FUN_005aff00(uVar4);
          local_4._0_1_ = 6;
          FUN_004040a0();
        }
        cVar1 = FUN_004f6e60();
        if (cVar1 == '\0') {
          iVar6 = FUN_005ae390(local_154,s__s_INI_0069ca8c);
          local_4._0_1_ = 9;
          puVar3 = &DAT_0064a3b4;
          if (*(undefined1 **)(iVar6 + 4) != (undefined1 *)0x0) {
            puVar3 = *(undefined1 **)(iVar6 + 4);
          }
          puVar7 = *(undefined1 **)(iVar2 + 0xf8);
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = &DAT_0064a3b4;
          }
          FUN_005ae390(local_134,s_PreLoadActorByFileName___s___fai_0069ca40,puVar7,puVar3);
          local_4._0_1_ = 10;
          FUN_004fc400();
          local_4._0_1_ = 9;
          FUN_004040a0();
          goto LAB_004f748d;
        }
      }
      local_4._0_1_ = 5;
      FUN_004040a0();
      local_4._0_1_ = 4;
      FUN_004040a0();
      local_4._0_1_ = 1;
      FUN_004040a0();
      iVar2 = FUN_0060b547(local_1a8);
    } while (iVar2 == 0);
  }
  iVar6 = FUN_00515ff0();
  iVar2 = *(int *)(iVar6 + 100);
  if (iVar2 == -0x80000000) {
    iVar2 = FUN_0060af10();
    *(int *)(iVar6 + 100) = iVar2;
  }
  if (iVar2 != 0) {
    DVar8 = timeGetTime();
    if ((DVar8 == 0xffffffff) || (DVar5 == 0xffffffff)) {
      local_1d0 = 0;
    }
    else {
      if ((int)DVar8 < (int)DVar5) {
        FUN_004040a0();
        uVar10 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
        local_4._0_1_ = 0xc;
        pcVar9 = (code *)FUN_005a07f0(s_a_Now_>__a_Then_006934d0,s___AdamSource_AdamClock_h_0068e22c
                                      ,0x7d,local_1c8);
        (*pcVar9)();
        local_4._0_1_ = 1;
        FUN_004040a0();
      }
      local_1d0 = DVar8 - DVar5;
      if (local_1d0 == -1) {
        FUN_004040a0();
        uVar10 = 0xffffffff;
        pcVar11 = &DAT_006b3f70;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar1 = *pcVar11;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar10 - 1);
        local_4._0_1_ = 0xd;
        pcVar9 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                      s___AdamSource_AdamClock_h_0068e22c,0x8a,local_1b8);
        (*pcVar9)();
        local_4._0_1_ = 1;
        FUN_004040a0();
      }
    }
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_184,s_Processing__d_INI_files___s__too_0069c9cc,local_1cc,puVar3,
                         (double)((float)local_1d0 * 0.001));
    local_4._0_1_ = 0xe;
    FUN_005aff00(uVar4);
    local_4._0_1_ = 1;
    if (iStack_180 != 0) {
      cVar1 = *(char *)(iStack_180 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0();
      }
      else {
        *(char *)(iStack_180 + -1) = cVar1 + -1;
      }
    }
  }
  if (local_1cc == 0) {
    puVar3 = *(undefined1 **)(param_1 + 4);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    uVar4 = FUN_005ae390(local_184,s_No_files_matched___s__0069c9b4,puVar3);
    local_4._0_1_ = 0xf;
    FUN_004c4410(s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x467,uVar4);
    if (iStack_180 != 0) {
      cVar1 = *(char *)(iStack_180 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)(iStack_180 + -1));
      }
      else {
        *(char *)(iStack_180 + -1) = cVar1 + -1;
      }
    }
  }
  if (iStack_1a0 != 0) {
    cVar1 = *(char *)(iStack_1a0 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iStack_1a0 + -1);
    }
    else {
      *(char *)(iStack_1a0 + -1) = cVar1 + -1;
    }
  }
  iStack_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  if (local_170 != (undefined1 *)0x0) {
    cVar1 = local_170[-1];
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      local_170[-1] = cVar1 + -1;
      ExceptionList = pvStack_c;
      return;
    }
    FUN_005fe5f0(local_170 + -1);
  }
  ExceptionList = pvStack_c;
  return;
}

