/*
 * FUN_005e0ab0 at 005e0ab0
 * undefined FUN_005e0ab0(void)
 * Address ranges: 005e0ab0-005e0c8a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e0ab0(float *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = 0.0;
  fVar1 = 1.0 / param_2[2];
  fVar2 = 1.0 / param_3[2];
  switch(param_4) {
  case 0:
    fVar3 = (1.0 / DAT_0070f8c0 - fVar2) / (fVar1 - fVar2);
    *param_1 = (*param_2 - *param_3) * fVar3 + *param_3;
    param_1[1] = (param_2[1] - param_3[1]) * fVar3 + param_3[1];
    param_1[2] = DAT_0070f8c0;
    goto switchD_005e0ae3_default;
  case 1:
    fVar3 = (DAT_0070f8b0 - *param_3) / (*param_2 - *param_3);
    fVar4 = DAT_0070f8b0;
    break;
  case 2:
    fVar3 = (DAT_0070f8b4 - *param_3) / (*param_2 - *param_3);
    fVar4 = DAT_0070f8b4;
    break;
  case 3:
    fVar3 = (DAT_0070f8b8 - param_3[1]) / (param_2[1] - param_3[1]);
    *param_1 = (*param_2 - *param_3) * fVar3 + *param_3;
    fVar4 = DAT_0070f8b8;
    goto LAB_005e0bb4;
  case 4:
    fVar3 = (DAT_0070f8bc - param_3[1]) / (param_2[1] - param_3[1]);
    *param_1 = (*param_2 - *param_3) * fVar3 + *param_3;
    fVar4 = DAT_0070f8bc;
LAB_005e0bb4:
    param_1[1] = fVar4;
    goto LAB_005e0bb7;
  default:
    goto switchD_005e0ae3_default;
  }
  *param_1 = fVar4;
  param_1[1] = (param_2[1] - param_3[1]) * fVar3 + param_3[1];
LAB_005e0bb7:
  param_1[2] = 1.0 / ((fVar1 - fVar2) * fVar3 + fVar2);
switchD_005e0ae3_default:
  fVar2 = fVar2 * param_1[2];
  fVar1 = fVar1 * param_1[2] * fVar3;
  fVar3 = fVar3 * fVar2;
  param_1[5] = (fVar2 * param_3[5] + fVar1 * param_2[5]) - fVar3 * param_3[5];
  param_1[6] = (fVar2 * param_3[6] + fVar1 * param_2[6]) - fVar3 * param_3[6];
  param_1[7] = (fVar2 * param_3[7] + fVar1 * param_2[7]) - fVar3 * param_3[7];
  param_1[8] = (fVar2 * param_3[8] + fVar1 * param_2[8]) - fVar3 * param_3[8];
  param_1[3] = (fVar2 * param_3[3] + fVar1 * param_2[3]) - fVar3 * param_3[3];
  param_1[4] = (fVar2 * param_3[4] + fVar1 * param_2[4]) - fVar3 * param_3[4];
  return;
}

