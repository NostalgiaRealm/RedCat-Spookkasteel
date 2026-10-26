/*
 * FUN_005476a0 at 005476a0
 * undefined FUN_005476a0(void)
 * Address ranges: 005476a0-0054886d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00548788) */

undefined1 * FUN_005476a0(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_4c [4];
  undefined4 *local_48;
  uint local_44;
  undefined4 local_40;
  undefined1 local_3c [4];
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [16];
  undefined1 local_1c [4];
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063d3c8;
  local_c = ExceptionList;
  local_4c[0] = *param_2;
  ExceptionList = &local_c;
  FUN_004040a0(0);
  FUN_0040cc00(param_2,0,0xffffffff);
  local_4 = 0;
  uVar2 = FUN_005ae390(local_3c,s_Space_0069b04c);
  local_4._0_1_ = 1;
  iVar3 = FUN_00484b80(uVar2);
  local_4._0_1_ = 0;
  FUN_004040a0(1);
  if (iVar3 == 0) {
    local_3c[0] = iVar3 == 0;
    FUN_004040a0(0);
    uVar6 = 0xffffffff;
    pcVar9 = &DAT_006b3f70;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
    local_4._0_1_ = 2;
    uVar2 = FUN_004e5980(local_2c,0x3e,local_3c,0);
    local_4._0_1_ = 3;
    FUN_0040cc00(uVar2,0,0xffffffff);
    local_4._0_1_ = 2;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
  }
  else {
    uVar2 = FUN_005ae390(local_2c,&DAT_006a1380);
    local_4._0_1_ = 4;
    iVar3 = FUN_00484b80(uVar2);
    local_4._0_1_ = 0;
    FUN_004040a0(1);
    if (iVar3 == 0) {
      local_3c[0] = iVar3 == 0;
      FUN_004040a0(0);
      uVar6 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
      local_4._0_1_ = 5;
      uVar2 = FUN_004e5980(local_2c,0x3f,local_3c,0);
      local_4._0_1_ = 6;
      FUN_0040cc00(uVar2,0,0xffffffff);
      local_4._0_1_ = 5;
      FUN_004040a0(1);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_004040a0(1);
    }
    else {
      uVar2 = FUN_005ae390(local_2c,&DAT_0069b028);
      local_4._0_1_ = 7;
      iVar3 = FUN_00484b80(uVar2);
      local_4._0_1_ = 0;
      FUN_004040a0(1);
      if (iVar3 == 0) {
        local_3c[0] = iVar3 == 0;
        FUN_004040a0(0);
        uVar6 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
        local_4._0_1_ = 8;
        uVar2 = FUN_004e5980(local_2c,0x42,local_3c,0);
        local_4._0_1_ = 9;
        FUN_0040cc00(uVar2,0,0xffffffff);
        local_4._0_1_ = 8;
        FUN_004040a0(1);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_004040a0(1);
      }
      else {
        uVar2 = FUN_005ae390(local_2c,s_Right_006a1378);
        local_4._0_1_ = 10;
        iVar3 = FUN_00484b80(uVar2);
        local_4._0_1_ = 0;
        FUN_004040a0(1);
        if (iVar3 == 0) {
          local_3c[0] = iVar3 == 0;
          FUN_004040a0(0);
          uVar6 = 0xffffffff;
          pcVar9 = &DAT_006b3f70;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
          local_4._0_1_ = 0xb;
          uVar2 = FUN_004e5980(local_2c,0x41,local_3c,0);
          local_4._0_1_ = 0xc;
          FUN_0040cc00(uVar2,0,0xffffffff);
          local_4._0_1_ = 0xb;
          FUN_004040a0(1);
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        else {
          uVar2 = FUN_005ae390(local_2c,&DAT_0069b020);
          local_4._0_1_ = 0xd;
          iVar3 = FUN_00484b80(uVar2);
          local_4._0_1_ = 0;
          FUN_004040a0(1);
          if (iVar3 == 0) {
            local_3c[0] = iVar3 == 0;
            FUN_004040a0(0);
            uVar6 = 0xffffffff;
            pcVar9 = &DAT_006b3f70;
            do {
              if (uVar6 == 0) break;
              uVar6 = uVar6 - 1;
              cVar1 = *pcVar9;
              pcVar9 = pcVar9 + 1;
            } while (cVar1 != '\0');
            FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
            local_4._0_1_ = 0xe;
            uVar2 = FUN_004e5980(local_2c,0x43,local_3c,0);
            local_4._0_1_ = 0xf;
            FUN_0040cc00(uVar2,0,0xffffffff);
            local_4._0_1_ = 0xe;
            FUN_004040a0(1);
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_004040a0(1);
          }
          else {
            uVar2 = FUN_005ae390(local_2c,s_Quote_0069b018);
            local_4._0_1_ = 0x10;
            iVar3 = FUN_00484b80(uVar2);
            local_4._0_1_ = 0;
            FUN_004040a0(1);
            if (iVar3 == 0) {
              local_3c[0] = iVar3 == 0;
              FUN_004040a0(0);
              uVar6 = 0xffffffff;
              pcVar9 = &DAT_006b3f70;
              do {
                if (uVar6 == 0) break;
                uVar6 = uVar6 - 1;
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
              local_4._0_1_ = 0x11;
              uVar2 = FUN_004e5980(local_2c,0x44,local_3c,0);
              local_4._0_1_ = 0x12;
              FUN_0040cc00(uVar2,0,0xffffffff);
              local_4._0_1_ = 0x11;
              FUN_004040a0(1);
              local_4 = (uint)local_4._1_3_ << 8;
              FUN_004040a0(1);
            }
            else {
              iVar3 = FUN_005ae390(local_2c,&DAT_0069b010);
              puVar4 = *(undefined1 **)(iVar3 + 4);
              local_4._0_1_ = 0x13;
              if (puVar4 == (undefined1 *)0x0) {
                puVar4 = &DAT_0064a3b4;
              }
              iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,*(undefined4 *)(iVar3 + 8))
              ;
              local_4._0_1_ = 0;
              FUN_004040a0(1);
              if (iVar3 == 0) {
                local_3c[0] = iVar3 == 0;
                FUN_004040a0(0);
                uVar6 = 0xffffffff;
                pcVar9 = &DAT_006b3f70;
                do {
                  if (uVar6 == 0) break;
                  uVar6 = uVar6 - 1;
                  cVar1 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar1 != '\0');
                FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
                local_4._0_1_ = 0x14;
                uVar2 = FUN_004e5980(local_2c,0x45,local_3c,0);
                local_4._0_1_ = 0x15;
                FUN_0040cc00(uVar2,0,0xffffffff);
                local_4._0_1_ = 0x14;
                FUN_004040a0(1);
                local_4 = (uint)local_4._1_3_ << 8;
                FUN_004040a0(1);
              }
              else {
                iVar3 = FUN_005ae390(local_2c,s_Comma_0069b008);
                puVar4 = *(undefined1 **)(iVar3 + 4);
                local_4._0_1_ = 0x16;
                if (puVar4 == (undefined1 *)0x0) {
                  puVar4 = &DAT_0064a3b4;
                }
                iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                     *(undefined4 *)(iVar3 + 8));
                local_4._0_1_ = 0;
                FUN_004040a0(1);
                if (iVar3 == 0) {
                  local_3c[0] = iVar3 == 0;
                  FUN_004040a0(0);
                  uVar6 = 0xffffffff;
                  pcVar9 = &DAT_006b3f70;
                  do {
                    if (uVar6 == 0) break;
                    uVar6 = uVar6 - 1;
                    cVar1 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar1 != '\0');
                  FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
                  local_4._0_1_ = 0x17;
                  uVar2 = FUN_004e5980(local_2c,0x46,local_3c,0);
                  local_4._0_1_ = 0x18;
                  FUN_0040cc00(uVar2,0,0xffffffff);
                  local_4._0_1_ = 0x17;
                  FUN_004040a0(1);
                  local_4 = (uint)local_4._1_3_ << 8;
                  FUN_004040a0(1);
                }
                else {
                  iVar3 = FUN_005ae390(local_2c,s_Minus_0069b000);
                  puVar4 = *(undefined1 **)(iVar3 + 4);
                  local_4._0_1_ = 0x19;
                  if (puVar4 == (undefined1 *)0x0) {
                    puVar4 = &DAT_0064a3b4;
                  }
                  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                       *(undefined4 *)(iVar3 + 8));
                  local_4._0_1_ = 0;
                  FUN_004040a0(1);
                  if (iVar3 == 0) {
                    local_3c[0] = iVar3 == 0;
                    FUN_004040a0(0);
                    uVar6 = 0xffffffff;
                    pcVar9 = &DAT_006b3f70;
                    do {
                      if (uVar6 == 0) break;
                      uVar6 = uVar6 - 1;
                      cVar1 = *pcVar9;
                      pcVar9 = pcVar9 + 1;
                    } while (cVar1 != '\0');
                    FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
                    local_4._0_1_ = 0x1a;
                    uVar2 = FUN_004e5980(local_2c,0x47,local_3c,0);
                    local_4._0_1_ = 0x1b;
                    FUN_0040cc00(uVar2,0,0xffffffff);
                    local_4._0_1_ = 0x1a;
                    FUN_004040a0(1);
                    local_4 = (uint)local_4._1_3_ << 8;
                    FUN_004040a0(1);
                  }
                  else {
                    iVar3 = FUN_005ae390(local_2c,s_Period_0069aff8);
                    puVar4 = *(undefined1 **)(iVar3 + 4);
                    local_4._0_1_ = 0x1c;
                    if (puVar4 == (undefined1 *)0x0) {
                      puVar4 = &DAT_0064a3b4;
                    }
                    iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                         *(undefined4 *)(iVar3 + 8));
                    local_4._0_1_ = 0;
                    FUN_004040a0(1);
                    if (iVar3 == 0) {
                      local_3c[0] = iVar3 == 0;
                      FUN_004040a0(0);
                      uVar6 = 0xffffffff;
                      pcVar9 = &DAT_006b3f70;
                      do {
                        if (uVar6 == 0) break;
                        uVar6 = uVar6 - 1;
                        cVar1 = *pcVar9;
                        pcVar9 = pcVar9 + 1;
                      } while (cVar1 != '\0');
                      FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
                      local_4._0_1_ = 0x1d;
                      uVar2 = FUN_004e5980(local_2c,0x48,local_3c,0);
                      local_4._0_1_ = 0x1e;
                      FUN_0040cc00(uVar2,0,0xffffffff);
                      local_4._0_1_ = 0x1d;
                      FUN_004040a0(1);
                      local_4 = (uint)local_4._1_3_ << 8;
                      FUN_004040a0(1);
                    }
                    else {
                      iVar3 = FUN_005ae390(local_2c,s_LeftMouse_006a13a8);
                      puVar4 = *(undefined1 **)(iVar3 + 4);
                      local_4._0_1_ = 0x1f;
                      if (puVar4 == (undefined1 *)0x0) {
                        puVar4 = &DAT_0064a3b4;
                      }
                      iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                           *(undefined4 *)(iVar3 + 8));
                      local_4._0_1_ = 0;
                      FUN_004040a0(1);
                      if (iVar3 == 0) {
                        local_3c[0] = iVar3 == 0;
                        FUN_004040a0(0);
                        uVar6 = 0xffffffff;
                        pcVar9 = &DAT_006b3f70;
                        do {
                          if (uVar6 == 0) break;
                          uVar6 = uVar6 - 1;
                          cVar1 = *pcVar9;
                          pcVar9 = pcVar9 + 1;
                        } while (cVar1 != '\0');
                        FUN_004040f0(&DAT_006b3f70,~uVar6 - 1);
                        local_4._0_1_ = 0x20;
                        uVar2 = FUN_004e5980(local_1c,0x49,local_3c,0);
                        local_4._0_1_ = 0x21;
                        uVar2 = FUN_004e5980(local_2c,0x3f,uVar2,0);
                        local_4._0_1_ = 0x22;
                        FUN_0040cc00(uVar2,0,0xffffffff);
                        local_4._0_1_ = 0x21;
                        FUN_004040a0(1);
                        local_4._0_1_ = 0x20;
                        FUN_004040a0(1);
                        local_4 = (uint)local_4._1_3_ << 8;
                        FUN_004040a0(1);
                      }
                      else {
                        iVar3 = FUN_005ae390(local_1c,s_RightMouse_006a1360);
                        puVar4 = *(undefined1 **)(iVar3 + 4);
                        local_4._0_1_ = 0x23;
                        if (puVar4 == (undefined1 *)0x0) {
                          puVar4 = &DAT_0064a3b4;
                        }
                        iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                             *(undefined4 *)(iVar3 + 8));
                        local_4._0_1_ = 0;
                        FUN_004040a0(1);
                        if (iVar3 == 0) {
                          local_3c[0] = iVar3 == 0;
                          FUN_004040a0(0);
                          uVar6 = 0xffffffff;
                          pcVar9 = &DAT_006b3f70;
                          do {
                            if (uVar6 == 0) break;
                            uVar6 = uVar6 - 1;
                            cVar1 = *pcVar9;
                            pcVar9 = pcVar9 + 1;
                          } while (cVar1 != '\0');
                          uVar6 = ~uVar6 - 1;
                          cVar1 = FUN_00401940(uVar6,1);
                          if (cVar1 != '\0') {
                            puVar10 = (undefined4 *)&DAT_006b3f70;
                            puVar12 = local_38;
                            for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                              *puVar12 = *puVar10;
                              puVar10 = puVar10 + 1;
                              puVar12 = puVar12 + 1;
                            }
                            for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                              *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                              puVar10 = (undefined4 *)((int)puVar10 + 1);
                              puVar12 = (undefined4 *)((int)puVar12 + 1);
                            }
                            FUN_00404190(uVar6);
                          }
                          local_4._0_1_ = 0x24;
                          uVar2 = FUN_004e5980(local_2c,0x49,local_3c,0);
                          local_4._0_1_ = 0x25;
                          uVar2 = FUN_004e5980(local_1c,0x41,uVar2,0);
                          local_4._0_1_ = 0x26;
                          FUN_0040cc00(uVar2,0,0xffffffff);
                          local_4._0_1_ = 0x25;
                          FUN_004040a0(1);
                          local_4._0_1_ = 0x24;
                          FUN_004040a0(1);
                          local_4 = (uint)local_4._1_3_ << 8;
                          FUN_004040a0(1);
                        }
                        else {
                          iVar3 = FUN_005ae390(local_1c,s_MiddleMouse_006a14d4);
                          puVar4 = *(undefined1 **)(iVar3 + 4);
                          local_4._0_1_ = 0x27;
                          if (puVar4 == (undefined1 *)0x0) {
                            puVar4 = &DAT_0064a3b4;
                          }
                          iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                               *(undefined4 *)(iVar3 + 8));
                          local_4._0_1_ = 0;
                          FUN_004040a0(1);
                          if (iVar3 == 0) {
                            local_3c[0] = iVar3 == 0;
                            FUN_004040a0(0);
                            uVar6 = 0xffffffff;
                            pcVar9 = &DAT_006b3f70;
                            do {
                              if (uVar6 == 0) break;
                              uVar6 = uVar6 - 1;
                              cVar1 = *pcVar9;
                              pcVar9 = pcVar9 + 1;
                            } while (cVar1 != '\0');
                            uVar6 = ~uVar6 - 1;
                            cVar1 = FUN_00401940(uVar6,1);
                            if (cVar1 != '\0') {
                              puVar10 = (undefined4 *)&DAT_006b3f70;
                              puVar12 = local_38;
                              for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *puVar12 = *puVar10;
                                puVar10 = puVar10 + 1;
                                puVar12 = puVar12 + 1;
                              }
                              for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
                                *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
                                puVar10 = (undefined4 *)((int)puVar10 + 1);
                                puVar12 = (undefined4 *)((int)puVar12 + 1);
                              }
                              FUN_00404190(uVar6);
                            }
                            local_4._0_1_ = 0x28;
                            uVar2 = FUN_004e5980(local_2c,0x49,local_3c,0);
                            local_4._0_1_ = 0x29;
                            uVar2 = FUN_004e5980(local_1c,0x40,uVar2,0);
                            local_4._0_1_ = 0x2a;
                            FUN_0040cc00(uVar2,0,0xffffffff);
                            local_4._0_1_ = 0x29;
                            FUN_004040a0(1);
                            local_4._0_1_ = 0x28;
                            FUN_004040a0(1);
                            local_4 = (uint)local_4._1_3_ << 8;
                            FUN_004040a0(1);
                          }
                          else {
                            iVar3 = FUN_005ae390(local_1c,s_LeftShift_006a158c);
                            puVar4 = *(undefined1 **)(iVar3 + 4);
                            local_4._0_1_ = 0x2b;
                            if (puVar4 == (undefined1 *)0x0) {
                              puVar4 = &DAT_0064a3b4;
                            }
                            iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                                 *(undefined4 *)(iVar3 + 8));
                            local_4._0_1_ = 0;
                            FUN_004040a0(1);
                            if (iVar3 == 0) {
                              uVar2 = FUN_005ae390(local_2c,s_Shift_006a1358);
                              local_4._0_1_ = 0x2c;
                              uVar2 = FUN_004e5980(local_1c,0x3f,uVar2,0);
                              local_4._0_1_ = 0x2d;
                              FUN_0040cc00(uVar2,0,0xffffffff);
                              local_4._0_1_ = 0x2c;
                              FUN_004040a0(1);
                              local_4 = (uint)local_4._1_3_ << 8;
                              FUN_004040a0(1);
                            }
                            else {
                              iVar3 = FUN_005ae390(local_1c,s_RightShift_006a1580);
                              puVar4 = *(undefined1 **)(iVar3 + 4);
                              local_4._0_1_ = 0x2e;
                              if (puVar4 == (undefined1 *)0x0) {
                                puVar4 = &DAT_0064a3b4;
                              }
                              iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                                   *(undefined4 *)(iVar3 + 8));
                              local_4._0_1_ = 0;
                              FUN_004040a0(1);
                              if (iVar3 == 0) {
                                uVar2 = FUN_005ae390(local_2c,s_Shift_006a1358);
                                local_4._0_1_ = 0x2f;
                                uVar2 = FUN_004e5980(local_1c,0x41,uVar2,0);
                                local_4._0_1_ = 0x30;
                                FUN_0040cc00(uVar2,0,0xffffffff);
                                local_4._0_1_ = 0x2f;
                                FUN_004040a0(1);
                                local_4 = (uint)local_4._1_3_ << 8;
                                FUN_004040a0(1);
                              }
                              else {
                                iVar3 = FUN_005ae390(local_1c,s_LeftControl_006a1574);
                                puVar4 = *(undefined1 **)(iVar3 + 4);
                                local_4._0_1_ = 0x31;
                                if (puVar4 == (undefined1 *)0x0) {
                                  puVar4 = &DAT_0064a3b4;
                                }
                                iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                                     *(undefined4 *)(iVar3 + 8));
                                local_4._0_1_ = 0;
                                FUN_004040a0(1);
                                if (iVar3 == 0) {
                                  uVar2 = FUN_005ae390(local_1c,s_Control_006a13a0);
                                  local_4._0_1_ = 0x32;
                                  uVar2 = FUN_004e5980(local_3c,0x3f,uVar2,0);
                                  local_4 = CONCAT31(local_4._1_3_,0x33);
                                  FUN_0040cc00(uVar2,0,0xffffffff);
                                  if (local_38 != (undefined4 *)0x0) {
                                    cVar1 = *(char *)((int)local_38 + -1);
                                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                                      FUN_005fe5f0((char *)((int)local_38 + -1));
                                    }
                                    else {
                                      *(char *)((int)local_38 + -1) = cVar1 + -1;
                                    }
                                  }
                                  local_4 = local_4 & 0xffffff00;
LAB_00548619:
                                  local_30 = 0;
                                  local_34 = 0;
                                  local_38 = (undefined4 *)0x0;
                                  if (local_18 != 0) {
                                    pcVar9 = (char *)(local_18 + -1);
                                    cVar1 = *(char *)(local_18 + -1);
                                    if ((cVar1 == '\0') || (cVar1 == -1)) goto LAB_00548757;
                                    *pcVar9 = cVar1 + -1;
                                  }
                                }
                                else {
                                  iVar3 = FUN_005ae390(local_1c,s_RightControl_006a1564);
                                  puVar4 = *(undefined1 **)(iVar3 + 4);
                                  local_4._0_1_ = 0x34;
                                  if (puVar4 == (undefined1 *)0x0) {
                                    puVar4 = &DAT_0064a3b4;
                                  }
                                  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                                       *(undefined4 *)(iVar3 + 8));
                                  local_4._0_1_ = 0;
                                  if (local_18 != 0) {
                                    cVar1 = *(char *)(local_18 + -1);
                                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                                      FUN_005fe5f0((char *)(local_18 + -1));
                                    }
                                    else {
                                      *(char *)(local_18 + -1) = cVar1 + -1;
                                    }
                                  }
                                  if (iVar3 == 0) {
                                    uVar2 = FUN_005ae390(local_1c,s_Control_006a13a0);
                                    local_4._0_1_ = 0x35;
                                    uVar2 = FUN_004e5980(local_3c,0x41,uVar2,0);
                                    local_4 = CONCAT31(local_4._1_3_,0x36);
                                    FUN_0040cc00(uVar2,0,0xffffffff);
                                    if (local_38 != (undefined4 *)0x0) {
                                      cVar1 = *(char *)((int)local_38 + -1);
                                      if ((cVar1 == '\0') || (cVar1 == -1)) {
                                        FUN_005fe5f0((char *)((int)local_38 + -1));
                                      }
                                      else {
                                        *(char *)((int)local_38 + -1) = cVar1 + -1;
                                      }
                                    }
                                    local_4 = local_4 & 0xffffff00;
                                    goto LAB_00548619;
                                  }
                                  iVar3 = FUN_005ae390(local_1c,s_LeftAlt_006a155c);
                                  puVar4 = *(undefined1 **)(iVar3 + 4);
                                  local_4._0_1_ = 0x37;
                                  if (puVar4 == (undefined1 *)0x0) {
                                    puVar4 = &DAT_0064a3b4;
                                  }
                                  iVar3 = FUN_004251b0(0,*(undefined4 *)(param_2 + 8),puVar4,
                                                       *(undefined4 *)(iVar3 + 8));
                                  local_4._0_1_ = 0;
                                  if (local_18 != 0) {
                                    cVar1 = *(char *)(local_18 + -1);
                                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                                      FUN_005fe5f0((char *)(local_18 + -1));
                                    }
                                    else {
                                      *(char *)(local_18 + -1) = cVar1 + -1;
                                    }
                                  }
                                  if (iVar3 == 0) {
                                    uVar2 = FUN_005ae390(local_1c,&PTR_DAT_006a1654);
                                    local_4._0_1_ = 0x38;
                                    uVar2 = FUN_004e5980(local_3c,0x3f,uVar2,0);
                                    local_4 = CONCAT31(local_4._1_3_,0x39);
                                    FUN_0040cc00(uVar2,0,0xffffffff);
                                    if (local_38 != (undefined4 *)0x0) {
                                      cVar1 = *(char *)((int)local_38 + -1);
                                      if ((cVar1 == '\0') || (cVar1 == -1)) {
                                        FUN_005fe5f0((char *)((int)local_38 + -1));
                                      }
                                      else {
                                        *(char *)((int)local_38 + -1) = cVar1 + -1;
                                      }
                                    }
                                    local_4 = local_4 & 0xffffff00;
                                    goto LAB_00548619;
                                  }
                                  iVar3 = FUN_005ae390(local_1c,s_RightAlt_006a1550);
                                  uVar6 = *(uint *)(iVar3 + 8);
                                  pbVar5 = *(byte **)(iVar3 + 4);
                                  if (pbVar5 == (byte *)0x0) {
                                    pbVar5 = &DAT_0064a3b4;
                                  }
                                  uVar7 = *(uint *)(param_2 + 8);
                                  uVar8 = uVar7;
                                  if (uVar6 <= uVar7) {
                                    uVar8 = uVar6;
                                  }
                                  bVar13 = false;
                                  iVar3 = 0;
                                  bVar14 = true;
                                  pbVar11 = *(byte **)(param_2 + 4);
                                  do {
                                    if (uVar8 == 0) break;
                                    uVar8 = uVar8 - 1;
                                    bVar13 = *pbVar11 < *pbVar5;
                                    bVar14 = *pbVar11 == *pbVar5;
                                    pbVar11 = pbVar11 + 1;
                                    pbVar5 = pbVar5 + 1;
                                  } while (bVar14);
                                  if (!bVar14) {
                                    iVar3 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                  }
                                  bVar13 = false;
                                  if (iVar3 == 0) {
                                    if (uVar7 < uVar6) {
                                      uVar6 = 0xffffffff;
                                    }
                                    else {
                                      uVar6 = (uint)(uVar7 != uVar6);
                                    }
                                    bVar13 = uVar6 == 0;
                                  }
                                  local_4 = (uint)local_4._1_3_ << 8;
                                  if (local_18 != 0) {
                                    cVar1 = *(char *)(local_18 + -1);
                                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                                      FUN_005fe5f0((char *)(local_18 + -1));
                                    }
                                    else {
                                      *(char *)(local_18 + -1) = cVar1 + -1;
                                    }
                                  }
                                  if (!bVar13) goto LAB_00548760;
                                  uVar2 = FUN_005ae390(local_1c,&PTR_DAT_006a1654);
                                  local_4._0_1_ = 0x3b;
                                  uVar2 = FUN_004e5980(local_3c,0x41,uVar2,0);
                                  local_4 = CONCAT31(local_4._1_3_,0x3c);
                                  FUN_0040cc00(uVar2,0,0xffffffff);
                                  if (local_38 != (undefined4 *)0x0) {
                                    cVar1 = *(char *)((int)local_38 + -1);
                                    if ((cVar1 == '\0') || (cVar1 == -1)) {
                                      FUN_005fe5f0((char *)((int)local_38 + -1));
                                    }
                                    else {
                                      *(char *)((int)local_38 + -1) = cVar1 + -1;
                                    }
                                  }
                                  local_38 = (undefined4 *)0x0;
                                  local_34 = 0;
                                  local_30 = 0;
                                  local_4 = local_4 & 0xffffff00;
                                  if (local_18 == 0) goto LAB_00548760;
                                  pcVar9 = (char *)(local_18 + -1);
                                  cVar1 = *(char *)(local_18 + -1);
                                  if ((cVar1 != '\0') && (cVar1 != -1)) {
                                    *pcVar9 = cVar1 + -1;
                                    goto LAB_00548760;
                                  }
