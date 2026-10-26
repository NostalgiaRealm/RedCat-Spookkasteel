/*
 * FUN_005ce620 at 005ce620
 * undefined FUN_005ce620(void)
 * Address ranges: 005ce620-005cedf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall
FUN_005ce620(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  int local_124;
  undefined4 *local_120;
  int local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_64 [6];
  undefined4 local_4c;
  undefined4 local_28;
  undefined4 local_4;
  
  local_108 = param_2;
  local_dc = param_1;
  FUN_005c9000();
  if (param_6 != (undefined4 *)0x0) {
    local_d8 = *param_6;
    local_d4 = param_6[1];
    local_d0 = param_6[2];
    local_c8 = param_6[1];
    puVar9 = param_6 + 3;
    local_c4 = param_6[2];
    local_cc = *puVar9;
    local_c0 = *param_6;
    local_b8 = param_6[2];
    local_bc = param_6[4];
    local_b4 = *param_6;
    local_b0 = param_6[1];
    local_ac = param_6[5];
    local_a8 = *puVar9;
    local_a4 = param_6[4];
    local_a0 = param_6[5];
    local_98 = param_6[4];
    local_94 = param_6[5];
    local_9c = *param_6;
    local_90 = *puVar9;
    local_88 = param_6[5];
    local_8c = param_6[1];
    local_84 = *puVar9;
    local_80 = param_6[4];
    local_7c = param_6[2];
    FUN_0059be40();
    FUN_005b2e20(0xd1b866e1,0xd1b866e1,0xd1b866e1);
    FUN_005b2e20(0x51b866e1,0x51b866e1,0x51b866e1);
    puVar9 = &local_d8;
    iVar8 = 8;
    do {
      FUN_005b3470(puVar9);
      FUN_005c9290(&local_114);
      if (local_f8 < local_114) {
        local_f8 = local_114;
      }
      if (local_114 < local_104) {
        local_104 = local_114;
      }
      if (local_f4 < local_110) {
        local_f4 = local_110;
      }
      if (local_110 < local_100) {
        local_100 = local_110;
      }
      if (local_f0 < local_10c) {
        local_f0 = local_10c;
      }
      if (local_10c < local_fc) {
        local_fc = local_10c;
      }
      puVar9 = puVar9 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (local_f8 < (float)local_ec) {
      return 1;
    }
    if ((float)local_e8 < local_104) {
      return 1;
    }
    if (local_f4 < (float)local_e4) {
      return 1;
    }
    if ((float)local_e0 < local_100) {
      return 1;
    }
    if (local_f0 < 1.0) {
      return 1;
    }
    FUN_005c8fe0(&local_118);
    if ((local_124 != 0) && (local_118 < local_fc)) {
      return 1;
    }
  }
  *(int *)(param_3 + 0x33698) = *(int *)(param_3 + 0x33698) + 1;
  FUN_005e0600((float)local_ec,(float)local_e8,(float)local_e4,(float)local_e0,0x3f800000);
  uVar5 = FUN_005d0150();
  FUN_005d0160();
  iVar8 = FUN_005dfee0(uVar5,0,param_5);
  if (iVar8 == 0) {
    FUN_005cf220(0x67,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006aa4ec + 8,0x5e3,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (((((float)local_ec <= *(float *)(iVar8 + 0x1c)) &&
       (local_120 = (undefined4 *)(float)local_e8, *(float *)(iVar8 + 0x28) <= (float)local_120)) &&
      ((float)local_e4 <= *(float *)(iVar8 + 0x20))) &&
     ((*(float *)(iVar8 + 0x2c) <= (float)local_e0 && (1.0 <= *(float *)(iVar8 + 0x24))))) {
    if (((((float)local_120 <= *(float *)(iVar8 + 0x1c)) ||
         ((*(float *)(iVar8 + 0x28) <= (float)local_ec ||
          ((float)local_e0 <= *(float *)(iVar8 + 0x20))))) ||
        (*(float *)(iVar8 + 0x2c) <= (float)local_e4)) ||
       (local_118 = 0.0, *(float *)(iVar8 + 0x30) <= 1.0)) {
      local_118 = 1.4013e-45;
    }
    DAT_007203e0 = *(undefined4 *)(param_1 + 0x30);
    _DAT_007203e4 = *(undefined4 *)(param_1 + 0x18);
    _DAT_007203e8 = *(undefined4 *)(param_1 + 0x1c);
    _DAT_007203ec = *(undefined4 *)(param_1 + 0x20);
    _DAT_007203fc = *(undefined4 *)(param_1 + 0x24);
    _DAT_00720400 = *(undefined4 *)(param_1 + 0x28);
    _DAT_00720404 = *(undefined4 *)(param_1 + 0x2c);
    DAT_00720824 = *(undefined4 *)(param_1 + 0x44);
    FUN_005cf9a0(&local_d8);
    if (*(int *)(param_1 + 0x10) < 1) {
      DAT_00720820 = 0;
    }
    else if (*(int *)(param_1 + 0x44) == 0) {
      DAT_00720820 = FUN_005cdff0(&DAT_00720420,&local_b4);
    }
    else {
      iVar6 = FUN_005e0580();
      iVar10 = 0;
      if (0 < (int)local_120) {
        iVar7 = DAT_006cc5e0;
        puVar9 = DAT_006cc5e4;
        if (((int)DAT_006cc5e4 < (int)local_120) &&
           (iVar7 = FUN_005cf410(DAT_006cc5e0,(int)local_120 * 0x404), puVar9 = local_120,
           iVar7 == 0)) {
          FUN_005cf220(0x67,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006aa4ec + 8,0x62e,
                       &DAT_006b3f70,s_Failed_to_allocate_space_for_bon_006aa524);
          return 0;
        }
        DAT_006cc5e4 = puVar9;
        DAT_006cc5e0 = iVar7;
        local_124 = 0;
        if (0 < (int)local_120) {
          iVar6 = iVar6 + 0x24;
          do {
            uVar5 = FUN_005cdff0(iVar10 + DAT_006cc5e0,iVar6);
            iVar6 = iVar6 + 0x30;
            *(undefined4 *)(iVar10 + 0x400 + DAT_006cc5e0) = uVar5;
            local_124 = local_124 + 1;
            iVar10 = iVar10 + 0x404;
          } while (local_124 < (int)local_120);
        }
      }
    }
    FUN_005ce190(&DAT_00720408,&local_b4);
    local_11c = (int)*(short *)(iVar8 + 0x10);
    local_4c = *(undefined4 *)(param_1 + 0x58);
    psVar12 = *(short **)(iVar8 + 0x18);
    local_28 = local_4c;
    local_4 = local_4c;
    if (0 < local_11c) {
      do {
        iVar6 = *(int *)(iVar8 + 4);
        iVar10 = (int)psVar12[2];
        fVar3 = *(float *)(iVar6 + iVar10 * 0x18);
        fVar4 = *(float *)(iVar6 + 4 + iVar10 * 0x18);
        pfVar1 = (float *)(iVar6 + psVar12[4] * 0x18);
        if ((*(float *)(iVar6 + 4 + psVar12[6] * 0x18) - fVar4) * (*pfVar1 - fVar3) -
            (*(float *)(iVar6 + psVar12[6] * 0x18) - fVar3) * (pfVar1[1] - fVar4) <= 0.0) {
          if (psVar12[1] != -1) {
            local_120 = (undefined4 *)(*(int *)(param_1 + 0xc) + psVar12[1] * 0x1c);
            FUN_005e05c0();
            _DAT_007203f0 = *local_120;
            _DAT_007203f4 = local_120[1];
            _DAT_007203f8 = local_120[2];
          }
          puVar9 = local_64;
          local_124 = 3;
          psVar11 = psVar12 + 2;
          do {
            param_1 = local_dc;
            iVar10 = *(int *)(iVar8 + 0xc);
            psVar12 = psVar11 + 2;
            iVar6 = *(int *)(iVar8 + 4) + *psVar11 * 0x18;
            puVar9[-2] = *(undefined4 *)(*(int *)(iVar8 + 4) + *psVar11 * 0x18);
            puVar9[-1] = *(undefined4 *)(iVar6 + 4);
            *puVar9 = *(undefined4 *)(iVar6 + 8);
            puVar9[1] = *(undefined4 *)(iVar6 + 0xc);
            puVar9[2] = *(undefined4 *)(iVar6 + 0x10);
            puVar2 = (undefined4 *)(iVar10 + psVar11[1] * 0xc);
            _DAT_00720414 = *puVar2;
            _DAT_00720418 = puVar2[1];
            _DAT_0072041c = puVar2[2];
            FUN_005ce3b0(*(undefined4 *)(local_dc + 0x5c));
            puVar9 = puVar9 + 9;
            local_124 = local_124 + -1;
            psVar11 = psVar12;
          } while (local_124 != 0);
          *(int *)(param_3 + 0x3369c) = *(int *)(param_3 + 0x3369c) + 1;
          iVar6 = FUN_005b7e20(2);
          if (iVar6 != 0) {
            if (local_118 == 0.0) {
              FUN_005bba60(3,local_120[4],0);
            }
            else {
              FUN_005e0660();
            }
          }
        }
        else {
          psVar12 = psVar12 + 8;
        }
        local_11c = local_11c + -1;
      } while (local_11c != 0);
    }
    iVar8 = FUN_005b7e20(0x40);
    if ((iVar8 != 0) && (*(int *)(param_1 + 0x48) != 0)) {
      FUN_005cee00(param_3,param_4,param_5);
    }
  }
  return 1;
}

