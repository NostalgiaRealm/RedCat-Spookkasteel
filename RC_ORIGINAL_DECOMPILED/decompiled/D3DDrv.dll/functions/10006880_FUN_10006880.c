/*
 * FUN_10006880 at 10006880
 * int __cdecl FUN_10006880(int param_1, int param_2, float param_3, float param_4, float param_5)
 * Address ranges: 10006880-1000696a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __cdecl FUN_10006880(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  
  fVar6 = param_5;
  if (param_5 == 0.0) {
    return 0;
  }
  param_5 = 999999.0;
  if (0 < param_2) {
    pfVar9 = (float *)(param_1 + 0xc);
    iVar10 = 1;
    do {
      iVar7 = iVar10;
      if (param_2 <= iVar10) {
        iVar7 = 0;
      }
      fVar8 = *(float *)(param_1 + iVar7 * 0x24) - pfVar9[-3];
      iVar1 = param_1 + iVar7 * 0x24;
      fVar5 = *(float *)(param_1 + 4 + iVar7 * 0x24) - pfVar9[-2];
      fVar4 = (*(float *)(iVar1 + 0xc) - *pfVar9) * param_3;
      fVar3 = (*(float *)(iVar1 + 0x10) - pfVar9[1]) * param_4;
      fVar8 = (fVar4 * fVar4 + fVar3 * fVar3) / (fVar8 * fVar8 + fVar5 * fVar5);
      if (fVar8 < param_5) {
        param_5 = fVar8;
      }
      pfVar9 = pfVar9 + 9;
      bVar2 = iVar10 < param_2;
      iVar10 = iVar10 + 1;
    } while (bVar2);
    if (param_5 <= 4.0) {
      fVar8 = 0.0;
      goto LAB_10006962;
    }
    if (param_5 <= 15.0) {
      fVar8 = 1.4013e-45;
      goto LAB_10006962;
    }
    fVar8 = 2.8026e-45;
    if (param_5 <= 40.0) goto LAB_10006962;
  }
  fVar8 = 4.2039e-45;
LAB_10006962:
  if ((int)fVar6 < (int)fVar8) {
    fVar8 = fVar6;
  }
  return (int)fVar8;
}

