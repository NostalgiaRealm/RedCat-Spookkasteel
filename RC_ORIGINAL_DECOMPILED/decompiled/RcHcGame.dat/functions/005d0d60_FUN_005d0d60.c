/*
 * FUN_005d0d60 at 005d0d60
 * undefined FUN_005d0d60(void)
 * Address ranges: 005d0d60-005d0f0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005d0d60(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 int param_6,int *param_7)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  bool bVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float local_c;
  int local_8;
  int local_4;
  
  pfVar8 = param_2 + 2;
  local_c = *param_1 * *param_2 + param_2[2] * param_1[2] + param_2[1] * param_1[1];
  pfVar11 = param_3;
  if (0 < param_6) {
    local_4 = 1;
    pfVar9 = param_4;
    bVar7 = param_1[3] <= local_c;
    do {
      local_8 = local_4;
      if (local_4 == param_6) {
        local_8 = 0;
      }
      pfVar10 = pfVar11;
      if (bVar7 != false) {
        pfVar10 = pfVar11 + 3;
        *pfVar11 = pfVar8[-2];
        pfVar11[1] = pfVar8[-1];
        pfVar11[2] = *pfVar8;
        *param_5 = *pfVar9;
        param_5[1] = pfVar9[1];
        param_5 = param_5 + 6;
      }
      pfVar1 = param_2 + local_8 * 3;
      fVar4 = *param_1 * *pfVar1 +
              param_2[local_8 * 3 + 2] * param_1[2] + param_2[local_8 * 3 + 1] * param_1[1];
      fVar2 = param_1[3];
      pfVar11 = pfVar10;
      if (bVar7 != fVar2 <= fVar4) {
        pfVar11 = pfVar10 + 3;
        fVar5 = (param_1[3] - local_c) / (fVar4 - local_c);
        *pfVar10 = (*pfVar1 - pfVar8[-2]) * fVar5 + pfVar8[-2];
        pfVar10[1] = (pfVar1[1] - pfVar8[-1]) * fVar5 + pfVar8[-1];
        pfVar10[2] = (pfVar1[2] - *pfVar8) * fVar5 + *pfVar8;
        *param_5 = (param_4[local_8 * 6] - *pfVar9) * fVar5 + *pfVar9;
        param_5[1] = ((param_4 + local_8 * 6)[1] - pfVar9[1]) * fVar5 + pfVar9[1];
        param_5 = param_5 + 6;
      }
      pfVar8 = pfVar8 + 3;
      pfVar9 = pfVar9 + 6;
      bVar3 = local_4 < param_6;
      local_c = fVar4;
      local_4 = local_4 + 1;
      bVar7 = fVar2 <= fVar4;
    } while (bVar3);
  }
  iVar6 = ((int)pfVar11 - (int)param_3) / 0xc;
  *param_7 = iVar6;
  return 2 < iVar6;
}

