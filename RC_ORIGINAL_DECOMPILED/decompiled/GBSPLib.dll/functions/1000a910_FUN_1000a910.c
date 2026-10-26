/*
 * FUN_1000a910 at 1000a910
 * undefined FUN_1000a910(void)
 * Address ranges: 1000a910-1000b09c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000a910(void)

{
  byte bVar1;
  int iVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  bool bVar11;
  float10 fVar12;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  puVar9 = &DAT_102487d0;
  for (iVar8 = 25000; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  DAT_10265cdc = 0;
  local_60 = 0;
  local_70 = 0;
  if (0 < DAT_10311d00) {
    puVar9 = &DAT_10265cf8;
    do {
      puVar7 = puVar9 + 4;
      if (puVar9[0x18] != 0) {
        if (4999 < DAT_10265cdc + 1) goto LAB_1000af82;
        puVar4 = (undefined4 *)FUN_1000a810();
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
        FUN_1000b280(puVar9,s_Color_10038510,&local_5c);
        if (((local_5c == 0.0) && (local_58 == 0.0)) && (local_54 == 0.0)) {
          local_5c = 1.0;
          local_58 = 1.0;
          local_54 = 1.0;
        }
        else {
          FUN_1000c090(&local_5c);
        }
        puVar4[2] = puVar9[0x14];
        puVar4[3] = puVar9[0x15];
        puVar4[4] = puVar9[0x16];
        puVar4[9] = local_5c;
        puVar4[10] = local_58;
        puVar4[0xb] = local_54;
        puVar4[0xc] = (float)(int)puVar9[0x18] * _DAT_10037ab4;
        puVar4[1] = puVar9[0x19];
        iVar8 = FUN_1000b1d0(puVar9,s_Angles_10038508);
        if (iVar8 != 0) {
          local_50 = local_44 * 0.0055555557 * 3.1415927;
          local_4c = local_40 * 0.0055555557 * 3.1415927;
          local_48 = local_3c * 0.0055555557 * 3.1415927;
          FUN_10015f40();
          FUN_10015f20();
          puVar4[5] = -local_50;
          puVar4[6] = -local_4c;
          puVar4[7] = -local_48;
          fVar12 = (float10)FUN_1000b1b0(puVar9);
          fVar12 = (float10)fcos(fVar12 * (float10)0.017453292);
          puVar4[8] = (float)fVar12;
        }
        iVar8 = FUN_100332c0(puVar7);
        if (iVar8 == 0) {
          puVar4[0xd] = 1;
        }
        else {
          iVar8 = FUN_100332c0(puVar7);
          if (iVar8 == 0) {
            puVar4[0xd] = 2;
          }
          else {
            iVar8 = FUN_100332c0(puVar7);
            if (iVar8 == 0) {
              puVar4[0xd] = 4;
              *(undefined1 *)(puVar4 + 0x12) = 0;
              uVar5 = FUN_1000b0e0(puVar9,s_DaviName_100384e0);
              iVar8 = FUN_100332c0(uVar5);
              if (iVar8 != 0) {
                uVar5 = FUN_1000b0e0(puVar9);
                iVar8 = FUN_1000a880(uVar5,&DAT_100384dc);
                if (iVar8 != 0) {
                  *(undefined1 *)(puVar4 + 0x12) = 1;
                  local_6c = local_6c + 1;
                }
              }
              *(undefined1 *)((int)puVar4 + 0x49) = 0;
              if (*(char *)(puVar4 + 0x12) != '\0') {
                uVar5 = FUN_1000b0e0(puVar9,s_DaviName_100384e0);
                iVar8 = FUN_100332c0(uVar5);
                if (iVar8 != 0) {
                  uVar5 = FUN_1000b0e0(puVar9);
                  iVar8 = FUN_1000a880(uVar5,s_visible_100384d4);
                  if (iVar8 != 0) {
                    *(undefined1 *)((int)puVar4 + 0x49) = 1;
                    local_68 = local_68 + 1;
                  }
                }
              }
              if ((float)puVar4[0xf] < 0.0) {
                (*DAT_1014e35c)(s__WARNING__Invalid_Sun__s__f__100384b4,s_DaviName_100384e0,
                                (double)(float)puVar4[0xf]);
                puVar4[0xf] = 0x42000000;
              }
              pbVar10 = &DAT_10265ce0;
              pbVar6 = (byte *)FUN_1000b0e0(puVar9);
              do {
                bVar1 = *pbVar6;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_1000ac46:
                  iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_1000ac4b;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar6[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_1000ac46;
                pbVar6 = pbVar6 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar8 = 0;
LAB_1000ac4b:
              if (iVar8 == 0) {
                (*DAT_1014e35c)(s__WARNING__Sun_has_no__s__1003846c);
                puVar4[0xe] = 0;
              }
              else {
                uVar5 = FUN_1000b0e0(puVar9);
                iVar8 = FUN_10028309(uVar5);
                puVar4[0xe] = iVar8;
                if ((iVar8 < 0) || (3 < iVar8)) {
                  (*DAT_1014e35c)(s__WARNING__Invalid_Sun__s__d__10038488,s_FallOffType_100384a8);
                }
                if (puVar4[0xe] == 0) {
                  local_64 = local_64 + 1;
                }
              }
              uVar5 = FUN_1000b0e0(puVar9,s_FallOffRadiusInTexels_10038454);
              iVar8 = FUN_100332c0(uVar5);
              if (iVar8 == 0) {
                (*DAT_1014e35c)(s__WARNING__Sun_has_no__s__1003846c);
                puVar4[0xf] = 0x42000000;
              }
              else {
                fVar12 = (float10)FUN_1000b1b0(puVar9);
                puVar4[0xf] = (float)fVar12;
              }
              if ((float)puVar4[0xf] < 0.0) {
                (*DAT_1014e35c)(s__WARNING__Invalid_Sun__s__f__100384b4,
                                s_FallOffRadiusInTexels_10038454,(double)(float)puVar4[0xf]);
                puVar4[0xf] = 0x42000000;
              }
              uVar5 = FUN_1000b0e0(puVar9,s_FallOffRadiusTopIntensity_10038438);
              iVar8 = FUN_100332c0(uVar5);
              if (iVar8 == 0) {
                (*DAT_1014e35c)(s__WARNING__Sun_has_no__s__1003846c);
                puVar4[0x10] = 0;
              }
              else {
                fVar12 = (float10)FUN_1000b1b0(puVar9);
                puVar4[0x10] = (float)fVar12;
              }
              if (((float)puVar4[0x10] < 0.0) || ((float)puVar4[0xf] < (float)puVar4[0x10])) {
                (*DAT_1014e35c)(s__WARNING__Invalid_Sun__s__f__100384b4,
                                s_FallOffRadiusTopIntensity_10038438,(double)(float)puVar4[0x10]);
                puVar4[0x10] = 0;
              }
              uVar5 = FUN_1000b0e0(puVar9,s_FallOffSecretNumber_10038424);
              iVar8 = FUN_100332c0(uVar5);
              if (iVar8 == 0) {
                (*DAT_1014e35c)(s__WARNING__Sun_has_no__s__1003846c);
                puVar4[0x11] = 0x3f800000;
              }
              else {
                fVar12 = (float10)FUN_1000b1b0(puVar9);
                puVar4[0x11] = (float)fVar12;
              }
              if (((float)puVar4[0x11] < 0.0) || (100.0 < (float)puVar4[0x11])) {
                (*DAT_1014e35c)(s__ERROR__Invalid_Sun__s__f__10038408,s_FallOffSecretNumber_10038424
                                ,(double)(float)puVar4[0x11]);
                puVar4[0x11] = 0x3f800000;
              }
            }
          }
        }
        iVar8 = FUN_1000a690();
        iVar8 = *(int *)(DAT_1014e258 + 0x2c + iVar8 * 0x3c);
        if (iVar8 < 0) {
          (*DAT_1014e35c)();
        }
        else if (iVar8 < 25000) {
          *puVar4 = (&DAT_102487d0)[iVar8];
          (&DAT_102487d0)[iVar8] = puVar4;
          (&DAT_10260e94)[DAT_10265cdc] = puVar4;
          DAT_10265cdc = DAT_10265cdc + 1;
        }
        else {
          (*DAT_1014e35c)();
        }
      }
      local_70 = local_70 + 1;
      puVar9 = puVar9 + 0x2b;
    } while (local_70 < DAT_10311d00);
  }
  (*DAT_1014e35c)(s_Num_Normal_Lights____5i_10038388,DAT_10265cdc);
  (*DAT_1014e35c)(s_Num_RGB_only_Lights____5i_10038368,local_6c);
  (*DAT_1014e35c)(s_Num_RGB_Always_Visible_Lights_____10038340,local_68);
  (*DAT_1014e35c)(s_Num_Suns_with_fallofftype_0____5_1003831c,local_64);
  if (DAT_10037ac4 == 0) {
    return 1;
  }
  local_70 = 0;
  if (0 < DAT_1014e2c0) {
    local_64 = 0;
    do {
      iVar8 = *(int *)(local_64 + 0x10 + DAT_1014e288) * 0x40 + DAT_1014e2fc;
      if ((*(byte *)(iVar8 + 0x28) & 8) != 0) {
        for (puVar9 = *(undefined4 **)(DAT_1031303c + local_70 * 4); puVar9 != (undefined4 *)0x0;
            puVar9 = (undefined4 *)*puVar9) {
          iVar2 = *(int *)(DAT_1014e258 + 0x2c + puVar9[5] * 0x3c);
          if (-1 < iVar2) {
            if (iVar2 < 25000) {
              if (4999 < DAT_10265cdc + 1) goto LAB_1000af82;
              puVar7 = (undefined4 *)FUN_1000a810();
              if (puVar7 == (undefined4 *)0x0) {
                return 0;
              }
              puVar7[2] = puVar9[2];
              puVar7[3] = puVar9[3];
              puVar7[4] = puVar9[4];
              puVar7[9] = puVar9[0x1b];
              puVar7[10] = puVar9[0x1c];
              puVar7[0xb] = puVar9[0x1d];
              puVar7[5] = puVar9[7];
              puVar7[6] = puVar9[8];
              uVar5 = puVar9[9];
              puVar7[0xd] = 3;
              puVar7[7] = uVar5;
              fVar3 = *(float *)(iVar8 + 0x2c) * (float)puVar9[6];
              puVar7[0xc] = fVar3;
              FUN_100145a0(fVar3,puVar9 + 0x18);
              *puVar7 = (&DAT_102487d0)[iVar2];
              (&DAT_102487d0)[iVar2] = puVar7;
              (&DAT_10260e94)[DAT_10265cdc] = puVar7;
              DAT_10265cdc = DAT_10265cdc + 1;
              local_60 = local_60 + 1;
            }
            else {
              (*DAT_1014e35c)();
            }
          }
        }
      }
      local_70 = local_70 + 1;
      local_64 = local_64 + 0x24;
    } while (local_70 < DAT_1014e2c0);
  }
LAB_1000af90:
  (*DAT_1014e35c)(s_Num_Surf_Lights____5i_100382ac,local_60);
  return 1;
LAB_1000af82:
  (*DAT_1014e35c)();
  goto LAB_1000af90;
}

