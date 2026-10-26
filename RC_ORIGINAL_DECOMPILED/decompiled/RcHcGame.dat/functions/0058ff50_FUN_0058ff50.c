/*
 * FUN_0058ff50 at 0058ff50
 * undefined FUN_0058ff50(void)
 * Address ranges: 0058ff50-00590fa2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0058ff50(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  code *pcVar5;
  int *piVar6;
  uint uVar7;
  char cVar8;
  char *pcVar9;
  undefined1 local_165;
  float local_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  int iStack_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined4 uStack_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined1 local_12c [4];
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  uint local_11c;
  float local_118;
  float local_114;
  undefined4 *local_110;
  int iStack_10c;
  int iStack_108;
  int local_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 local_64 [16];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00643685;
  local_c = ExceptionList;
  local_118 = (float)param_3;
  local_11c = 0;
  cVar8 = '\x01';
  ExceptionList = &local_c;
  param_1[0x4e] = (int)(local_118 + (float)param_1[0x4e]);
  local_13c = param_1[0x51];
  if (local_13c != -1) {
    iVar1 = param_1[0x52];
    if (iVar1 == -1) {
      param_1[0x53] = 0x3f800000;
      param_1[0x52] = local_13c + param_2;
    }
    else if (iVar1 < param_2) {
      param_1[0x53] = 0;
      cVar8 = '\0';
    }
    else if (local_13c < 1) {
      param_1[0x53] = 0;
    }
    else {
      local_138 = iVar1 - param_2;
      param_1[0x53] = (int)((float)local_138 / (float)local_13c);
    }
  }
  *(char *)(param_1 + 0x54) = cVar8;
  if (cVar8 == '\0') {
    FUN_00502220();
  }
  else {
    if ((char)param_1[0x4d] == '\0') {
      if (param_1[0x50] == 1) {
        local_134 = 0;
        while (iVar1 = FUN_0060a4a0(), local_134 < iVar1 % 5 + 6) {
          iVar1 = FUN_0060a4a0();
          local_164 = (float)(iVar1 % 10000);
          local_14c = (float)(int)local_164 * 0.0002 - 1.0;
          iVar1 = FUN_0060a4a0();
          local_164 = (float)(iVar1 % 10000);
          local_148 = (float)(int)local_164 * 0.0002 - 1.0;
          iVar1 = FUN_0060a4a0();
          local_164 = (float)(iVar1 % 10000);
          local_144 = (float)(int)local_164 * 0.0002 - 1.0;
          FUN_005b2f20();
          iVar1 = FUN_0060a4a0();
          local_164 = (float)(iVar1 % 10000);
          FUN_005b2fa0((float)(int)local_164 * 0.002 + 25.0);
          FUN_005b2fa0(param_1[0x6a]);
          puVar2 = operator_new(0x184);
          local_4 = 0;
          local_110 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            FUN_00409810(s_spark_00696fbc,&local_12d);
            local_4._0_1_ = 1;
            uVar3 = FUN_005033a0(local_64,&local_160);
            local_4._0_1_ = 2;
            FUN_00501cb0(uVar3);
            local_4._0_1_ = 5;
            FUN_004040a0(1);
            local_4._0_1_ = 4;
            FUN_004040a0(1);
            iVar1 = __ftol();
            local_114 = (float)iVar1 * 1.2;
            local_164 = (float)iVar1 * 0.8;
            local_104 = FUN_0060a4a0();
            local_104 = local_104 % 10000;
            uVar3 = __ftol();
            FUN_004041b0(uVar3);
            puVar2[0x4a] = param_1[0x3e];
            puVar2[0x4b] = param_1[0x3f];
            puVar2[0x4c] = param_1[0x40];
            puVar2[0x4d] = param_1[0x3e];
            puVar2[0x4e] = param_1[0x3f];
            puVar2[0x4f] = param_1[0x40];
            puVar2[0x50] = local_14c;
            puVar2[0x51] = local_148;
            puVar2[0x52] = local_144;
            puVar2[0x53] = local_14c;
            puVar2[0x54] = local_148;
            *(undefined1 *)(puVar2 + 0x56) = 0;
            puVar2[0x55] = local_144;
            DAT_006b9538 = DAT_006b9538 + 1;
            puVar2[0x57] = DAT_006b9538;
            *(undefined1 *)(puVar2 + 0x58) = 0;
            puVar2[0x59] = 0x3f800000;
            puVar2[0x5a] = 0;
            FUN_005844b0();
            local_4._0_1_ = 6;
            FUN_00409810(&DAT_006b3f70,&local_12e);
            puVar2[0x5f] = 0x3ea3d70a;
            puVar2[0x60] = 0x3ff5c28f;
            *puVar2 = &PTR_FUN_0064ec04;
            DAT_006b953c = DAT_006b953c + 1;
            local_4 = CONCAT31(local_4._1_3_,7);
            puVar2[0x42] = 0x437a0000;
            puVar2[0x43] = 0x43700000;
            puVar2[0x44] = 0x43340000;
            puVar2[0x45] = 0x437f0000;
            puVar2[0x46] = 0x43740000;
            puVar2[0x47] = 0x43550000;
            puVar2[0x48] = 0x42cc0000;
            puVar2[0x49] = 0x42700000;
            uVar3 = FUN_005a1d60();
            FUN_0040cc00(uVar3,0,0xffffffff);
          }
          local_4 = 0xffffffff;
          uVar3 = __ftol();
          FUN_004041b0(uVar3);
          puVar2[0x59] = 0x3f800000;
          puVar2[0x5f] = param_1[0x5e];
          puVar2[0x60] = param_1[0x5f];
          puVar2[0x42] = param_1[0x61];
          puVar2[0x43] = param_1[0x62];
          puVar2[0x44] = param_1[99];
          puVar2[0x45] = param_1[100];
          puVar2[0x46] = param_1[0x65];
          puVar2[0x47] = param_1[0x66];
          puVar2[0x48] = param_1[0x67];
          puVar2[0x49] = param_1[0x68];
          if (0 < param_1[0x55]) {
            FUN_004e4780(param_1[0x55]);
          }
          if ((char)param_1[0x5d] != '\0') {
            FUN_0040cc00(param_1 + 0x59,0,0xffffffff);
          }
          FUN_00502350(1);
          piVar4 = (int *)FUN_004042e0(&local_13c);
          local_4 = 8;
          if (*piVar4 == 0) {
            FUN_00409810(&DAT_006b3f70,&local_165);
            local_4._0_1_ = 9;
            pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,local_12c);
            (*pcVar5)();
            local_4 = CONCAT31(local_4._1_3_,8);
            FUN_004040a0(1);
          }
          FUN_004f41c0(puVar2);
          local_4 = 0xffffffff;
          if (local_13c != 0) {
            FUN_004098d0();
            local_13c = 0;
          }
          local_134 = local_134 + 1;
        }
        if ((char)param_1[0x60] != '\0') {
          local_160 = 0x43770000;
          uStack_15c = 0x43740000;
          uStack_158 = 0x41c80000;
          uStack_154 = 0x42c80000;
          local_14c = 252.0;
          local_148 = 250.0;
          local_144 = 219.0;
          uStack_140 = 0x437f0000;
          local_110 = operator_new(500);
          local_4 = 10;
          if (local_110 == (undefined4 *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            uVar3 = FUN_005033f0(auStack_74,s_Spark_006a62b8,s_DynamicLight_0069a348);
            local_11c = 1;
            local_4 = CONCAT31(local_4._1_3_,0xb);
            piVar4 = (int *)FUN_004e22a0(uVar3);
          }
          local_4 = 0xffffffff;
          if ((local_11c & 1) != 0) {
            FUN_004040a0(1);
          }
          uVar3 = __ftol();
          FUN_004e3140(uVar3);
          FUN_004e2c70(param_1[0x3e],param_1[0x3f],param_1[0x40]);
          (**(code **)(*piVar4 + 0x4c))(param_1 + 0x3e);
          FUN_004e3090(&local_14c);
          FUN_00502350(1);
          FUN_004e3180(0x420c0000,0x42c80000);
          auStack_84[0] = local_165;
          FUN_004040a0(0);
          uVar7 = 0xffffffff;
          pcVar9 = &DAT_006a62b4;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar8 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar8 != '\0');
          FUN_004040f0(&DAT_006a62b4,~uVar7 - 1);
          local_4 = 0xd;
          FUN_004e32f0(auStack_84,0x3e0f5c29,1);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
          FUN_004e3290(local_160,uStack_15c,uStack_158,uStack_154,local_14c,local_148,local_144,
                       uStack_140);
          auStack_94[0] = local_165;
          FUN_004040a0(0);
          uVar7 = 0xffffffff;
          pcVar9 = &DAT_006a62b4;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            cVar8 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar8 != '\0');
          FUN_004040f0(&DAT_006a62b4,~uVar7 - 1);
          local_4 = 0xe;
          FUN_004e3490(auStack_94,0x3e0f5c29,1);
          local_4 = 0xffffffff;
          FUN_004040a0(1);
          FUN_004e30d0(0);
          FUN_004e3120(0);
          FUN_004e3100(0);
          piVar6 = (int *)FUN_004042e0(&local_138);
          local_4 = 0xf;
          if (*piVar6 == 0) {
            FUN_00409810(&DAT_006b3f70,&local_165);
            local_4._0_1_ = 0x10;
            pcVar5 = (code *)FUN_005a07f0(s_m_Pointer_0068d62c,s___AdamSource_DaviRC_h_0068d638,0xb6
                                          ,&local_160);
            (*pcVar5)();
            local_4 = CONCAT31(local_4._1_3_,0xf);
            FUN_004040a0(1);
          }
          FUN_004f41c0(piVar4);
          local_4 = 0xffffffff;
          if (local_138 != 0) {
            FUN_004098d0();
            local_138 = 0;
          }
        }
        if ((char)param_1[0x69] != '\0') {
          iVar1 = FUN_0060a4a0();
          switch(iVar1 % 6) {
          case 0:
            puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))(auStack_24);
            uStack_f4 = *puVar2;
            uStack_f0 = puVar2[1];
            uStack_ec = puVar2[2];
            iVar1 = DAT_006c8de0;
            if (DAT_006c8de0 == 0) {
              iVar1 = FUN_0055b280();
            }
            if (*(int *)(iVar1 + 0xfc) == 0) {
              local_160 = CONCAT31(local_160._1_3_,local_165);
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
              local_4 = 0x11;
              pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                            s___AdamSource_AdamEngine_h_0068eb58,399,&local_160);
              (*pcVar5)();
              local_4 = 0xffffffff;
              FUN_004040a0(1);
            }
            FUN_0054ea00(&iStack_108,&DAT_006ba578,&uStack_f4,0,1,0x3f800000,0,0);
            if (iStack_108 != 0) {
              FUN_004098d0();
            }
            break;
          case 1:
            puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))(auStack_18);
            uStack_b8 = *puVar2;
            uStack_b4 = puVar2[1];
            uStack_b0 = puVar2[2];
            iVar1 = DAT_006c8de0;
            if (DAT_006c8de0 == 0) {
              iVar1 = FUN_0055b280();
            }
            if (*(int *)(iVar1 + 0xfc) == 0) {
              local_160 = CONCAT31(local_160._1_3_,local_165);
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
              local_4 = 0x12;
              pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                            s___AdamSource_AdamEngine_h_0068eb58,399,&local_160);
              (*pcVar5)();
              local_4 = 0xffffffff;
              FUN_004040a0(1);
            }
            FUN_0054ea00(&iStack_100,&DAT_006ba550,&uStack_b8,0,1,0x3f800000,0,0);
            if (iStack_100 != 0) {
              FUN_004098d0();
            }
            break;
          case 2:
            puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))(auStack_3c);
            uStack_ac = *puVar2;
            uStack_a8 = puVar2[1];
            uStack_a4 = puVar2[2];
            iVar1 = DAT_006c8de0;
            if (DAT_006c8de0 == 0) {
              iVar1 = FUN_0055b280();
            }
            if (*(int *)(iVar1 + 0xfc) == 0) {
              local_160 = CONCAT31(local_160._1_3_,local_165);
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
              local_4 = 0x13;
              pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                            s___AdamSource_AdamEngine_h_0068eb58,399,&local_160);
              (*pcVar5)();
              local_4 = 0xffffffff;
              FUN_004040a0(1);
            }
            FUN_0054ea00(&iStack_f8,&DAT_006ba528,&uStack_ac,0,1,0x3f800000,0,0);
            if (iStack_f8 != 0) {
              FUN_004098d0();
            }
            break;
          case 3:
            puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))(auStack_54);
            uStack_e8 = *puVar2;
            uStack_e4 = puVar2[1];
            uStack_e0 = puVar2[2];
            iVar1 = DAT_006c8de0;
            if (DAT_006c8de0 == 0) {
              iVar1 = FUN_0055b280();
            }
            if (*(int *)(iVar1 + 0xfc) == 0) {
              local_160 = CONCAT31(local_160._1_3_,local_165);
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
              local_4 = 0x14;
              pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                            s___AdamSource_AdamEngine_h_0068eb58,399,&local_160);
              (*pcVar5)();
              local_4 = 0xffffffff;
              FUN_004040a0(1);
            }
            FUN_0054ea00(&iStack_10c,&DAT_006ba500,&uStack_e8,0,1,0x3f800000,0,0);
            if (iStack_10c != 0) {
              FUN_004098d0();
            }
            break;
          case 4:
            puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))(auStack_48);
            uStack_d0 = *puVar2;
            uStack_cc = puVar2[1];
            uStack_c8 = puVar2[2];
            iVar1 = DAT_006c8de0;
            if (DAT_006c8de0 == 0) {
              iVar1 = FUN_0055b280();
            }
            if (*(int *)(iVar1 + 0xfc) == 0) {
              local_160 = CONCAT31(local_160._1_3_,local_165);
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
              local_4 = 0x15;
              pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                            s___AdamSource_AdamEngine_h_0068eb58,399,&local_160);
              (*pcVar5)();
              local_4 = 0xffffffff;
              FUN_004040a0(1);
            }
            FUN_0054ea00(&iStack_fc,&DAT_006ba4d0,&uStack_d0,0,1,0x3f800000,0,0);
            if (iStack_fc != 0) {
              FUN_004098d0();
            }
            break;
          case 5:
            puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x48))(auStack_30);
            uStack_c4 = *puVar2;
            uStack_c0 = puVar2[1];
            uStack_bc = puVar2[2];
            iVar1 = DAT_006c8de0;
            if (DAT_006c8de0 == 0) {
              iVar1 = FUN_0055b280();
            }
            if (*(int *)(iVar1 + 0xfc) == 0) {
              local_160 = CONCAT31(local_160._1_3_,local_165);
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
              local_4 = 0x16;
              pcVar5 = (code *)FUN_005a07f0(s_m_SoundSystem_0068f8ec,
                                            s___AdamSource_AdamEngine_h_0068eb58,399,&local_160);
              (*pcVar5)();
              local_4 = 0xffffffff;
              FUN_004040a0(1);
            }
            FUN_0054ea00(&iStack_150,&DAT_006ba4a8,&uStack_c4,0,1,0x3f800000,0,0);
            if ((iStack_150 != 0) &&
               (iVar1 = *(int *)(iStack_150 + 0x14) + -1, *(int *)(iStack_150 + 0x14) = iVar1,
               iVar1 == 0)) {
              FUN_005abfc0(0);
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0x4d) = 1;
      *(undefined1 *)(param_1 + 0x4f) = 1;
      param_1[0x4e] = 0;
      iStack_150 = FUN_0060a4a0();
      iStack_150 = iStack_150 % 10000;
      param_1[0x44] = (int)(((float)iStack_150 * 0.0002 + (float)param_1[0x3e]) - 1.0);
      iStack_150 = FUN_0060a4a0();
      iStack_150 = iStack_150 % 10000;
      param_1[0x45] = (int)(((float)iStack_150 * 0.0002 + (float)param_1[0x3f]) - 1.0);
      iStack_150 = FUN_0060a4a0();
      param_1[0x48] = 0;
      iStack_150 = iStack_150 % 10000;
      param_1[0x47] = 0;
      param_1[0x49] = 0x437f0000;
      param_1[0x4a] = 0x437f0000;
      param_1[0x4b] = 0x437f0000;
      param_1[0x4c] = 0x437f0000;
      param_1[0x46] = (int)(((float)iStack_150 * 0.0002 + (float)param_1[0x40]) - 1.0);
    }
    local_9c = param_1[0x45];
    local_a0 = param_1[0x44];
    local_98 = param_1[0x46];
    if (param_3 == -1) {
      uVar7 = 0xffffffff;
      pcVar9 = &DAT_006b3f70;
      do {
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        cVar8 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar8 != '\0');
      local_12c[0] = local_165;
      iStack_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      FUN_004040f0(&DAT_006b3f70,~uVar7 - 1);
      local_4 = 0x17;
      pcVar5 = (code *)FUN_005a07f0(s_a_Time____ADAMTIME_NONE_0068e214,
                                    s___AdamSource_AdamClock_h_0068e22c,0x8a,local_12c);
      (*pcVar5)();
      if (iStack_128 != 0) {
        cVar8 = *(char *)(iStack_128 + -1);
        if ((cVar8 == '\0') || (cVar8 == -1)) {
          FUN_005fe5f0((char *)(iStack_128 + -1));
        }
        else {
          *(char *)(iStack_128 + -1) = cVar8 + -1;
        }
      }
      iStack_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
    }
    FUN_005b3020(local_118 * 0.001,&iStack_dc);
    param_1[0x44] = iStack_dc;
    param_1[0x45] = iStack_d8;
    param_1[0x46] = iStack_d4;
  }
  ExceptionList = local_c;
  return;
}

