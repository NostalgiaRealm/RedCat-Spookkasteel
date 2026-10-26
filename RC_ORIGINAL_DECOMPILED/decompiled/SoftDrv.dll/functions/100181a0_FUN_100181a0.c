/*
 * FUN_100181a0 at 100181a0
 * undefined FUN_100181a0(void)
 * Address ranges: 100181a0-100187dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100181a0(float *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float local_8;
  float local_4;
  
  fVar9 = *param_2 - param_2[0x12];
  fVar4 = param_2[1] - param_2[0x13];
  fVar5 = param_2[9] - param_2[0x12];
  fVar6 = param_2[10] - param_2[0x13];
  fVar7 = fVar5 * fVar4 - fVar6 * fVar9;
  if (fVar7 == 0.0) {
    return 0;
  }
  fVar7 = 1.0 / fVar7;
  fVar10 = -(float10)fVar7;
  if (param_2[9] <= param_2[0x12]) {
    fVar8 = param_2[0x12];
  }
  else {
    fVar8 = param_2[9];
  }
  if (*param_2 <= fVar8) {
    if (param_2[9] <= param_2[0x12]) {
      local_8 = param_2[0x12];
    }
    else {
      local_8 = param_2[9];
    }
  }
  else {
    local_8 = *param_2;
  }
  if (param_2[0x12] <= param_2[9]) {
    fVar8 = param_2[0x12];
  }
  else {
    fVar8 = param_2[9];
  }
  if (fVar8 <= *param_2) {
    if (param_2[0x12] <= param_2[9]) {
      local_4 = param_2[0x12];
    }
    else {
      local_4 = param_2[9];
    }
  }
  else {
    local_4 = *param_2;
  }
  if (param_2[0x13] <= param_2[10]) {
    fVar8 = param_2[0x13];
  }
  else {
    fVar8 = param_2[10];
  }
  if (fVar8 <= param_2[1]) {
    if (param_2[0x13] <= param_2[10]) {
      fVar8 = param_2[0x13];
    }
    else {
      fVar8 = param_2[10];
    }
  }
  else {
    fVar8 = param_2[1];
  }
  if (param_2[10] <= param_2[0x13]) {
    fVar1 = param_2[0x13];
  }
  else {
    fVar1 = param_2[10];
  }
  if (param_2[1] <= fVar1) {
    if (param_2[10] <= param_2[0x13]) {
      fVar1 = param_2[0x13];
    }
    else {
      fVar1 = param_2[10];
    }
  }
  else {
    fVar1 = param_2[1];
  }
  fVar2 = fVar1 - fVar8;
  if (fVar1 - fVar8 < local_8 - local_4) {
    fVar2 = local_8 - local_4;
  }
  if (_DAT_1020e898 <= fVar2) {
    param_1[0x11] = 0.0;
  }
  else {
    param_1[0x11] = 1.4013e-45;
  }
  if ((DAT_1020e4e0 & 0x101) != 0) {
    if (param_2[0xb] <= param_2[0x14]) {
      fVar8 = param_2[0x14];
    }
    else {
      fVar8 = param_2[0xb];
    }
    if (param_2[2] <= fVar8) {
      if (param_2[0xb] <= param_2[0x14]) {
        local_8 = param_2[0x14];
      }
      else {
        local_8 = param_2[0xb];
      }
    }
    else {
      local_8 = param_2[2];
    }
    if (param_2[0x14] <= param_2[0xb]) {
      fVar8 = param_2[0x14];
    }
    else {
      fVar8 = param_2[0xb];
    }
    if (fVar8 <= param_2[2]) {
      if (param_2[0x14] <= param_2[0xb]) {
        fVar8 = param_2[0x14];
      }
      else {
        fVar8 = param_2[0xb];
      }
    }
    else {
      fVar8 = param_2[2];
    }
    if (local_8 - fVar8 <= 255.0) {
      if (80.0 <= fVar8) {
        if (500.0 < local_8) {
          local_8 = 500.0;
        }
        param_1[0x1e] = local_8;
      }
      else {
        param_1[0x1e] = fVar8;
      }
    }
    else {
      param_1[0x1e] = fVar8;
    }
    if (param_1[0x11] == 0.0) {
      *param_1 = param_1[0x1e] / param_2[2];
      param_1[1] = param_1[0x1e] / param_2[0xb];
      fVar8 = param_1[0x1e] / param_2[0x14];
    }
    else {
      fVar8 = 1.0 / param_1[0x1e];
      *param_1 = fVar8 * param_2[2];
      param_1[1] = fVar8 * param_2[0xb];
      fVar8 = fVar8 * param_2[0x14];
    }
    param_1[2] = fVar8;
    param_1[9] = (float)((((float10)param_1[1] - (float10)param_1[2]) * (float10)fVar4 -
                         ((float10)*param_1 - (float10)param_1[2]) * (float10)fVar6) *
                        (float10)fVar7);
    param_1[10] = (float)((((float10)param_1[1] - (float10)param_1[2]) * (float10)fVar9 -
                          ((float10)*param_1 - (float10)param_1[2]) * (float10)fVar5) * fVar10);
    fVar8 = (float)__ftol();
    param_1[0x18] = fVar8;
    fVar8 = (float)__ftol();
    param_1[0x1f] = fVar8;
    fVar10 = extraout_ST0;
  }
  if ((DAT_1020e4e0 & 1) != 0) {
    param_1[3] = param_3 * param_2[3] + 0.5;
    param_1[6] = param_4 * param_2[4] + 0.5;
    param_1[4] = param_3 * param_2[0xc] + 0.5;
    param_1[7] = param_4 * param_2[0xd] + 0.5;
    param_1[5] = param_3 * param_2[0x15] + 0.5;
    param_1[8] = param_4 * param_2[0x16] + 0.5;
    if (param_1[0x11] == 0.0) {
      param_1[3] = *param_1 * param_1[3];
      param_1[6] = param_1[6] * *param_1;
      param_1[4] = param_1[4] * param_1[1];
      param_1[7] = param_1[1] * param_1[7];
      param_1[5] = param_1[5] * param_1[2];
      param_1[8] = param_1[8] * param_1[2];
    }
    param_1[0xb] = (float)((((float10)param_1[4] - (float10)param_1[5]) * (float10)fVar4 -
                           ((float10)param_1[3] - (float10)param_1[5]) * (float10)fVar6) *
                          (float10)fVar7);
    param_1[0xc] = (float)((((float10)param_1[4] - (float10)param_1[5]) * (float10)fVar9 -
                           ((float10)param_1[3] - (float10)param_1[5]) * (float10)fVar5) * fVar10);
    param_1[0xd] = (float)((((float10)param_1[7] - (float10)param_1[8]) * (float10)fVar4 -
                           ((float10)param_1[6] - (float10)param_1[8]) * (float10)fVar6) *
                          (float10)fVar7);
    param_1[0xe] = (float)((((float10)param_1[7] - (float10)param_1[8]) * (float10)fVar9 -
                           ((float10)param_1[6] - (float10)param_1[8]) * (float10)fVar5) * fVar10);
    fVar8 = (float)__ftol();
    param_1[0x19] = fVar8;
    fVar8 = (float)__ftol();
    param_1[0x1a] = fVar8;
    fVar10 = extraout_ST0_00;
  }
  if ((DAT_1020e4e0 & 2) != 0) {
    fVar8 = param_2[5];
    fVar1 = param_2[0x17];
    fVar2 = param_2[0xe];
    fVar3 = param_2[0x17];
    param_1[0x12] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar4 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar6) * (float10)fVar7);
    param_1[0x13] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar9 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar5) * fVar10);
    fVar8 = param_2[6];
    fVar1 = param_2[0x18];
    fVar2 = param_2[0xf];
    fVar3 = param_2[0x18];
    param_1[0x14] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar4 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar6) * (float10)fVar7);
    param_1[0x15] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar9 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar5) * fVar10);
    fVar8 = param_2[7];
    fVar1 = param_2[0x19];
    fVar2 = param_2[0x10];
    fVar3 = param_2[0x19];
    param_1[0x16] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar4 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar6) * (float10)fVar7);
    param_1[0x17] =
         (float)((((float10)fVar2 - (float10)fVar3) * (float10)fVar9 -
                 ((float10)fVar8 - (float10)fVar1) * (float10)fVar5) * fVar10);
    fVar9 = (float)__ftol();
    param_1[0x1b] = fVar9;
    fVar9 = (float)__ftol();
    param_1[0x1c] = fVar9;
    fVar9 = (float)__ftol();
    param_1[0x1d] = fVar9;
  }
  if (param_1[0x11] != 0.0) {
    param_1[0x18] = (float)(((int)param_1[0x1f] >> 8) * ((int)param_1[0x18] >> 10));
    param_1[0x19] = (float)((int)param_1[0x19] >> 4);
    param_1[0x1a] = (float)((int)param_1[0x1a] >> 4);
    return 1;
  }
  fVar9 = ABS(param_1[9]) + ABS(param_1[10]);
  if ((DAT_1020e4e0 & 8) == 0) {
    if (fVar9 < 0.0005) {
      param_1[0xf] = 1.79366e-43;
      param_1[0x10] = 9.80909e-45;
      return 1;
    }
    if (fVar9 < 0.001) {
      param_1[0xf] = 8.96831e-44;
      param_1[0x10] = 8.40779e-45;
      return 1;
    }
    if (fVar9 < 0.005) {
      param_1[0xf] = 4.48416e-44;
      param_1[0x10] = 7.00649e-45;
      return 1;
    }
  }
  param_1[0xf] = 2.24208e-44;
  param_1[0x10] = 5.60519e-45;
  return 1;
}

