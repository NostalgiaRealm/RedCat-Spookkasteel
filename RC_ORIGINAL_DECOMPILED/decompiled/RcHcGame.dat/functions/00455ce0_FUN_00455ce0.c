/*
 * FUN_00455ce0 at 00455ce0
 * undefined FUN_00455ce0(void)
 * Address ranges: 00455ce0-00456860
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00455ce0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined1 local_3e9;
  int local_3e8;
  int local_3e4;
  undefined1 local_3dd;
  undefined1 local_3dc [4];
  char *local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined1 local_3cc [4];
  int local_3c8;
  int local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined1 local_3b8 [4];
  char *local_3b4;
  undefined1 local_3a8 [4];
  int local_3a4;
  int local_3a0;
  undefined1 local_398 [4];
  undefined4 *local_394;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [556];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00626a72;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  local_3cc[0] = local_3e9;
  local_4 = 0;
  FUN_004040a0(0);
  local_4._0_1_ = 1;
  local_3e8 = 0;
  do {
    iVar3 = local_3e8;
    pcVar7 = *(char **)(local_3e4 + 0x18);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    local_2a8[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
    local_4._0_1_ = 2;
    iVar2 = FUN_005ae390(local_278,s_Icon_d_00691ca4,iVar3);
    pcVar7 = *(char **)(iVar2 + 4);
    local_4._0_1_ = 3;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    local_338[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
    local_4._0_1_ = 4;
    local_2c8[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_00691c9c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_00691c9c,~uVar5 - 1);
    local_4._0_1_ = 5;
    iVar2 = FUN_005acaf0(local_2c8,local_338,&DAT_006b3f70,local_2a8,0);
    local_388[0] = *(undefined1 *)(iVar2 + 0x14);
    local_4._0_1_ = 6;
    FUN_004040a0(0);
    FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
    local_4._0_1_ = 7;
    local_2f8[0] = local_388[0];
    FUN_004040a0(0);
    FUN_0040cc00(local_388,0,0xffffffff);
    local_4._0_1_ = 8;
    FUN_0040cc00(local_2f8,0,0xffffffff);
    local_4._0_1_ = 7;
    FUN_004040a0(1);
    local_4._0_1_ = 6;
    FUN_004040a0(1);
    local_4._0_1_ = 5;
    FUN_005acca0();
    local_4._0_1_ = 4;
    FUN_004040a0(1);
    local_4._0_1_ = 3;
    FUN_004040a0(1);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    pcVar7 = "";
    if (*(char **)(local_3e4 + 0x18) != (char *)0x0) {
      pcVar7 = *(char **)(local_3e4 + 0x18);
    }
    local_2b8[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
    local_4._0_1_ = 9;
    iVar2 = FUN_005ae390(local_248,s_Icon_d_00691ca4,iVar3);
    pcVar7 = *(char **)(iVar2 + 4);
    local_4._0_1_ = 10;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    local_368[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
    local_4._0_1_ = 0xb;
    local_288[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_00691c94;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_00691c94,~uVar5 - 1);
    local_4._0_1_ = 0xc;
    iVar2 = FUN_005acaf0(local_288,local_368,&DAT_006b3f70,local_2b8,0);
    local_378[0] = *(undefined1 *)(iVar2 + 0x14);
    local_4._0_1_ = 0xd;
    FUN_004040a0(0);
    FUN_0040cc00(iVar2 + 0x14,0,0xffffffff);
    local_4._0_1_ = 0xe;
    local_318[0] = local_378[0];
    FUN_004040a0(0);
    FUN_0040cc00(local_378,0,0xffffffff);
    local_4._0_1_ = 0xf;
    FUN_0040cc00(local_318,0,0xffffffff);
    local_4._0_1_ = 0xe;
    FUN_004040a0(1);
    local_4._0_1_ = 0xd;
    FUN_004040a0(1);
    local_4._0_1_ = 0xc;
    FUN_005acca0();
    local_4._0_1_ = 0xb;
    FUN_004040a0(1);
    local_4._0_1_ = 10;
    FUN_004040a0(1);
    local_4._0_1_ = 9;
    FUN_004040a0(1);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    if ((local_3a0 == 0) || (local_3c4 == 0)) {
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
      local_4 = 0xffffffff;
      FUN_004040a0(1);
      ExceptionList = local_c;
      return;
    }
    pcVar7 = *(char **)(local_3e4 + 0x18);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    local_308[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
    local_4._0_1_ = 0x10;
    iVar3 = FUN_005ae390(local_268,s_Icon_d_00691ca4,iVar3);
    pcVar7 = *(char **)(iVar3 + 4);
    local_4._0_1_ = 0x11;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    local_298[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(pcVar7,~uVar5 - 1);
    local_4._0_1_ = 0x12;
    local_2d8[0] = local_3e9;
    FUN_004040a0(0);
    uVar5 = 0xffffffff;
    pcVar7 = s_Disable_00691c8c;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(s_Disable_00691c8c,~uVar5 - 1);
    local_4._0_1_ = 0x13;
    FUN_005ac9d0(local_2d8,local_298,0,local_308,0);
    local_4._0_1_ = 0x14;
    iVar2 = FUN_004337e0();
    local_4._0_1_ = 0x13;
    FUN_005acca0();
    local_4._0_1_ = 0x12;
    FUN_004040a0(1);
    local_4._0_1_ = 0x11;
    FUN_004040a0(1);
    local_4._0_1_ = 0x10;
    FUN_004040a0(1);
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    iVar3 = local_3e4;
    if (iVar2 == 0) {
      pcVar7 = *(char **)(local_3e4 + 0x18);
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "";
      }
      local_348[0] = local_3e9;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(pcVar7,~uVar5 - 1);
      local_4._0_1_ = 0x15;
      iVar2 = FUN_005ae390(local_258,s_Icon_d_00691ca4,local_3e8);
      pcVar7 = *(char **)(iVar2 + 4);
      local_4._0_1_ = 0x16;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = "";
      }
      local_358[0] = local_3e9;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(pcVar7,~uVar5 - 1);
      local_4._0_1_ = 0x17;
      local_2e8[0] = local_3e9;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_00691c88;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_00691c88,~uVar5 - 1);
      local_4._0_1_ = 0x18;
      iVar2 = FUN_005acaf0(local_2e8,local_358,&DAT_006b3f70,local_348,0);
      local_4._0_1_ = 0x19;
      if (*(float *)(iVar2 + 0x60) == 0.0) {
        fVar11 = (float10)FUN_005ad390(iVar2 + 0x14,&local_3e9);
        *(float *)(iVar2 + 0x60) = (float)fVar11;
      }
      local_328 = __ftol();
      local_4._0_1_ = 0x18;
      FUN_005acca0();
      local_4._0_1_ = 0x17;
      FUN_004040a0(1);
      local_4._0_1_ = 0x16;
      FUN_004040a0(1);
      local_4._0_1_ = 0x15;
      FUN_004040a0(1);
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_004040a0(1);
      pcVar7 = "";
      if (*(char **)(iVar3 + 0x18) != (char *)0x0) {
        pcVar7 = *(char **)(iVar3 + 0x18);
      }
      local_3dc[0] = local_3e9;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        pcVar9 = local_3d8;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_00404190(uVar5);
      }
      local_4._0_1_ = 0x1a;
      iVar3 = FUN_005ae390(local_238,s_Icon_d_00691ca4,local_3e8);
      local_4 = CONCAT31(local_4._1_3_,0x1b);
      pcVar7 = "";
      if (*(char **)(iVar3 + 4) != (char *)0x0) {
        pcVar7 = *(char **)(iVar3 + 4);
      }
      local_3b8[0] = local_3e9;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        pcVar9 = local_3b4;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar9 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar9 = pcVar9 + 1;
        }
        FUN_00404190(uVar5);
      }
      local_4 = CONCAT31(local_4._1_3_,0x1c);
      local_398[0] = local_3e9;
      FUN_004040a0(0);
      uVar5 = 0xffffffff;
      pcVar7 = (char *)&DAT_00691c84;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5 - 1;
      cVar1 = FUN_00401940(uVar5,1);
      if (cVar1 != '\0') {
        puVar8 = &DAT_00691c84;
        puVar10 = local_394;
        for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
          puVar8 = (undefined4 *)((int)puVar8 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        FUN_00404190(uVar5);
      }
      local_4._0_1_ = 0x1d;
      iVar3 = FUN_005acaf0(local_398,local_3b8,&DAT_006b3f70,local_3dc,0);
      local_4._0_1_ = 0x1e;
      if (*(float *)(iVar3 + 0x60) == 0.0) {
        fVar11 = (float10)FUN_005ad390(iVar3 + 0x14,&local_3dd);
        *(float *)(iVar3 + 0x60) = (float)fVar11;
      }
      local_320 = __ftol();
      local_4._0_1_ = 0x1d;
      FUN_005acca0();
      local_4._0_1_ = 0x1c;
      FUN_004040a0(1);
      local_4._0_1_ = 0x1b;
      FUN_004040a0(1);
      local_4._0_1_ = 0x1a;
      FUN_004040a0(1);
      local_4._0_1_ = 1;
      if (local_3d8 != (char *)0x0) {
        cVar1 = local_3d8[-1];
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_3d8 + -1);
        }
        else {
          local_3d8[-1] = cVar1 + -1;
        }
      }
      iVar3 = local_3e4;
      puVar8 = &local_328;
      local_3d8 = (char *)0x0;
      local_3d4 = 0;
      local_3d0 = 0;
      local_324 = 0;
      local_31c = 0;
      uVar4 = FUN_00456870(local_3cc);
      local_3bc = FUN_00453f00(local_3a8,uVar4,puVar8);
      FUN_0053cff0(*(undefined4 *)(iVar3 + 0x3c),1,&local_3bc);
    }
    local_3e8 = local_3e8 + 1;
    if (0xf < local_3e8) {
      if (local_3c8 != 0) {
        cVar1 = *(char *)(local_3c8 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_3c8 + -1);
        }
        else {
          *(char *)(local_3c8 + -1) = cVar1 + -1;
        }
      }
      local_3c8 = 0;
      local_3c4 = 0;
      local_3c0 = 0;
      if (local_3a4 != 0) {
        cVar1 = *(char *)(local_3a4 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0(local_3a4 + -1);
        }
        else {
          *(char *)(local_3a4 + -1) = cVar1 + -1;
        }
      }
      ExceptionList = local_c;
      return;
    }
  } while( true );
}

