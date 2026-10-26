/*
 * FUN_005b34f0 at 005b34f0
 * undefined FUN_005b34f0(void)
 * Address ranges: 005b34f0-005b35a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b34f0(float *param_1,int param_2,int param_3,int param_4)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (0 < param_4) {
    param_2 = param_2 + param_4 * 0xc;
    param_3 = param_3 + param_4 * 0xc;
    param_4 = param_4 * -0xc;
    do {
      fVar1 = *(float *)(param_2 + param_4);
      fVar2 = param_1[3];
      fVar3 = *(float *)(param_2 + 4 + param_4);
      fVar4 = param_1[4];
      fVar5 = *(float *)(param_2 + 8 + param_4);
      fVar6 = param_1[5];
      fVar7 = *(float *)(param_2 + param_4);
      fVar8 = param_1[6];
      fVar9 = *(float *)(param_2 + 4 + param_4);
      fVar10 = param_1[7];
      fVar11 = *(float *)(param_2 + 8 + param_4);
      fVar12 = param_1[8];
      fVar13 = param_1[10];
      fVar14 = param_1[0xb];
      *(float *)(param_3 + param_4) =
           *(float *)(param_2 + 8 + param_4) * param_1[2] +
           *(float *)(param_2 + 4 + param_4) * param_1[1] + *(float *)(param_2 + param_4) * *param_1
           + param_1[9];
      *(float *)(param_3 + 4 + param_4) = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar13;
      *(float *)(param_3 + 8 + param_4) = fVar9 * fVar10 + fVar7 * fVar8 + fVar11 * fVar12 + fVar14;
      param_4 = param_4 + 0xc;
    } while (param_4 != 0);
  }
  return;
}

