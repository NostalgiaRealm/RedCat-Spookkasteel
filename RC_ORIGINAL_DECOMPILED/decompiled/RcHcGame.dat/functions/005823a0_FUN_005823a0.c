/*
 * FUN_005823a0 at 005823a0
 * undefined FUN_005823a0(void)
 * Address ranges: 005823a0-00582f73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005823a0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  code *pcVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  undefined1 **extraout_ECX;
  undefined1 **extraout_ECX_00;
  undefined1 **extraout_ECX_01;
  uint uVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  undefined8 local_114;
  undefined4 uStack_100;
  float local_f8;
  undefined1 *puStack_f0;
  undefined1 *puStack_ec;
  float fStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  undefined1 auStack_dc [4];
  undefined4 *puStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  undefined1 *puStack_cc;
  undefined1 local_c8 [4];
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float local_b4;
  undefined1 *local_b0;
  undefined1 *puStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined1 local_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [4];
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 auStack_64 [4];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [12];
  undefined1 auStack_28 [20];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00642693;
  pvStack_14 = ExceptionList;
  local_114._4_4_ = (undefined1 **)param_3;
  local_114._0_4_ = (char *)param_2;
  ExceptionList = &pvStack_14;
  FUN_00403ec0();
  local_114._4_4_ = (undefined1 **)&local_b8;
  local_114._0_4_ = (char *)0x5823e5;
  cVar2 = FUN_00581180();
  if (cVar2 == '\0') {
    local_114._4_4_ = (undefined1 **)0x5823f1;
    FUN_005193b0();
    local_114._4_4_ = (undefined1 **)0x5823f8;
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      local_114._4_4_ = *(undefined1 ***)(param_1 + 0x60);
      if (local_114._4_4_ == (undefined1 **)0x0) {
        local_114._4_4_ = (undefined1 **)&DAT_0064a3b4;
      }
      local_114._0_4_ = s_CAdamEffectPlanetoid__DoOnFrameC_006a5898;
      uVar4 = FUN_005ae390(local_c8);
      local_c = 0;
      FUN_005aff00(uVar4);
      local_c = 0xffffffff;
      local_114._4_4_ = (undefined1 **)0x1;
      local_114._0_4_ = "h,\x01";
      FUN_004040a0();
    }
    local_114._4_4_ = (undefined1 **)0x12c;
    local_114._0_4_ = (char *)0x58244a;
    FUN_005841a0();
  }
  else {
    *(float *)(param_1 + 0x1b8) = local_b8;
    *(float *)(param_1 + 0x1bc) = local_b4;
    *(undefined1 **)(param_1 + 0x1c0) = local_b0;
  }
  local_114._4_4_ = (undefined1 **)0x58246f;
  FUN_005193b0();
  local_114._4_4_ = (undefined1 **)0x582476;
  iVar3 = FUN_004337e0();
  if (iVar3 != 0) {
    puVar5 = *(undefined1 **)(param_1 + 0x60);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    local_114 = (double)(float)local_b0;
    uVar4 = FUN_005ae390(local_c8,s_CAdamEffectPlanetoid__DoOnFrameC_006a5848,puVar5,
                         (double)local_b8,(double)local_b4);
    local_c = 1;
    FUN_005aff00(uVar4);
    local_c = 0xffffffff;
    local_114._4_4_ = (undefined1 **)0x1;
    local_114._0_4_ = (char *)0x5824da;
    FUN_004040a0();
  }
  iVar3 = *(int *)(param_1 + 0x1b0);
  while (0 < iVar3) {
    local_114._4_4_ = (undefined1 **)&local_b8;
    local_114._0_4_ = (char *)0x5824f9;
    cVar2 = FUN_005818a0();
    if (cVar2 == '\0') {
      local_114._4_4_ = (undefined1 **)0x582565;
      FUN_005193b0();
      local_114._4_4_ = (undefined1 **)0x58256c;
      iVar3 = FUN_004337e0();
      if (iVar3 != 0) {
        local_114._4_4_ = *(undefined1 ***)(param_1 + 0x60);
        if (local_114._4_4_ == (undefined1 **)0x0) {
          local_114._4_4_ = (undefined1 **)&DAT_0064a3b4;
        }
        local_114._0_4_ = s_CAdamEffectPlanetoid__DoOnFrameC_006a57c0;
        uVar4 = FUN_005ae390(local_c8);
        local_c = 2;
        FUN_005aff00(uVar4);
        local_c = 0xffffffff;
        local_114._4_4_ = (undefined1 **)0x1;
        local_114._0_4_ = (char *)0x5825b2;
        FUN_004040a0();
      }
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      break;
    }
    local_114._4_4_ = (undefined1 **)0x582502;
    FUN_005193b0();
    local_114._4_4_ = (undefined1 **)0x582509;
    iVar3 = FUN_004337e0();
    if (iVar3 != 0) {
      local_114._4_4_ = *(undefined1 ***)(param_1 + 0x60);
      if (local_114._4_4_ == (undefined1 **)0x0) {
        local_114._4_4_ = (undefined1 **)&DAT_0064a3b4;
      }
      local_114._0_4_ = s_CAdamEffectPlanetoid__DoOnFrameC_006a5808;
      uVar4 = FUN_005ae390(local_c8);
      local_c = 3;
      FUN_005aff00(uVar4);
      local_c = 0xffffffff;
      local_114._4_4_ = (undefined1 **)0x1;
      local_114._0_4_ = (char *)0x58254b;
      FUN_004040a0();
    }
    iVar3 = *(int *)(param_1 + 0x1b0) + -1;
    *(int *)(param_1 + 0x1b0) = iVar3;
  }
  if (param_3 == -1) {
    local_114._4_4_ = (undefined1 **)0x0;
    local_a0[0] = uStack_100._3_1_;
    local_114._0_4_ = (char *)0x5825d4;
    FUN_004040a0();
    uVar9 = 0xffffffff;
    pcVar12 = &DAT_006b3f70;
    do {
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      cVar2 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar2 != '\0');
    local_114._4_4_ = (undefined1 **)(~uVar9 - 1);
    local_114._0_4_ = &DAT_006b3f70;
    FUN_004040f0();
    local_114._4_4_ = (undefined1 **)local_a0;
    local_c = 4;
    local_114._0_4_ = (char *)0x8a;
    pcVar6 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                  s___AdamSource_AdamClock_h_0068e22c);
    (*pcVar6)();
    local_c = 0xffffffff;
    local_114._4_4_ = (undefined1 **)0x1;
    local_114._0_4_ = (char *)0x58262c;
    FUN_004040a0();
  }
  local_f8 = 0.0;
  if (0 < *(int *)(param_1 + 0x17c)) {
    do {
      iVar3 = *(int *)(param_1 + 0xfc + (int)local_f8 * 4);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x18) != 0)) {
        piStack_e0 = *(int **)(iVar3 + 0x14);
        puVar5 = *(undefined1 **)(iVar3 + 0x2c);
        if (puVar5 == (undefined1 *)0xffffffff) {
          local_114._4_4_ = (undefined1 **)0x58299b;
          iVar7 = FUN_005193b0();
          iVar3 = *(int *)(iVar7 + 100);
          if (iVar3 == -0x80000000) {
            local_114._4_4_ = *(undefined1 ***)(iVar7 + 0x18);
            if (local_114._4_4_ == (undefined1 **)0x0) {
              local_114._4_4_ = (undefined1 **)&DAT_0064a3b4;
            }
            local_114._0_4_ = (char *)0x5829b9;
            iVar3 = FUN_0060af10();
            *(int *)(iVar7 + 100) = iVar3;
          }
          if (iVar3 != 0) {
            local_114._0_4_ = *(char **)(param_1 + 0x60);
            if ((char *)local_114 == (undefined1 *)0x0) {
              local_114._0_4_ = &DAT_0064a3b4;
            }
            local_114._4_4_ = (undefined1 **)local_f8;
            uVar4 = FUN_005ae390(auStack_44,s_CAdamEffectPlanetoid__DoOnFrameC_006a56b4);
            local_c = 10;
            FUN_005aff00(uVar4);
            local_c = 0xffffffff;
            local_114._4_4_ = (undefined1 **)0x1;
            local_114._0_4_ = (char *)0x582a18;
            FUN_004040a0();
          }
        }
        else {
          bVar1 = true;
          if (puVar5 != (undefined1 *)0xffffffff) {
            iVar7 = *(int *)(iVar3 + 0x30);
            if (iVar7 == -1) {
              *(undefined4 *)(iVar3 + 0x34) = 0x3f800000;
              *(undefined1 **)(iVar3 + 0x30) = puVar5 + param_2;
            }
            else if (iVar7 < param_2) {
              *(undefined4 *)(iVar3 + 0x34) = 0;
              bVar1 = false;
            }
            else if ((int)puVar5 < 1) {
              *(undefined4 *)(iVar3 + 0x34) = 0;
            }
            else {
              puStack_f0 = (undefined1 *)(iVar7 - param_2);
              *(float *)(iVar3 + 0x34) = (float)(int)puStack_f0 / (float)(int)puVar5;
            }
          }
          *(bool *)(iVar3 + 0x38) = bVar1;
          puStack_cc = puVar5;
          if (!bVar1) {
            local_114._4_4_ = (undefined1 **)0x5826ec;
            iVar7 = FUN_005193b0();
            iVar3 = *(int *)(iVar7 + 100);
            local_114._0_4_ = (char *)extraout_ECX;
            if (iVar3 == -0x80000000) {
              local_114._4_4_ = *(undefined1 ***)(iVar7 + 0x18);
              if (local_114._4_4_ == (undefined1 **)0x0) {
                local_114._4_4_ = (undefined1 **)&DAT_0064a3b4;
              }
              local_114._0_4_ = (char *)0x58270a;
              iVar3 = FUN_0060af10();
              *(int *)(iVar7 + 100) = iVar3;
              local_114._0_4_ = (char *)extraout_ECX_00;
            }
            if (iVar3 != 0) {
              local_114._0_4_ = *(char **)(param_1 + 0x60);
              if ((char *)local_114 == (undefined1 *)0x0) {
                local_114._0_4_ = &DAT_0064a3b4;
              }
              local_114._4_4_ = (undefined1 **)local_f8;
              uVar4 = FUN_005ae390(auStack_34,s_CAdamEffectPlanetoid__DoOnFrameC_006a577c);
              local_c = 5;
              FUN_005aff00(uVar4);
              local_c = 0xffffffff;
              local_114._4_4_ = (undefined1 **)0x1;
              local_114._0_4_ = (char *)0x582769;
              FUN_004040a0();
              local_114._0_4_ = (char *)extraout_ECX_01;
            }
            puStack_cc = (undefined1 *)((int)&local_114 + 4);
            local_114._4_4_ = (undefined1 **)0x0;
            puStack_f0 = (undefined1 *)&local_114;
            local_c = 6;
            FUN_004042e0(&local_114);
            local_c = 0xffffffff;
            FUN_00582fe0();
            goto LAB_00582f42;
          }
          local_114._4_4_ = (undefined1 **)0x5827b5;
          iVar7 = FUN_005193b0();
          iVar3 = *(int *)(iVar7 + 100);
          if (iVar3 == -0x80000000) {
            local_114._4_4_ = *(undefined1 ***)(iVar7 + 0x18);
            if (local_114._4_4_ == (undefined1 **)0x0) {
              local_114._4_4_ = (undefined1 **)&DAT_0064a3b4;
            }
            local_114._0_4_ = (char *)0x5827d3;
            iVar3 = FUN_0060af10();
            *(int *)(iVar7 + 100) = iVar3;
          }
          if (iVar3 != 0) {
            puVar5 = *(undefined1 **)(param_1 + 0x60);
            if (puVar5 == (undefined1 *)0x0) {
              puVar5 = &DAT_0064a3b4;
            }
            local_114 = (double)*(float *)(*(int *)(param_1 + 0xfc + (int)local_f8 * 4) + 0x34);
            uVar4 = FUN_005ae390(auStack_54,s_CAdamEffectPlanetoid__DoOnFrameC_006a5730,puVar5,
                                 local_f8);
            local_c = 7;
            FUN_005aff00(uVar4);
            local_c = 0xffffffff;
            local_114._4_4_ = (undefined1 **)0x1;
            local_114._0_4_ = (char *)0x582842;
            FUN_004040a0();
          }
          puStack_f0 = (undefined1 *)
                       (*(float *)(*(int *)(param_1 + 0xfc + (int)local_f8 * 4) + 0x34) * 255.0);
          if (piStack_e0[0x3f] == 0) {
            local_114._4_4_ = (undefined1 **)0x0;
            auStack_80[0] = uStack_100._3_1_;
            local_114._0_4_ = (char *)0x582887;
            FUN_004040a0();
            uVar9 = 0xffffffff;
            pcVar12 = &DAT_006b3f70;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            local_114._4_4_ = (undefined1 **)(~uVar9 - 1);
            local_114._0_4_ = &DAT_006b3f70;
            FUN_004040f0();
            local_114._4_4_ = (undefined1 **)auStack_80;
            local_c = 8;
            local_114._0_4_ = (char *)0x32;
            pcVar6 = (code *)FUN_005a07f0(s_m_Corona____0_006a5094,
                                          s_D__Work_RCHorror_AdamSource_Adam_006a5700);
            (*pcVar6)();
            local_c = 0xffffffff;
            local_114._4_4_ = (undefined1 **)0x1;
            local_114._0_4_ = (char *)0x5828ea;
            FUN_004040a0();
          }
          *(undefined1 **)(piStack_e0[0x3f] + 0x28) = puStack_f0;
          iVar3 = *(int *)(param_1 + 0xfc + (int)local_f8 * 4);
          iVar7 = *(int *)(iVar3 + 0x3c);
          if (iVar7 != 0) {
            if (iVar7 == 0) {
              local_114._4_4_ = (undefined1 **)0x0;
              auStack_90[0] = uStack_100._3_1_;
              local_114._0_4_ = (char *)0x58292a;
              FUN_004040a0();
              uVar9 = 0xffffffff;
              pcVar12 = &DAT_006b3f70;
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar2 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar2 != '\0');
              local_114._4_4_ = (undefined1 **)(~uVar9 - 1);
              local_114._0_4_ = &DAT_006b3f70;
              FUN_004040f0();
              local_114._4_4_ = (undefined1 **)auStack_90;
              local_c = 9;
              local_114._0_4_ = (char *)0x32;
              pcVar6 = (code *)FUN_005a07f0(s_m_Trail__0_006a555c,
                                            s_D__Work_RCHorror_AdamSource_Adam_006a5568);
              (*pcVar6)();
              local_c = 0xffffffff;
              local_114._4_4_ = (undefined1 **)0x1;
              local_114._0_4_ = (char *)0x582987;
              FUN_004040a0();
            }
            *(undefined1 **)(*(int *)(iVar3 + 0x3c) + 0x60) = puStack_f0;
          }
        }
        local_114._4_4_ = (undefined1 **)local_a0;
        local_114._0_4_ = (char *)0x582a26;
        pfVar8 = (float *)(**(code **)(*piStack_e0 + 0x48))();
        puStack_f0 = (undefined1 *)*pfVar8;
        puStack_ec = (undefined1 *)pfVar8[1];
        fStack_e8 = pfVar8[2];
        local_b0 = puStack_f0;
        puStack_ac = puStack_ec;
        fStack_a8 = fStack_e8;
        if (param_1 == 0) {
          local_114._0_4_ = (char *)0x582a59;
          iVar7 = FUN_005193b0();
          iVar3 = *(int *)(iVar7 + 100);
          if (iVar3 == -0x80000000) {
            local_114._0_4_ = *(char **)(iVar7 + 0x18);
            if ((char *)local_114 == (undefined1 *)0x0) {
              local_114._0_4_ = &DAT_0064a3b4;
            }
            iVar3 = FUN_0060af10();
            *(int *)(iVar7 + 100) = iVar3;
          }
          if (iVar3 != 0) {
            iVar3 = *(int *)(uStack_100 + 0xfc);
            local_114._0_4_ = (char *)((ulonglong)(double)*(float *)(iVar3 + 0x24) >> 0x20);
            uVar4 = FUN_005ae390(auStack_28,s_before__Position____f___f___f___S_006a567c,
                                 (double)(float)puStack_f0,(double)(float)puStack_ec,
                                 (double)fStack_e8,(double)*(float *)(iVar3 + 0x1c),
                                 (double)*(float *)(iVar3 + 0x20),
                                 SUB84((double)*(float *)(iVar3 + 0x24),0));
            puStack_10 = (undefined1 *)0xb;
            FUN_005aff00(uVar4);
            puStack_10 = (undefined1 *)0xffffffff;
            local_114._0_4_ = (char *)0x1;
            FUN_004040a0();
          }
        }
        local_114._0_4_ = (char *)auStack_64;
        FUN_005b2fe0();
        local_114._0_4_ = (char *)0x582b2f;
        FUN_005b2f20();
        iVar3 = *(int *)(uStack_100 + 0xfc + param_1 * 4);
        local_114._0_4_ = (char *)(iVar3 + 0x1c);
        FUN_005b3020(*(float *)(iVar3 + 0x28) * local_f8);
        if (0.0 < *(float *)(uStack_100 + 0x1b4)) {
          if (*(float *)(uStack_100 + 0x1b4) <= local_f8) {
            *(undefined4 *)(*(int *)(uStack_100 + 0xfc + param_1 * 4) + 0x1c) = 0;
            *(undefined4 *)(*(int *)(uStack_100 + 0xfc + param_1 * 4) + 0x20) = 0;
            *(undefined4 *)(*(int *)(uStack_100 + 0xfc + param_1 * 4) + 0x24) = 0;
          }
          else {
            local_114._0_4_ = (char *)(1.0 - local_f8 / *(float *)(uStack_100 + 0x1b4));
            FUN_005b2fa0();
          }
        }
        local_114._0_4_ = (char *)&puStack_f0;
        FUN_005b3020(local_f8);
        local_114._0_4_ = (char *)&puStack_f0;
        (**(code **)(*piStack_e4 + 0x4c))();
        if (param_1 == 0) {
          local_114._4_4_ = (undefined1 **)0x582bfe;
          iVar7 = FUN_005193b0();
          iVar3 = *(int *)(iVar7 + 100);
          if (iVar3 == -0x80000000) {
            local_114._4_4_ = *(undefined1 ***)(iVar7 + 0x18);
            if (local_114._4_4_ == (undefined1 **)0x0) {
              local_114._4_4_ = (undefined1 **)&DAT_0064a3b4;
            }
            local_114._0_4_ = (char *)0x582c1c;
            iVar3 = FUN_0060af10();
            *(int *)(iVar7 + 100) = iVar3;
          }
          if (iVar3 != 0) {
            iVar3 = *(int *)(uStack_100 + 0xfc);
            local_114 = (double)*(float *)(iVar3 + 0x24);
            uVar4 = FUN_005ae390(auStack_70,s_after___2f_seconds__Position_____006a5638,
                                 (double)((float)param_3 * 0.001),(double)(float)puStack_ec,
                                 (double)fStack_e8,(double)(float)piStack_e4,
                                 (double)*(float *)(iVar3 + 0x1c),(double)*(float *)(iVar3 + 0x20));
            local_c = 0xc;
            FUN_005aff00(uVar4);
            local_c = 0xffffffff;
            if (iStack_6c != 0) {
              local_114._4_4_ = (undefined1 **)(iStack_6c + -1);
              cVar2 = *(char *)(iStack_6c + -1);
              if ((cVar2 != '\0') && (cVar2 != -1)) {
                *(char *)local_114._4_4_ = cVar2 + -1;
                iStack_6c = 0;
                uStack_68 = 0;
                auStack_64[0] = 0;
                goto LAB_00582cfd;
              }
              local_114._0_4_ = (char *)0x582ce1;
              FUN_005fe5f0();
            }
            iStack_6c = 0;
            uStack_68 = 0;
            auStack_64[0] = 0;
          }
        }
LAB_00582cfd:
        if (*(int *)(*(int *)(uStack_100 + 0xfc + param_1 * 4) + 0x3c) != 0) {
          if (local_f8 == 0.0) {
            local_114._4_4_ = (undefined1 **)0x582d20;
            iVar7 = FUN_005193b0();
            iVar3 = *(int *)(iVar7 + 100);
            if (iVar3 == -0x80000000) {
              local_114._4_4_ = *(undefined1 ***)(iVar7 + 0x18);
              if (local_114._4_4_ == (undefined1 **)0x0) {
                local_114._4_4_ = (undefined1 **)&DAT_0064a3b4;
              }
              local_114._0_4_ = (char *)0x582d3e;
              iVar3 = FUN_0060af10();
              *(int *)(iVar7 + 100) = iVar3;
            }
            if (iVar3 != 0) {
              local_114 = (double)(float)piStack_e4;
              uVar4 = FUN_005ae390(local_c8,s_Trail_should_move_from____f___f__006a5600,
                                   (double)(float)puStack_ac,(double)fStack_a8,(double)fStack_a4,
                                   (double)(float)puStack_ec,(double)fStack_e8);
              local_c = 0xd;
              FUN_005aff00(uVar4);
              local_c = 0xffffffff;
              if (iStack_c4 != 0) {
                local_114._4_4_ = (undefined1 **)(iStack_c4 + -1);
                cVar2 = *(char *)(iStack_c4 + -1);
                if ((cVar2 == '\0') || (cVar2 == -1)) {
                  local_114._0_4_ = (char *)0x582de4;
                  FUN_005fe5f0();
                }
                else {
                  *(char *)local_114._4_4_ = cVar2 + -1;
                }
              }
              iStack_c4 = 0;
              uStack_c0 = 0;
              uStack_bc = 0;
            }
          }
          puStack_cc = *(undefined1 **)(param_1 + 0xfc + (int)local_f8 * 4);
          if (*(int *)(puStack_cc + 0x3c) == 0) {
            auStack_dc[0] = uStack_100._3_1_;
            uVar9 = 0xffffffff;
            uStack_d4 = 0;
            pcVar12 = &DAT_006b3f70;
            do {
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              cVar2 = *pcVar12;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != '\0');
            uVar9 = ~uVar9 - 1;
            puStack_d8 = (undefined4 *)0x0;
            uStack_d0 = 0;
            if (uVar9 < 0xfffffffe) {
LAB_00582e6a:
              if (uVar9 == 0) {
                local_114._4_4_ = (undefined1 **)0x1;
                local_114._0_4_ = (char *)0x582e79;
                FUN_004040a0();
              }
              else {
                if ((0x1f < uStack_d0) || (uStack_d0 < uVar9)) {
                  local_114._4_4_ = (undefined1 **)0x1;
                  local_114._0_4_ = (char *)0x582e8f;
                  FUN_004040a0();
                  goto LAB_00582e8f;
                }
LAB_00582e9d:
                puVar11 = (undefined4 *)&DAT_006b3f70;
                puVar13 = puStack_d8;
                for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *puVar13 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar13 = puVar13 + 1;
                }
                for (uVar10 = uVar9 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
                  *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
                  puVar11 = (undefined4 *)((int)puVar11 + 1);
                  puVar13 = (undefined4 *)((int)puVar13 + 1);
                }
                *(undefined1 *)((int)puStack_d8 + uVar9) = 0;
                uStack_d4 = uVar9;
              }
            }
            else {
              local_114._4_4_ = (undefined1 **)0x582e3e;
              FUN_005fe5fb();
              if (((puStack_d8 == (undefined4 *)0x0) ||
                  (cVar2 = *(char *)((int)puStack_d8 + -1), cVar2 == '\0')) || (cVar2 == -1))
              goto LAB_00582e6a;
              if (uVar9 != 0) {
LAB_00582e8f:
                local_114._0_4_ = (char *)0x582e99;
                local_114._4_4_ = (undefined1 **)uVar9;
                FUN_00401a60();
                goto LAB_00582e9d;
              }
              *(char *)((int)puStack_d8 + -1) = cVar2 + -1;
              local_114._0_4_ = (char *)0x582e64;
              local_114._4_4_ = (undefined1 **)uVar9;
              FUN_004040a0();
            }
            local_114._4_4_ = (undefined1 **)auStack_dc;
            local_c = 0xe;
            local_114._0_4_ = (char *)0x32;
            pcVar6 = (code *)FUN_005a07f0(s_m_Trail__0_006a555c,
                                          s_D__Work_RCHorror_AdamSource_Adam_006a5568);
            (*pcVar6)();
            local_c = 0xffffffff;
            if (puStack_d8 != (undefined4 *)0x0) {
              local_114._4_4_ = (undefined1 **)((int)puStack_d8 + -1);
              cVar2 = *(char *)((int)puStack_d8 + -1);
              if ((cVar2 == '\0') || (cVar2 == -1)) {
                local_114._0_4_ = (char *)0x582f15;
                FUN_005fe5f0();
              }
              else {
                *(char *)local_114._4_4_ = cVar2 + -1;
              }
            }
            puStack_d8 = (undefined4 *)0x0;
            uStack_d4 = 0;
            uStack_d0 = 0;
          }
          local_114._4_4_ = &puStack_ec;
          local_114._0_4_ = (char *)&puStack_ac;
          (**(code **)(**(int **)(puStack_cc + 0x3c) + 4))(param_2,param_3);
        }
      }
LAB_00582f42:
      local_f8 = (float)((int)local_f8 + 1);
    } while ((int)local_f8 < *(int *)(param_1 + 0x17c));
  }
  ExceptionList = pvStack_14;
  return;
}

