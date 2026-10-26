/*
 * FUN_005d1300 at 005d1300
 * undefined FUN_005d1300(void)
 * Address ranges: 005d1300-005d14c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_005d1300(float *param_1,float *param_2,float *param_3,int param_4,float *param_5,
                 int param_6,int *param_7)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float local_c;
  int local_8;
  int local_4;
  
  pfVar8 = param_2 + 2;
  local_c = *pfVar8 * param_1[2] + *param_1 * *param_2 + param_2[1] * param_1[1];
  pfVar11 = param_3;
  if (0 < param_6) {
    pfVar9 = (float *)(param_4 + 0xc);
    local_8 = 1;
    pfVar13 = param_5;
    bVar6 = param_1[3] <= local_c;
    do {
      local_4 = local_8;
      if (local_8 == param_6) {
        local_4 = 0;
      }
      pfVar10 = pfVar11;
      pfVar12 = pfVar13;
      if (bVar6 != false) {
        pfVar10 = pfVar11 + 3;
        *pfVar11 = pfVar8[-2];
        pfVar11[1] = pfVar8[-1];
        pfVar11[2] = *pfVar8;
        pfVar12 = param_5 + 6;
        pfVar11 = pfVar9 + -3;
        for (iVar7 = 6; param_5 = pfVar12, iVar7 != 0; iVar7 = iVar7 + -1) {
          *pfVar13 = *pfVar11;
          pfVar11 = pfVar11 + 1;
          pfVar13 = pfVar13 + 1;
        }
      }
      pfVar1 = param_2 + local_4 * 3;
      iVar7 = param_4 + local_4 * 0x18;
      fVar4 = *param_1 * *pfVar1 + param_1[1] * pfVar1[1] + param_1[2] * pfVar1[2];
      fVar2 = param_1[3];
      pfVar11 = pfVar10;
      pfVar13 = pfVar12;
      if (bVar6 != fVar2 <= fVar4) {
        pfVar11 = pfVar10 + 3;
        pfVar13 = pfVar12 + 6;
        fVar5 = (param_1[3] - local_c) / (fVar4 - local_c);
        *pfVar10 = (*pfVar1 - pfVar8[-2]) * fVar5 + pfVar8[-2];
        pfVar10[1] = (pfVar1[1] - pfVar8[-1]) * fVar5 + pfVar8[-1];
        pfVar10[2] = (pfVar1[2] - *pfVar8) * fVar5 + *pfVar8;
        pfVar12[2] = (*(float *)(iVar7 + 8) - pfVar9[-1]) * fVar5 + pfVar9[-1];
        pfVar12[3] = (*(float *)(iVar7 + 0xc) - *pfVar9) * fVar5 + *pfVar9;
        pfVar12[4] = (*(float *)(iVar7 + 0x10) - pfVar9[1]) * fVar5 + pfVar9[1];
        param_5 = pfVar13;
      }
      pfVar8 = pfVar8 + 3;
      pfVar9 = pfVar9 + 6;
      bVar3 = local_8 < param_6;
      local_c = fVar4;
      local_8 = local_8 + 1;
      bVar6 = fVar2 <= fVar4;
    } while (bVar3);
  }
  iVar7 = ((int)pfVar11 - (int)param_3) / 0xc;
  *param_7 = iVar7;
  return 2 < iVar7;
}

