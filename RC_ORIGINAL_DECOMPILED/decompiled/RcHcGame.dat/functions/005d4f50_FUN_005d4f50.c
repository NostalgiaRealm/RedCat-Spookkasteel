/*
 * FUN_005d4f50 at 005d4f50
 * undefined FUN_005d4f50(void)
 * Address ranges: 005d4f50-005d5244
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d4f50(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float *local_5c;
  float local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined1 local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar3 = *(int *)(param_1 + 300);
  local_48 = 0;
  if (0 < *(int *)(param_1 + 0x188)) {
    local_50 = 0;
    iVar9 = *(int *)(param_1 + 0x1c0);
    do {
      iVar8 = local_50 + *(int *)(param_1 + 0x130);
      iVar10 = *(int *)(iVar8 + 0x10) * 0x40 + *(int *)(param_1 + 0x150);
      FUN_005b2e60(local_30);
      FUN_005b2f20();
      local_54 = *(float *)(iVar3 + 0xc + *(int *)(iVar8 + 8) * 0x14);
      if (*(int *)(iVar8 + 0xc) != 0) {
        FUN_005b3080();
        local_54 = -local_54;
      }
      fVar11 = (float10)FUN_005b2e40();
      if (fVar11 < (float10)0.0) {
        FUN_005b3080();
        fVar11 = -(float10)(float)fVar11;
      }
      pfVar1 = (float *)(iVar9 + 0x1c);
      local_4c = 2;
      local_5c = pfVar1;
      do {
        fVar12 = (float10)FUN_005b2fd0();
        fVar13 = (float10)FUN_005b2e40();
        FUN_005b3020((float)-(fVar13 * (float10)(float)((float10)1.0 / fVar11)),local_5c);
        FUN_005b2fa0((1.0 / (float)fVar12) * (1.0 / (float)fVar12));
        local_5c = local_5c + 3;
        local_4c = local_4c + -1;
      } while (local_4c != 0);
      pfVar2 = (float *)(iVar9 + 0x28);
      iVar8 = 3;
      pfVar7 = pfVar2;
      do {
        iVar8 = iVar8 + -1;
        pfVar7[3] = -(pfVar7[-3] * *(float *)(iVar10 + 8)) - *pfVar7 * *(float *)(iVar10 + 0x14);
        pfVar7 = pfVar7 + 1;
      } while (iVar8 != 0);
      pfVar7 = (float *)(iVar9 + 0x34);
      fVar12 = (float10)FUN_005b2e40();
      FUN_005b3020((float)-(((fVar12 - (float10)local_54) - (float10)1.0) *
                           (float10)(float)((float10)1.0 / fVar11)),pfVar7);
      fVar5 = (float)*(int *)(iVar9 + 4);
      fVar4 = (float)*(int *)(iVar9 + 8);
      local_24 = fVar5 * *pfVar1 + fVar4 * *pfVar2 + *pfVar7;
      local_20 = fVar5 * *(float *)(iVar9 + 0x20) + fVar4 * *(float *)(iVar9 + 0x2c) +
                 *(float *)(iVar9 + 0x38);
      local_1c = fVar5 * *(float *)(iVar9 + 0x24) + fVar4 * *(float *)(iVar9 + 0x30) +
                 *(float *)(iVar9 + 0x3c);
      fVar6 = fVar5 + 16.0;
      local_18 = fVar6 * *pfVar1 + fVar4 * *pfVar2 + *pfVar7;
      local_14 = fVar6 * *(float *)(iVar9 + 0x20) + fVar4 * *(float *)(iVar9 + 0x2c) +
                 *(float *)(iVar9 + 0x38);
      local_10 = fVar6 * *(float *)(iVar9 + 0x24) + fVar4 * *(float *)(iVar9 + 0x30) +
                 *(float *)(iVar9 + 0x3c);
      fVar4 = fVar4 + 16.0;
      local_c = fVar5 * *pfVar1 + fVar4 * *pfVar2 + *pfVar7;
      local_8 = fVar5 * *(float *)(iVar9 + 0x20) + fVar4 * *(float *)(iVar9 + 0x2c) +
                *(float *)(iVar9 + 0x38);
      local_4 = fVar5 * *(float *)(iVar9 + 0x24) + fVar4 * *(float *)(iVar9 + 0x30) +
                *(float *)(iVar9 + 0x3c);
      FUN_005b2fe0(pfVar1);
      FUN_005b2fe0(pfVar2);
      *pfVar7 = local_24;
      *(float *)(iVar9 + 0x38) = local_20;
      *(float *)(iVar9 + 0x3c) = local_1c;
      local_48 = local_48 + 1;
      local_50 = local_50 + 0x24;
      iVar9 = iVar9 + 0x88;
    } while (local_48 < *(int *)(param_1 + 0x188));
  }
  return;
}

