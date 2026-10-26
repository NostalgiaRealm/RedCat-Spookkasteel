/*
 * FUN_005b55e0 at 005b55e0
 * undefined FUN_005b55e0(void)
 * Address ranges: 005b55e0-005b5910
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b55e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = param_1[4] + param_1[8];
  if (0.0 < fVar1 + *param_1) {
    fVar1 = SQRT(fVar1 + *param_1 + 1.0);
    *param_2 = fVar1 * 0.5;
    fVar1 = 0.5 / fVar1;
    param_2[1] = (param_1[7] - param_1[5]) * fVar1;
    param_2[2] = (param_1[2] - param_1[6]) * fVar1;
    param_2[3] = (param_1[3] - param_1[1]) * fVar1;
    return;
  }
  if (*param_1 <= param_1[4]) {
    iVar3 = 2;
    if (param_1[8] <= *param_1) {
      iVar3 = 1;
    }
  }
  else if (param_1[8] <= *param_1) {
    iVar3 = 0;
  }
  else {
    iVar3 = 2;
  }
  if (iVar3 == 0) {
    fVar1 = SQRT((*param_1 - fVar1) + 1.0);
    if (0.1 < fVar1) {
      param_2[1] = fVar1 * 0.5;
      fVar1 = 0.5 / fVar1;
      *param_2 = (param_1[7] - param_1[5]) * fVar1;
      param_2[2] = (param_1[3] + param_1[1]) * fVar1;
      param_2[3] = (param_1[6] + param_1[2]) * fVar1;
      return;
    }
    fVar1 = SQRT((param_1[8] - (param_1[4] + *param_1)) + 1.0);
    if (0.1 < fVar1) {
      param_2[3] = fVar1 * 0.5;
      fVar1 = 0.5 / fVar1;
      *param_2 = (param_1[3] - param_1[1]) * fVar1;
      param_2[1] = (param_1[6] + param_1[2]) * fVar1;
      param_2[2] = (param_1[7] + param_1[5]) * fVar1;
      return;
    }
    fVar1 = param_1[4] - (*param_1 + param_1[8]);
  }
  else {
    if (iVar3 == 1) {
      fVar2 = SQRT((param_1[4] - (*param_1 + param_1[8])) + 1.0);
      if (fVar2 <= 0.1) {
        fVar2 = SQRT((param_1[8] - (param_1[4] + *param_1)) + 1.0);
        if (0.1 < fVar2) {
          param_2[3] = fVar2 * 0.5;
          fVar2 = 0.5 / fVar2;
          *param_2 = (param_1[3] - param_1[1]) * fVar2;
          param_2[1] = (param_1[6] + param_1[2]) * fVar2;
          param_2[2] = (param_1[7] + param_1[5]) * fVar2;
          return;
        }
        fVar1 = SQRT((*param_1 - fVar1) + 1.0);
        if (fVar1 <= 0.1) {
          return;
        }
        param_2[1] = fVar1 * 0.5;
        fVar1 = 0.5 / fVar1;
        *param_2 = (param_1[7] - param_1[5]) * fVar1;
        param_2[2] = (param_1[3] + param_1[1]) * fVar1;
        param_2[3] = (param_1[6] + param_1[2]) * fVar1;
        return;
      }
      goto LAB_005b58dc;
    }
    if (iVar3 != 2) {
      return;
    }
    fVar2 = SQRT((param_1[8] - (param_1[4] + *param_1)) + 1.0);
    if (0.1 < fVar2) {
      param_2[3] = fVar2 * 0.5;
      fVar2 = 0.5 / fVar2;
      *param_2 = (param_1[3] - param_1[1]) * fVar2;
      param_2[1] = (param_1[6] + param_1[2]) * fVar2;
      param_2[2] = (param_1[7] + param_1[5]) * fVar2;
      return;
    }
    fVar1 = SQRT((*param_1 - fVar1) + 1.0);
    if (0.1 < fVar1) {
      param_2[1] = fVar1 * 0.5;
      fVar1 = 0.5 / fVar1;
      *param_2 = (param_1[7] - param_1[5]) * fVar1;
      param_2[2] = (param_1[3] + param_1[1]) * fVar1;
      param_2[3] = (param_1[6] + param_1[2]) * fVar1;
      return;
    }
    fVar1 = param_1[4] - (*param_1 + param_1[8]);
  }
  fVar2 = SQRT(fVar1 + 1.0);
  if (fVar2 <= 0.1) {
    return;
  }
LAB_005b58dc:
  param_2[2] = fVar2 * 0.5;
  fVar2 = 0.5 / fVar2;
  *param_2 = (param_1[2] - param_1[6]) * fVar2;
  param_2[3] = (param_1[7] + param_1[5]) * fVar2;
  param_2[1] = (param_1[3] + param_1[1]) * fVar2;
  return;
}