LAB_00548757:
                                  local_30 = 0;
                                  local_34 = 0;
                                  local_38 = (undefined4 *)0x0;
                                  FUN_005fe5f0(pcVar9);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00548760:
  *param_1 = local_4c[0];
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1 == local_4c) {
    FUN_0040c9b0(local_44,0xffffffff);
    FUN_0040c9b0(0,0);
  }
  else {
    if (local_44 != 0) {
      puVar10 = local_48;
      if (local_48 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)&DAT_0064a3b4;
      }
      if (*(byte *)((int)puVar10 + -1) < 0xfe) {
        FUN_004040a0(1);
        puVar10 = local_48;
        if (local_48 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)&DAT_0064a3b4;
        }
        *(undefined4 **)(param_1 + 4) = puVar10;
        *(uint *)(param_1 + 8) = local_44;
        *(undefined4 *)(param_1 + 0xc) = local_40;
        *(char *)((int)puVar10 + -1) = *(char *)((int)puVar10 + -1) + '\x01';
        goto LAB_00548833;
      }
    }
    cVar1 = FUN_00401940(local_44,1);
    if (cVar1 != '\0') {
      puVar10 = local_48;
      if (local_48 == (undefined4 *)0x0) {
        puVar10 = (undefined4 *)&DAT_0064a3b4;
      }
      puVar12 = *(undefined4 **)(param_1 + 4);
      for (uVar6 = local_44 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar6 = local_44 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      FUN_00404190(local_44);
    }
  }
LAB_00548833:
  if (local_48 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_48 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((undefined1 *)((int)local_48 + -1));
    }
    else {
      *(char *)((int)local_48 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return param_1;
}

