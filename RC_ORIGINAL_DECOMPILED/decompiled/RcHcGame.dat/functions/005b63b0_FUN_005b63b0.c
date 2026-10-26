/*
 * FUN_005b63b0 at 005b63b0
 * undefined FUN_005b63b0(void)
 * Address ranges: 005b63b0-005b69d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005b63b0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float10 fVar13;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  int local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0 [2];
  float local_a8;
  float local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float local_8c;
  float local_84;
  float local_80;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_24 [9];
  
  if (0 < DAT_00722f24) {
    pfVar7 = (float *)(param_2 + 4);
    *(undefined4 *)(param_2 + 0x9c) = 4;
    local_e0 = *(float *)(param_2 + 8);
    pfVar11 = pfVar7;
    pfVar12 = (float *)(param_2 + 0x70);
    for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_e4 = *pfVar7;
    pfVar11 = pfVar7;
    pfVar12 = (float *)(param_2 + 0x4c);
    for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    local_dc = *(float *)(param_2 + 0xc);
    pfVar11 = pfVar7;
    pfVar12 = (float *)(param_2 + 0x28);
    for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    pfVar11 = pfVar7;
    pfVar12 = local_24;
    for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar12 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar12 = pfVar12 + 1;
    }
    FUN_005c9470();
    FUN_005b3630();
    FUN_005b3650();
    fVar2 = *(float *)(param_2 + 0xac) * 0.5;
    iVar10 = FUN_0059b220();
    iVar6 = FUN_0059b230();
    FUN_005b2fa0((float)iVar10 * fVar2);
    FUN_005b2fa0((float)iVar6 * fVar2);
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    *pfVar7 = (local_e4 - local_c0) + local_d0;
    *(float *)(param_2 + 8) = (local_e0 - local_bc) + local_cc;
    *(float *)(param_2 + 0xc) = (local_dc - local_b8) + local_c8;
    *(undefined4 *)(param_2 + 0x38) = 0;
    *(undefined4 *)(param_2 + 0x34) = 0x3f800000;
    *(float *)(param_2 + 0x28) = local_d0 + local_c0 + local_e4;
    *(float *)(param_2 + 0x2c) = local_cc + local_bc + local_e0;
    *(float *)(param_2 + 0x30) = local_c8 + local_b8 + local_dc;
    *(undefined4 *)(param_2 + 0x58) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x5c) = 0x3f800000;
    *(float *)(param_2 + 0x4c) = (local_c0 + local_e4) - local_d0;
    *(float *)(param_2 + 0x50) = (local_bc + local_e0) - local_cc;
    *(float *)(param_2 + 0x54) = (local_b8 + local_dc) - local_c8;
    *(undefined4 *)(param_2 + 0x7c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x80) = 0;
    *(float *)(param_2 + 0x70) = (local_e4 - local_c0) - local_d0;
    *(float *)(param_2 + 0x74) = (local_e0 - local_bc) - local_cc;
    *(float *)(param_2 + 0x78) = (local_dc - local_b8) - local_c8;
    FUN_005b69e0(param_1,param_2,param_3,param_4);
    *(undefined4 *)(param_2 + 0x9c) = 1;
    pfVar11 = local_24;
    for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
      *pfVar7 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar7 = pfVar7 + 1;
    }
    return 1;
  }
  local_e4 = *(float *)(param_2 + 4);
  local_e0 = *(float *)(param_2 + 8);
  local_dc = *(float *)(param_2 + 0xc);
  FUN_005c9410(&local_c0);
  FUN_005c9290(&local_e4);
  pfVar7 = local_b0;
  iVar10 = 4;
  do {
    pfVar7[-1] = local_e4;
    *pfVar7 = local_e0;
    pfVar7[1] = local_dc;
    pfVar7[4] = *(float *)(param_2 + 0x18);
    pfVar7[5] = *(float *)(param_2 + 0x1c);
    pfVar7[6] = *(float *)(param_2 + 0x20);
    pfVar7[7] = *(float *)(param_2 + 0x24);
    pfVar7 = pfVar7 + 9;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  if (1.0 <= -local_b8) {
    FUN_005c9000();
    local_d8 = (float)(int)local_d0;
    fVar2 = (float)(int)local_cc + 1.0;
    local_d4 = (float)(int)local_c8;
    fVar3 = (float)local_c4 + 1.0;
    fVar13 = (float10)FUN_005c9060();
    local_f0 = (float)((fVar13 / (float10)-local_b8) * (float10)*(float *)(param_2 + 0xac));
    iVar10 = FUN_0059b220();
    local_e8 = (float)iVar10 * local_f0;
    iVar10 = FUN_0059b230();
    local_80 = *(float *)(param_2 + 0x14);
    local_3c = *(float *)(param_2 + 0x10);
    local_f0 = (float)iVar10 * local_f0;
    fVar4 = local_e8 * 0.5;
    fVar5 = local_f0 * 0.5;
    local_b4 = local_b4 - fVar4;
    local_b0[0] = local_b0[0] - fVar5;
    local_90 = local_90 + fVar4;
    local_8c = local_8c - fVar5;
    local_6c = local_6c + fVar4;
    local_68 = local_68 + fVar5;
    local_48 = local_48 - fVar4;
    local_44 = local_44 + fVar5;
    local_60 = *(float *)(param_2 + 0x10) + 1.0;
    local_38 = *(float *)(param_2 + 0x14) + 1.0;
    if (local_b4 < local_d8) {
      if (local_90 <= local_d8) {
        return 1;
      }
      fVar4 = local_d8 - local_b4;
      local_b4 = local_d8;
      fVar5 = fVar4 / local_e8;
      local_48 = local_d8;
      local_e8 = local_e8 - fVar4;
      local_3c = fVar5 + local_3c;
    }
    if (local_b0[0] < local_d4) {
      if (local_68 <= local_d4) {
        return 1;
      }
      fVar4 = local_d4 - local_b0[0];
      local_b0[0] = local_d4;
      fVar5 = fVar4 / local_f0;
      local_8c = local_d4;
      local_f0 = local_f0 - fVar4;
      local_80 = fVar5 + local_80;
    }
    if (fVar2 <= local_90) {
      if (fVar2 <= local_b4) {
        return 1;
      }
      local_60 = local_60 - (local_90 - fVar2) / local_e8;
      local_90 = fVar2 - 1.0;
      local_6c = local_90;
    }
    if (fVar3 <= local_68) {
      if (fVar3 <= local_b0[0]) {
        return 1;
      }
      local_38 = local_38 - (local_68 - fVar3) / local_f0;
      local_68 = fVar3 - 1.0;
      local_44 = local_68;
    }
    local_9c = *(undefined4 *)(param_2 + 0x1c);
    local_a0 = *(undefined4 *)(param_2 + 0x18);
    local_94 = *(undefined4 *)(param_2 + 0x24);
    uVar1 = *(uint *)(param_2 + 0xa8);
    local_98 = *(undefined4 *)(param_2 + 0x20);
    uVar8 = ((int)(char)uVar1 & 1U) << 3;
    if ((uVar1 & 2) != 0) {
      uVar8 = uVar8 | 4;
    }
    if (*(int *)(param_2 + 0x24) != 0x437f0000) {
      uVar8 = uVar8 | 1;
    }
    if ((uVar1 & 8) != 0) {
      uVar8 = uVar8 | 2;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar8 = uVar8 | 0x10;
    }
    local_a8 = local_3c;
    local_a4 = local_80;
    local_84 = local_60;
    local_5c = local_38;
    uVar9 = FUN_00453600(uVar8);
    (**(code **)(param_1 + 0x80))(uVar9);
  }
  return 1;
}

