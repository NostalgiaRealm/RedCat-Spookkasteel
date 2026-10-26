/*
 * FUN_0055ebc0 at 0055ebc0
 * undefined FUN_0055ebc0(void)
 * Address ranges: 0055ebc0-0055f624
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0055ebc0(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  int iVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  char *pcVar21;
  undefined1 local_14e;
  undefined1 uStack_14d;
  undefined1 *local_144;
  int *piStack_140;
  int iStack_13c;
  int local_138;
  char *pcStack_134;
  char *local_130;
  undefined1 local_12c [4];
  char *local_128;
  uint local_124;
  undefined4 uStack_120;
  char *pcStack_118;
  char *pcStack_114;
  undefined1 auStack_110 [4];
  int iStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [4];
  undefined4 *puStack_fc;
  uint uStack_f8;
  undefined1 auStack_f0 [4];
  undefined4 *puStack_ec;
  uint uStack_e8;
  undefined1 local_e0 [4];
  undefined4 *local_dc;
  uint local_d8;
  undefined1 auStack_d0 [4];
  undefined4 *puStack_cc;
  uint uStack_c8;
  undefined1 auStack_c0 [4];
  undefined4 *puStack_bc;
  uint uStack_b8;
  undefined1 auStack_b0 [4];
  int iStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  char local_90 [132];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063f8e9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005ae5f0(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x2f8);
  local_4 = 0;
  iVar4 = FUN_005bb9a0(param_1);
  *param_2 = iVar4;
  if (iVar4 == 0) {
    FUN_004040a0(0);
    uVar16 = 0xffffffff;
    pcVar6 = s_CAdamEngine__QueryDrivers____geE_006a3204;
    do {
      if (uVar16 == 0) break;
      uVar16 = uVar16 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar16 = ~uVar16 - 1;
    cVar1 = FUN_00401940(uVar16,1);
    if (cVar1 != '\0') {
      pcVar6 = s_CAdamEngine__QueryDrivers____geE_006a3204;
      pcVar7 = local_128;
      for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar17 = uVar16 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *pcVar7 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      }
      local_128[uVar16] = '\0';
      local_124 = uVar16;
    }
    local_4._0_1_ = 1;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x2fe,local_12c);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    FUN_005ae770();
    bVar3 = false;
  }
  else {
    iVar18 = 0;
    local_138 = 0;
    iVar4 = FUN_005c9580(iVar4,0);
    if (iVar4 != 0) {
      local_144 = &DAT_006bb35d;
      do {
        FUN_005c9680(iVar4,&local_130);
        if (local_130 == (char *)0x0) {
LAB_0055ed17:
          local_e0[0] = local_14e;
          FUN_004040a0(0);
          uVar16 = 0xffffffff;
          pcVar6 = &DAT_006b3f70;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16 - 1;
          cVar1 = FUN_00401940(uVar16,1);
          if (cVar1 != '\0') {
            puVar19 = (undefined4 *)&DAT_006b3f70;
            puVar20 = local_dc;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar20 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
            }
            for (uVar17 = uVar16 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined1 *)puVar20 = *(undefined1 *)puVar19;
              puVar19 = (undefined4 *)((int)puVar19 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            }
            *(undefined1 *)((int)local_dc + uVar16) = 0;
            local_d8 = uVar16;
          }
          local_4._0_1_ = 2;
          pcVar5 = (code *)FUN_005a07f0(s_driverName__0____strlen_driverNa_006a31d8,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x312,local_e0);
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        else {
          uVar16 = 0xffffffff;
          pcVar6 = local_130;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          if (0x80 < ~uVar16 - 1) goto LAB_0055ed17;
        }
        uVar16 = 0xffffffff;
        pcVar6 = local_130;
        do {
          pcVar7 = pcVar6;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar7 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar7;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        pcVar6 = pcVar7 + -uVar16;
        pcVar7 = local_90;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar7 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar7 = pcVar7 + 1;
        }
        uVar16 = 0xffffffff;
        pcVar6 = local_90;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        if (0x80 < ~uVar16 - 1) {
          auStack_100[0] = local_14e;
          FUN_004040a0(0);
          uVar16 = 0xffffffff;
          pcVar6 = &DAT_006b3f70;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16 - 1;
          cVar1 = FUN_00401940(uVar16,1);
          if (cVar1 != '\0') {
            puVar19 = (undefined4 *)&DAT_006b3f70;
            puVar20 = puStack_fc;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar20 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
            }
            for (uVar17 = uVar16 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined1 *)puVar20 = *(undefined1 *)puVar19;
              puVar19 = (undefined4 *)((int)puVar19 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            }
            *(undefined1 *)((int)puStack_fc + uVar16) = 0;
            uStack_f8 = uVar16;
          }
          local_4._0_1_ = 3;
          pcVar5 = (code *)FUN_005a07f0(s_strlen__tmp___<_sizeof(_tmp_)_006a31b8,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x315,
                                        auStack_100);
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        FUN_0061f68a(local_90);
        pcVar6 = _strstr(local_90,s_SOFTWARE_006a31ac);
        if (pcVar6 != (char *)0x0) {
          pcVar7 = _strstr(local_90,s_WINDOW_006a31a4);
          uStack_14d = 1;
          if (pcVar7 == (char *)0x0) goto LAB_0055eee1;
        }
        else {
LAB_0055eee1:
          uStack_14d = 0;
        }
        pcVar7 = _strstr(local_90,s_PRIMA_006a319c);
        local_14e = pcVar7 != (char *)0x0;
        FUN_005c9620(iVar4,&pcStack_118);
        if (pcStack_118 == (char *)0x0) {
          auStack_c0[0] = local_14e;
          FUN_004040a0(0);
          uVar16 = 0xffffffff;
          pcVar7 = &DAT_006b3f70;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16 - 1;
          cVar1 = FUN_00401940(uVar16,1);
          if (cVar1 != '\0') {
            puVar19 = (undefined4 *)&DAT_006b3f70;
            puVar20 = puStack_bc;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar20 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
            }
            for (uVar17 = uVar16 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined1 *)puVar20 = *(undefined1 *)puVar19;
              puVar19 = (undefined4 *)((int)puVar19 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            }
            *(undefined1 *)((int)puStack_bc + uVar16) = 0;
            uStack_b8 = uVar16;
          }
          local_4._0_1_ = 4;
          pcVar5 = (code *)FUN_005a07f0(s_driverFileName____0_006a3188,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x321,auStack_c0
                                       );
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        uVar16 = 0xffffffff;
        pcVar7 = pcStack_118;
        do {
          pcVar8 = pcVar7;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        pcVar7 = pcVar8 + -uVar16;
        pcVar8 = local_90;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar8 = pcVar8 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar8 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        }
        uVar16 = 0xffffffff;
        pcVar7 = local_90;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (0x80 < ~uVar16 - 1) {
          auStack_d0[0] = local_14e;
          FUN_004040a0(0);
          uVar16 = 0xffffffff;
          pcVar7 = &DAT_006b3f70;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16 - 1;
          cVar1 = FUN_00401940(uVar16,1);
          if (cVar1 != '\0') {
            puVar19 = (undefined4 *)&DAT_006b3f70;
            puVar20 = puStack_cc;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar20 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
            }
            for (uVar17 = uVar16 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined1 *)puVar20 = *(undefined1 *)puVar19;
              puVar19 = (undefined4 *)((int)puVar19 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            }
            *(undefined1 *)((int)puStack_cc + uVar16) = 0;
            uStack_c8 = uVar16;
          }
          local_4._0_1_ = 5;
          pcVar5 = (code *)FUN_005a07f0(s_strlen__tmp___<_sizeof(_tmp_)_006a31b8,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x323,auStack_d0
                                       );
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        FUN_0061f68a(local_90);
        pcVar8 = _strstr(local_90,&DAT_006a3184);
        pcVar9 = _strstr(local_90,s_GLIDE_006a317c);
        pcVar10 = _strstr(local_90,(char *)&DAT_006a3178);
        *(int *)(local_144 + -0xb75) = iVar4;
        uVar16 = 0xffffffff;
        pcVar7 = local_130;
        do {
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        if (0x7f < ~uVar16 - 1) {
          auStack_f0[0] = local_14e;
          FUN_004040a0(0);
          uVar16 = 0xffffffff;
          pcVar7 = &DAT_006b3f70;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar16 = ~uVar16 - 1;
          cVar1 = FUN_00401940(uVar16,1);
          if (cVar1 != '\0') {
            puVar19 = (undefined4 *)&DAT_006b3f70;
            puVar20 = puStack_ec;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *puVar20 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar20 = puVar20 + 1;
            }
            for (uVar17 = uVar16 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined1 *)puVar20 = *(undefined1 *)puVar19;
              puVar19 = (undefined4 *)((int)puVar19 + 1);
              puVar20 = (undefined4 *)((int)puVar20 + 1);
            }
            *(undefined1 *)((int)puStack_ec + uVar16) = 0;
            uStack_e8 = uVar16;
          }
          local_4._0_1_ = 6;
          pcVar5 = (code *)FUN_005a07f0(s_strlen__driverName___<_128_006a315c,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x32c,auStack_f0
                                       );
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_004040a0(1);
        }
        uVar16 = 0xffffffff;
        pcVar7 = local_130;
        do {
          pcVar21 = pcVar7;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar21 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar21;
        } while (cVar1 != '\0');
        uVar16 = ~uVar16;
        pcVar7 = pcVar21 + -uVar16;
        pcVar21 = local_144 + -0xb71;
        for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
          *(undefined4 *)pcVar21 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar21 = pcVar21 + 4;
        }
        for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *pcVar21 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar21 = pcVar21 + 1;
        }
        iVar18 = FUN_005c9640(iVar4);
        if ((iVar18 < 0) || (3 < iVar18)) {
          uVar16 = 0xffffffff;
          pcVar7 = &DAT_006b3f70;
          do {
            if (uVar16 == 0) break;
            uVar16 = uVar16 - 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          iStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          auStack_110[0] = local_14e;
          FUN_004040f0(&DAT_006b3f70,~uVar16 - 1);
          local_4._0_1_ = 7;
          pcVar5 = (code *)FUN_005a07f0(s_driverNr>_0____driverNr_<_4_006a3140,
                                        s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x32f,
                                        auStack_110);
          (*pcVar5)();
          local_4 = (uint)local_4._1_3_ << 8;
          if (iStack_10c != 0) {
            cVar1 = *(char *)(iStack_10c + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)(iStack_10c + -1));
            }
            else {
              *(char *)(iStack_10c + -1) = cVar1 + -1;
            }
          }
          iStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
        }
        *(int *)(local_144 + -0xa6d) = iVar18;
        *(undefined4 *)(local_144 + -0xa69) = 0;
        *local_144 = pcVar6 != (char *)0x0;
        local_144[-1] = uStack_14d;
        local_144[1] = pcVar8 != (char *)0x0;
        local_144[2] = pcVar9 != (char *)0x0;
        local_144[3] = pcVar10 != (char *)0x0;
        if ((pcVar10 != (char *)0x0) && ((bool)local_14e)) {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
        local_144[4] = uVar2;
        puVar11 = &DAT_006b3f70;
        if (pcVar8 != (char *)0x0) {
          puVar11 = &DAT_006a3138;
        }
        FUN_0060af1b(local_144 + -0xaf0,0x7f,&DAT_0069c984,puVar11,local_144 + -0xb71);
        iVar12 = FUN_00517430();
        iVar18 = *(int *)(iVar12 + 100);
        if (iVar18 == -0x80000000) {
          puVar13 = *(undefined1 **)(iVar12 + 0x18);
          if (puVar13 == (undefined1 *)0x0) {
            puVar13 = &DAT_0064a3b4;
          }
          iVar18 = FUN_0060af10(puVar13);
          *(int *)(iVar12 + 100) = iVar18;
        }
        if (iVar18 != 0) {
          uVar14 = FUN_005ae390(auStack_b0,s_QueryDrivers____found_Driver___d_006a30e8,local_138,
                                local_144 + -0xaf0,*(undefined4 *)(local_144 + -0xa6d));
          local_4._0_1_ = 8;
          FUN_005aff00(uVar14);
          local_4 = (uint)local_4._1_3_ << 8;
          if (iStack_ac != 0) {
            cVar1 = *(char *)(iStack_ac + -1);
            if ((cVar1 == '\0') || (cVar1 == -1)) {
              FUN_005fe5f0((char *)(iStack_ac + -1));
            }
            else {
              *(char *)(iStack_ac + -1) = cVar1 + -1;
            }
          }
          iStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
        }
        iStack_13c = 0;
        iVar18 = FUN_005c95d0(iVar4,0);
        if (iVar18 != 0) {
          pcStack_134 = local_144 + -0xa15;
          piStack_140 = (int *)(local_144 + -0xa65);
          do {
            *piStack_140 = iVar18;
            FUN_005c9680(iVar18,&pcStack_114);
            if (pcStack_114 == (char *)0x0) {
LAB_0055f417:
              uVar16 = 0xffffffff;
              local_128 = (char *)0x0;
              pcVar6 = &DAT_006b3f70;
              do {
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              local_124 = 0;
              uStack_120 = 0;
              local_12c[0] = local_14e;
              FUN_004040f0(&DAT_006b3f70,~uVar16 - 1);
              local_4._0_1_ = 9;
              pcVar5 = (code *)FUN_005a07f0(s_modeName____0____strlen__modeNam_006a30bc,
                                            s_D__Work_RCHorror_AdamSource_Adam_006a26f8,0x35e,
                                            local_12c);
              (*pcVar5)();
              local_4 = (uint)local_4._1_3_ << 8;
              if (local_128 != (char *)0x0) {
                cVar1 = *(char *)((int)local_128 + -1);
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_005fe5f0((char *)((int)local_128 + -1));
                }
                else {
                  *(char *)((int)local_128 + -1) = cVar1 + -1;
                }
              }
              local_128 = (char *)0x0;
              local_124 = 0;
              uStack_120 = 0;
            }
            else {
              uVar16 = 0xffffffff;
              pcVar6 = pcStack_114;
              do {
                if (uVar16 == 0) break;
                uVar16 = uVar16 - 1;
                cVar1 = *pcVar6;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 != '\0');
              if (0x80 < ~uVar16 - 1) goto LAB_0055f417;
            }
            uVar16 = 0xffffffff;
            pcVar6 = pcStack_114;
            do {
              pcVar7 = pcVar6;
              if (uVar16 == 0) break;
              uVar16 = uVar16 - 1;
              pcVar7 = pcVar6 + 1;
              cVar1 = *pcVar6;
              pcVar6 = pcVar7;
            } while (cVar1 != '\0');
            uVar16 = ~uVar16;
            pcVar6 = pcVar7 + -uVar16;
            pcVar7 = pcStack_134;
            for (uVar17 = uVar16 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pcVar7 = *(undefined4 *)pcVar6;
              pcVar6 = pcVar6 + 4;
              pcVar7 = pcVar7 + 4;
            }
            for (uVar16 = uVar16 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
              *pcVar7 = *pcVar6;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
            }
            iVar15 = FUN_00517430();
            iVar12 = *(int *)(iVar15 + 100);
            if (iVar12 == -0x80000000) {
              puVar13 = *(undefined1 **)(iVar15 + 0x18);
              if (puVar13 == (undefined1 *)0x0) {
                puVar13 = &DAT_0064a3b4;
              }
              iVar12 = FUN_0060af10(puVar13);
              *(int *)(iVar15 + 100) = iVar12;
            }
            if (iVar12 != 0) {
              uVar14 = FUN_005ae390(auStack_a0,s_found_DriverMode___d____m_ModeNa_006a308c,
                                    iStack_13c,pcStack_134);
              local_4._0_1_ = 10;
              FUN_005aff00(uVar14);
              local_4 = (uint)local_4._1_3_ << 8;
              if (iStack_9c != 0) {
                cVar1 = *(char *)(iStack_9c + -1);
                if ((cVar1 == '\0') || (cVar1 == -1)) {
                  FUN_005fe5f0((char *)(iStack_9c + -1));
                }
                else {
                  *(char *)(iStack_9c + -1) = cVar1 + -1;
                }
              }
              iStack_9c = 0;
              uStack_98 = 0;
              uStack_94 = 0;
            }
            iStack_13c = iStack_13c + 1;
            piStack_140 = piStack_140 + 1;
            pcStack_134 = pcStack_134 + 0x81;
            iVar18 = FUN_005c95d0(iVar4,iVar18);
          } while (iVar18 != 0);
        }
        iVar18 = local_138 + 1;
        *(int *)(local_144 + -0xa69) = iStack_13c;
        local_144 = local_144 + 0xb7c;
        iVar4 = FUN_005c9580(*param_2,iVar4);
        local_138 = iVar18;
      } while (iVar4 != 0);
    }
    local_4 = 0xffffffff;
    bVar3 = iVar18 != 0;
    DAT_006c8d98 = iVar18;
    FUN_005ae770();
  }
  ExceptionList = local_c;
  return bVar3;
}

