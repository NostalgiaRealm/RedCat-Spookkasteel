/*
 * FUN_005d0f10 at 005d0f10
 * undefined FUN_005d0f10(void)
 * Address ranges: 005d0f10-005d10f0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005d0f10(float *param_1,float *param_2,float *param_3,int param_4,float *param_5,
                 int param_6,int *param_7)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float local_10;
  int local_c;
  int local_8;
  
  pfVar10 = param_2 + 2;
  local_10 = *param_1 * *param_2 + param_2[2] * param_1[2] + param_2[1] * param_1[1];
  pfVar12 = param_3;
  if (0 < param_6) {
    pfVar9 = (float *)(param_4 + 8);
    local_c = 1;
    bVar7 = param_1[3] <= local_10;
    do {
      local_8 = local_c;
      if (local_c == param_6) {
        local_8 = 0;
      }
      pfVar11 = param_5;
      pfVar13 = pfVar12;
      if (bVar7 != false) {
        pfVar13 = pfVar12 + 3;
        *pfVar12 = pfVar10[-2];
        pfVar11 = param_5 + 6;
        pfVar12[1] = pfVar10[-1];
        pfVar12[2] = *pfVar10;
        pfVar12 = pfVar9 + -2;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *param_5 = *pfVar12;
          pfVar12 = pfVar12 + 1;
          param_5 = param_5 + 1;
        }
      }
      pfVar1 = param_2 + local_8 * 3;
      pfVar2 = (float *)(param_4 + local_8 * 0x18);
      fVar5 = param_1[1] * pfVar1[1] + pfVar1[2] * param_1[2] + *param_1 * *pfVar1;
      fVar3 = param_1[3];
      param_5 = pfVar11;
      pfVar12 = pfVar13;
      if (bVar7 != fVar3 <= fVar5) {
        pfVar12 = pfVar13 + 3;
        param_5 = pfVar11 + 6;
        fVar6 = (param_1[3] - local_10) / (fVar5 - local_10);
        *pfVar13 = (*pfVar1 - pfVar10[-2]) * fVar6 + pfVar10[-2];
        pfVar13[1] = (pfVar1[1] - pfVar10[-1]) * fVar6 + pfVar10[-1];
        pfVar13[2] = (pfVar1[2] - *pfVar10) * fVar6 + *pfVar10;
        *pfVar11 = (*pfVar2 - pfVar9[-2]) * fVar6 + pfVar9[-2];
        pfVar11[1] = (pfVar2[1] - pfVar9[-1]) * fVar6 + pfVar9[-1];
        pfVar11[2] = (pfVar2[2] - *pfVar9) * fVar6 + *pfVar9;
        pfVar11[3] = (pfVar2[3] - pfVar9[1]) * fVar6 + pfVar9[1];
        pfVar11[4] = (pfVar2[4] - pfVar9[2]) * fVar6 + pfVar9[2];
      }
      pfVar10 = pfVar10 + 3;
      pfVar9 = pfVar9 + 6;
      bVar4 = local_c < param_6;
      local_10 = fVar5;
      local_c = local_c + 1;
      bVar7 = fVar3 <= fVar5;
    } while (bVar4);
  }
  iVar8 = ((int)pfVar12 - (int)param_3) / 0xc;
  *param_7 = iVar8;
  return 2 < iVar8;
}

