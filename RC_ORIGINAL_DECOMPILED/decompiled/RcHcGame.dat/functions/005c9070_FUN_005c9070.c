/*
 * FUN_005c9070 at 005c9070
 * undefined FUN_005c9070(void)
 * Address ranges: 005c9070-005c91da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005c9070(float *param_1,int *param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  unkbyte10 Var9;
  float local_c;
  
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  local_c = (float)(param_2[1] - *param_2) + 1.0;
  param_1[1] = local_c;
  fVar4 = (float)(iVar3 - iVar2) + 1.0;
  *param_1 = param_3;
  param_1[2] = fVar4;
  if ((param_3 < 0.0001) && (-0.0001 < param_3)) {
    *param_1 = 0.0001;
  }
  param_3 = 1.0 / param_3;
  if (local_c <= 0.0) {
    local_c = 0.0001;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0001;
  }
  fVar6 = param_3 * local_c;
  fVar5 = param_3 * fVar4;
  param_1[7] = fVar6;
  param_1[8] = fVar5;
  fVar1 = fVar5;
  if (fVar5 < fVar6) {
    fVar1 = fVar6;
  }
  param_1[9] = fVar1;
  param_1[3] = (float)*param_2;
  param_1[4] = (float)param_2[1];
  param_1[5] = (float)param_2[2];
  param_1[6] = (float)param_2[3];
  param_1[10] = (local_c * 0.5 + param_1[3]) - 0.5;
  param_1[0xb] = (fVar4 * 0.5 + param_1[5]) - 0.5;
  fVar7 = (float10)fVar1 * (float10)param_3 + (float10)fVar1 * (float10)param_3;
  Var9 = fpatan(fVar7 / (float10)fVar6,(float10)1);
  fVar8 = (float10)fcos(Var9);
  param_1[0x44] = (float)fVar8;
  fVar8 = (float10)fsin(Var9);
  param_1[0x43] = (float)fVar8;
  Var9 = fpatan(fVar7 / (float10)fVar5,(float10)1);
  fVar7 = (float10)fcos(Var9);
  param_1[0x46] = (float)fVar7;
  fVar7 = (float10)fsin(Var9);
  param_1[0x45] = (float)fVar7;
  return;
}

