/*
 * FUN_005818a0 at 005818a0
 * undefined FUN_005818a0(void)
 * Address ranges: 005818a0-00582215
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_005818a0(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  undefined1 *puVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 extraout_ECX;
  uint uVar15;
  undefined4 extraout_ECX_00;
  undefined4 uVar16;
  undefined4 extraout_ECX_01;
  int *extraout_ECX_02;
  char *pcVar17;
  float10 fVar18;
  int *piStack_ac;
  undefined4 local_90;
  undefined1 local_88 [4];
  char *pcStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 *local_78;
  int *local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [12];
  undefined1 auStack_34 [12];
  undefined1 local_28 [4];
  int iStack_24;
  undefined1 auStack_1c [16];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006425ae;
  local_c = ExceptionList;
  local_50 = 0;
  if (*(int *)(param_1 + 0x17c) < 0x20) {
    if (*(int *)(*(int *)(param_1 + 0xf8) + 0x18) == 0) {
      puVar5 = (undefined4 *)(*(int *)(*(int *)(param_1 + 0xf8) + 0x20) + 0x2c);
      ExceptionList = &local_c;
    }
    else {
      _piStack_ac = (double)CONCAT44(local_28,0x5818f0);
      ExceptionList = &local_c;
      puVar5 = (undefined4 *)FUN_00581750();
    }
    local_6c = *puVar5;
    _piStack_ac = 3.42061804494245e-317;
    local_68 = puVar5[1];
    local_64 = puVar5[2];
    local_60 = puVar5[3];
    iVar7 = *(int *)(*(int *)(param_1 + 0xf8) + 0x20);
    uVar9 = *(undefined4 *)(iVar7 + 0x2c);
    uVar1 = *(undefined4 *)(iVar7 + 0x30);
    local_80 = *(undefined4 *)(iVar7 + 0x34);
    local_7c = *(undefined4 *)(iVar7 + 0x38);
    *(undefined4 *)(iVar7 + 0x2c) = local_6c;
    *(undefined4 *)(iVar7 + 0x30) = local_68;
    *(undefined4 *)(iVar7 + 0x34) = local_64;
    *(undefined4 *)(iVar7 + 0x38) = local_60;
    FUN_0057ae50();
    piVar6 = (int *)FUN_0060a6f2();
    iVar7 = *(int *)(*(int *)(param_1 + 0xf8) + 0x20);
    *(undefined4 *)(iVar7 + 0x2c) = uVar9;
    *(undefined4 *)(iVar7 + 0x30) = uVar1;
    *(undefined4 *)(iVar7 + 0x34) = local_80;
    *(undefined4 *)(iVar7 + 0x38) = local_7c;
    local_74 = piVar6;
    if (piVar6 == (int *)0x0) {
      _piStack_ac = 2.85261251080719e-317;
      FUN_004040a0();
      uVar14 = 0xffffffff;
      pcVar17 = s_CAdamEffectPlanetoid__AddOnePlan_006a55ac;
      do {
        if (uVar14 == 0) break;
        uVar14 = uVar14 - 1;
        cVar4 = *pcVar17;
        pcVar17 = pcVar17 + 1;
      } while (cVar4 != '\0');
      _piStack_ac = (double)CONCAT44(~uVar14 - 1,s_CAdamEffectPlanetoid__AddOnePlan_006a55ac);
      FUN_004040f0();
      local_4 = 0;
      _piStack_ac = (double)CONCAT44(local_88,0x5819e9);
      FUN_005035a0();
      local_4 = 0xffffffff;
      _piStack_ac = 2.12484843855474e-314;
      uVar14 = FUN_004040a0();
      uVar14 = uVar14 & 0xffffff00;
    }
    else {
      local_90 = CONCAT31(local_90._1_3_,*(undefined1 *)(param_1 + 0x7c));
      _piStack_ac = (double)CONCAT44(local_90,0x581a19);
      FUN_00502350();
      do {
        _piStack_ac = (double)CONCAT44(0x581a1e,piStack_ac);
        iVar7 = FUN_0060a4a0();
        local_4c = (float)(iVar7 % 10000) * 0.0002 - 1.0;
        _piStack_ac = (double)CONCAT44(0x581a43,piStack_ac);
        iVar7 = FUN_0060a4a0();
        local_48 = (float)(iVar7 % 10000) * 0.0002 - 1.0;
        _piStack_ac = (double)CONCAT44(0x581a68,piStack_ac);
        iVar7 = FUN_0060a4a0();
        local_44 = (float)(iVar7 % 10000) * 0.0002 - 1.0;
        _piStack_ac = (double)CONCAT44(0x581a91,piStack_ac);
        fVar18 = (float10)FUN_005b2fd0();
        local_70 = (float)fVar18;
      } while (fVar18 < (float10)0.001);
      fVar2 = *(float *)(*(int *)(param_1 + 0xf8) + 0x28);
      fVar3 = *(float *)(*(int *)(param_1 + 0xf8) + 0x2c);
      _piStack_ac = (double)CONCAT44(0x581ac3,piStack_ac);
      iVar7 = FUN_0060a4a0();
      local_78 = (undefined1 *)(iVar7 % 10000);
      _piStack_ac = (double)CONCAT44(((fVar3 - fVar2) * (float)(int)local_78 * 0.0001 + fVar2) /
                                     local_70,0x581afa);
      FUN_005b2fa0();
      _piStack_ac = (double)CONCAT44(local_40,0x581b0f);
      FUN_005b3000();
      _piStack_ac = (double)CONCAT44(local_40,0x581b1b);
      (**(code **)(*piVar6 + 0x4c))();
      _piStack_ac = 1.3581058341314e-312;
      puVar8 = operator_new(0x40);
      local_4 = 1;
      puVar5 = (undefined4 *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        _piStack_ac = (double)CONCAT44(0x581b41,piStack_ac);
        FUN_005ab4a0();
        puVar8[5] = piVar6;
        puVar8[6] = piVar6;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        local_4 = CONCAT31(local_4._1_3_,2);
        puVar8[10] = 0x411ccccd;
        _piStack_ac = -NAN;
        FUN_004041b0();
        puVar8[0xf] = 0;
        *puVar8 = &PTR_FUN_0064fcdc;
        puVar5 = puVar8;
      }
      local_4 = 0xffffffff;
      local_78 = *(undefined1 **)(*(int *)(param_1 + 0xf8) + 0x34);
      fVar2 = *(float *)(*(int *)(param_1 + 0xf8) + 0x30);
      _piStack_ac = (double)CONCAT44(0x581b98,piStack_ac);
      iVar7 = FUN_0060a4a0();
      puVar5[10] = ((float)local_78 - fVar2) * (float)(iVar7 % 10000) * 0.0001 + fVar2;
      do {
        _piStack_ac = (double)CONCAT44(0x581bc4,piStack_ac);
        iVar7 = FUN_0060a4a0();
        fStack_5c = (float)(iVar7 % 10000) * 0.0002 - 1.0;
        _piStack_ac = (double)CONCAT44(0x581be9,piStack_ac);
        iVar7 = FUN_0060a4a0();
        fStack_58 = (float)(iVar7 % 10000) * 0.0002 - 1.0;
        _piStack_ac = (double)CONCAT44(0x581c0e,piStack_ac);
        iVar7 = FUN_0060a4a0();
        fStack_54 = (float)(iVar7 % 10000) * 0.0002 - 1.0;
        _piStack_ac = (double)CONCAT44(0x581c37,piStack_ac);
        fVar18 = (float10)FUN_005b2fd0();
        local_70 = (float)fVar18;
        _piStack_ac = (double)CONCAT44(auStack_34,0x581c52);
        FUN_005b2fe0();
        _piStack_ac = (double)CONCAT44(0x581c5f,piStack_ac);
        FUN_005b2e40();
      } while (local_70 < 0.001);
      fVar2 = *(float *)(*(int *)(param_1 + 0xf8) + 0x38);
      local_78 = *(undefined1 **)(*(int *)(param_1 + 0xf8) + 0x3c);
      _piStack_ac = (double)CONCAT44(0x581c93,piStack_ac);
      iVar7 = FUN_0060a4a0();
      _piStack_ac = (double)CONCAT44((((float)local_78 - fVar2) * (float)(iVar7 % 10000) * 0.0001 +
                                     fVar2) / local_70,0x581cca);
      FUN_005b2fa0();
      puVar5[7] = fStack_5c;
      puVar5[8] = fStack_58;
      puVar5[9] = fStack_54;
      if (*(int *)(*(int *)(param_1 + 0xf8) + 0x1c) != 0) {
        _piStack_ac = 2.12202432121089e-312;
        local_78 = operator_new(100);
        local_4 = 3;
        if (local_78 == (void *)0x0) {
          uVar9 = 0;
          uVar16 = extraout_ECX;
        }
        else {
          _piStack_ac = 2.85304778264118e-317;
          FUN_004040a0();
          uVar14 = 0xffffffff;
          pcVar17 = s_PlanetoidTrail_006a559c;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar4 = *pcVar17;
            pcVar17 = pcVar17 + 1;
          } while (cVar4 != '\0');
          uVar14 = ~uVar14 - 1;
          _piStack_ac = (double)CONCAT44(1,uVar14);
          cVar4 = FUN_00401940();
          if (cVar4 != '\0') {
            pcVar17 = s_PlanetoidTrail_006a559c;
            for (uVar15 = uVar14 >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
              *(undefined4 *)pcStack_84 = *(undefined4 *)pcVar17;
              pcVar17 = pcVar17 + 4;
              pcStack_84 = pcStack_84 + 4;
            }
            for (uVar15 = uVar14 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
              *pcStack_84 = *pcVar17;
              pcVar17 = pcVar17 + 1;
              pcStack_84 = pcStack_84 + 1;
            }
            _piStack_ac = (double)CONCAT44(uVar14,0x581d73);
            FUN_00404190();
          }
          local_50 = 1;
          local_4 = CONCAT31(local_4._1_3_,4);
          _piStack_ac = (double)CONCAT44(local_88,0x581d93);
          uVar9 = FUN_00586b40();
          uVar16 = extraout_ECX_00;
          piVar6 = local_74;
        }
        puVar5[0xf] = uVar9;
        local_4 = 0xffffffff;
        if ((local_50 & 1) != 0) {
          _piStack_ac = 2.1248489108815e-314;
          FUN_004040a0();
          uVar16 = extraout_ECX_01;
        }
        if (puVar5[0xf] != 0) {
          piStack_ac = (int *)&DAT_006c90b0;
          FUN_00454200();
          FUN_0047d800();
          FUN_0050d730();
          local_4 = 0xffffffff;
          piStack_ac = (int *)0x581df4;
          FUN_00582220();
          _piStack_ac = (double)CONCAT44(uVar16,0x581dfb);
          FUN_00587100();
          if (puVar5[0xf] == 0) {
            _piStack_ac = 2.85316438213359e-317;
            FUN_004040a0();
            uVar14 = 0xffffffff;
            pcVar17 = &DAT_006b3f70;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar4 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar4 != '\0');
            _piStack_ac = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
            FUN_004040f0();
            local_4 = 7;
            _piStack_ac = (double)CONCAT44(local_88,0x32);
            pcVar10 = (code *)FUN_005a07f0(s_m_Trail__0_006a555c,
                                           s_D__Work_RCHorror_AdamSource_Adam_006a5568);
            (*pcVar10)();
            local_4 = 0xffffffff;
            _piStack_ac = 2.12484899981331e-314;
            FUN_004040a0();
            piVar6 = local_74;
          }
          iVar7 = puVar5[0xf];
          *(undefined4 *)(iVar7 + 0x40) = local_6c;
          *(undefined4 *)(iVar7 + 0x44) = local_68;
          *(undefined4 *)(iVar7 + 0x48) = local_64;
          *(undefined4 *)(iVar7 + 0x4c) = local_60;
          if (puVar5[0xf] == 0) {
            _piStack_ac = 2.85323997417741e-317;
            FUN_004040a0();
            uVar14 = 0xffffffff;
            pcVar17 = &DAT_006b3f70;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar4 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar4 != '\0');
            _piStack_ac = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
            FUN_004040f0();
            local_4 = 8;
            _piStack_ac = (double)CONCAT44(local_88,0x32);
            pcVar10 = (code *)FUN_005a07f0(s_m_Trail__0_006a555c,
                                           s_D__Work_RCHorror_AdamSource_Adam_006a5568);
            (*pcVar10)();
            local_4 = 0xffffffff;
            _piStack_ac = 2.12484907540536e-314;
            FUN_004040a0();
            piVar6 = local_74;
          }
          *(undefined4 *)(puVar5[0xf] + 0x50) = 0x3fcccccd;
          if (puVar5[0xf] == 0) {
            _piStack_ac = 2.85330420271137e-317;
            FUN_004040a0();
            uVar14 = 0xffffffff;
            pcVar17 = &DAT_006b3f70;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar4 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar4 != '\0');
            _piStack_ac = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
            FUN_004040f0();
            local_4 = 9;
            _piStack_ac = (double)CONCAT44(local_88,0x32);
            pcVar10 = (code *)FUN_005a07f0(s_m_Trail__0_006a555c,
                                           s_D__Work_RCHorror_AdamSource_Adam_006a5568);
            (*pcVar10)();
            local_4 = 0xffffffff;
            _piStack_ac = 2.12484913963389e-314;
            FUN_004040a0();
            piVar6 = local_74;
          }
          *(undefined4 *)(puVar5[0xf] + 0x3c) = 0x3f75c28f;
          if (puVar5[0xf] == 0) {
            _piStack_ac = 2.85336843124533e-317;
            FUN_004040a0();
            uVar14 = 0xffffffff;
            pcVar17 = &DAT_006b3f70;
            do {
              if (uVar14 == 0) break;
              uVar14 = uVar14 - 1;
              cVar4 = *pcVar17;
              pcVar17 = pcVar17 + 1;
            } while (cVar4 != '\0');
            _piStack_ac = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
            FUN_004040f0();
            local_4 = 10;
            _piStack_ac = (double)CONCAT44(local_88,0x32);
            pcVar10 = (code *)FUN_005a07f0(s_m_Trail__0_006a555c,
                                           s_D__Work_RCHorror_AdamSource_Adam_006a5568);
            (*pcVar10)();
            local_4 = 0xffffffff;
            _piStack_ac = 2.12484920386243e-314;
            FUN_004040a0();
            piVar6 = local_74;
          }
          *(undefined4 *)(puVar5[0xf] + 0x58) = 800;
          if (*(int *)(param_1 + 0x17c) == 0) {
            if (puVar5[0xf] == 0) {
              _piStack_ac = 2.85343760043574e-317;
              FUN_004040a0();
              uVar14 = 0xffffffff;
              pcVar17 = &DAT_006b3f70;
              do {
                if (uVar14 == 0) break;
                uVar14 = uVar14 - 1;
                cVar4 = *pcVar17;
                pcVar17 = pcVar17 + 1;
              } while (cVar4 != '\0');
              _piStack_ac = (double)CONCAT44(~uVar14 - 1,&DAT_006b3f70);
              FUN_004040f0();
              local_4 = 0xb;
              _piStack_ac = (double)CONCAT44(local_88,0x32);
              pcVar10 = (code *)FUN_005a07f0(s_m_Trail__0_006a555c,
                                             s_D__Work_RCHorror_AdamSource_Adam_006a5568);
              (*pcVar10)();
              local_4 = 0xffffffff;
              _piStack_ac = 2.12484927303162e-314;
              FUN_004040a0();
              piVar6 = local_74;
            }
            *(undefined1 *)(puVar5[0xf] + 0x39) = 1;
          }
        }
      }
      _piStack_ac = (double)CONCAT44(puVar5 + 6,piVar6);
      *(undefined4 **)(param_1 + 0xfc + *(int *)(param_1 + 0x17c) * 4) = puVar5;
      FUN_00509a90();
      piStack_ac = (int *)&stack0xffffff58;
      FUN_004042e0();
      local_78 = (undefined1 *)&piStack_ac;
      local_4 = 0xc;
      piStack_ac = extraout_ECX_02;
      FUN_00457240();
      local_4 = 0xffffffff;
      FUN_00582fe0();
      if (*(int *)(param_1 + 0x17c) == 0) {
        _piStack_ac = (double)CONCAT44(0x582109,piStack_ac);
        iVar11 = FUN_005193b0();
        iVar7 = *(int *)(iVar11 + 100);
        if (iVar7 == -0x80000000) {
          puVar12 = *(undefined1 **)(iVar11 + 0x18);
          if (puVar12 == (undefined1 *)0x0) {
            puVar12 = &DAT_0064a3b4;
          }
          _piStack_ac = (double)CONCAT44(puVar12,0x582127);
          iVar7 = FUN_0060af10();
          *(int *)(iVar11 + 100) = iVar7;
        }
        if (iVar7 != 0) {
          iVar7 = *(int *)(param_1 + 0xfc);
          piVar6 = *(int **)(iVar7 + 0x14);
          _piStack_ac = (double)*(float *)(iVar7 + 0x24);
          iVar7 = (**(code **)(*piVar6 + 0x48))
                            (auStack_34,(double)*(float *)(iVar7 + 0x1c),
                             (double)*(float *)(iVar7 + 0x20));
          iVar7 = (**(code **)(*piVar6 + 0x48))(auStack_1c,(double)*(float *)(iVar7 + 8));
          pfVar13 = (float *)(**(code **)(*piVar6 + 0x48))(&local_74,(double)*(float *)(iVar7 + 4));
          uVar9 = FUN_005ae390(local_28,s_Added_planetoid_atPosition____f__006a551c,(double)*pfVar13
                              );
          local_4 = 0xd;
          FUN_005aff00(uVar9);
          if (iStack_24 != 0) {
            cVar4 = *(char *)(iStack_24 + -1);
            if ((cVar4 == '\0') || (cVar4 == -1)) {
              _piStack_ac = (double)CONCAT44((char *)(iStack_24 + -1),0x5821e9);
              FUN_005fe5f0();
            }
            else {
              *(char *)(iStack_24 + -1) = cVar4 + -1;
            }
          }
        }
      }
      iVar7 = *(int *)(param_1 + 0x17c) + 1;
      *(int *)(param_1 + 0x17c) = iVar7;
      uVar14 = CONCAT31((int3)((uint)iVar7 >> 8),1);
    }
  }
  else {
    uVar14 = (uint)ExceptionList & 0xffffff00;
  }
  ExceptionList = local_c;
  return uVar14;
}

