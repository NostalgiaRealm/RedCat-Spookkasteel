/*
 * FUN_100038d0 at 100038d0
 * undefined FUN_100038d0(void)
 * Address ranges: 100038d0-100039ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100038d0(int param_1,float param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float local_4;
  
  iVar8 = 0;
  local_4 = 1e+06;
  if (0 < param_5) {
    pfVar6 = (float *)(param_1 + 0xc);
    do {
      iVar8 = iVar8 + 1;
      iVar7 = iVar8 % param_5;
      fVar2 = *(float *)(param_1 + iVar7 * 0x24) - pfVar6[-3];
      iVar1 = param_1 + iVar7 * 0x24;
      fVar5 = *(float *)(param_1 + 4 + iVar7 * 0x24) - pfVar6[-2];
      fVar4 = (*(float *)(iVar1 + 0xc) - *pfVar6) / param_2;
      fVar3 = (*(float *)(iVar1 + 0x10) - pfVar6[1]) / param_3;
      fVar2 = (fVar4 * fVar4 + fVar3 * fVar3) / (fVar2 * fVar2 + fVar5 * fVar5);
      if (fVar2 < local_4) {
        local_4 = fVar2;
      }
      pfVar6 = pfVar6 + 9;
    } while (iVar8 < param_5);
    if (local_4 <= 3.0) {
      iVar8 = 0;
      goto LAB_1000399e;
    }
    if (local_4 <= 15.0) {
      iVar8 = 1;
      goto LAB_1000399e;
    }
    iVar8 = 2;
    if (local_4 <= 35.0) goto LAB_1000399e;
  }
  iVar8 = 3;
LAB_1000399e:
  if (param_4 <= iVar8) {
    iVar8 = param_4 + -1;
  }
  return iVar8;
}

