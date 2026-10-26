/*
 * FUN_10005f80 at 10005f80
 * undefined4 __cdecl FUN_10005f80(int * param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10005f80-1000622c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_10005f80(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float *pfVar14;
  undefined4 *puVar15;
  int iVar16;
  float *pfVar17;
  
  if (param_2 == 1) {
    fVar5 = (float)param_1[3];
    fVar6 = (float)param_1[4];
    fVar7 = (float)param_1[5];
    fVar8 = (float)param_1[6];
    iVar16 = 0;
    iVar1 = param_1[9] * 0x28;
    fVar9 = 1.0 / (float)(1 << (*(byte *)(*param_1 + 0x11) & 0x1f));
    if (0 < param_1[10]) {
      pfVar10 = (float *)(&DAT_101241c0 + param_1[9] * 0xc);
      pfVar11 = (float *)(iVar1 + 0x1011a1dc + param_3 * 8);
      pfVar14 = (float *)(&DAT_1011a1d0 + iVar1);
      do {
        fVar4 = pfVar10[1];
        iVar16 = iVar16 + 1;
        pfVar11[-1] = (fVar7 * *pfVar10 + fVar5) * fVar9;
        *pfVar11 = (fVar8 * fVar4 + fVar6) * fVar9;
        *pfVar14 = pfVar10[2];
        pfVar10 = pfVar10 + 3;
        pfVar11 = pfVar11 + 10;
        pfVar14 = pfVar14 + 10;
      } while (iVar16 < param_1[10]);
    }
  }
  else if (param_2 == 2) {
    iVar1 = param_1[1];
    if (iVar1 != 0) {
      iVar16 = *(int *)(iVar1 + 4);
      iVar2 = *(int *)(iVar1 + 8);
      pfVar10 = (float *)(&DAT_101241c0 + param_1[9] * 0xc);
      iVar12 = 0;
      fVar5 = 1.0 / (float)((1 << (*(byte *)(*(int *)(iVar1 + 0x18) + 0x11) & 0x1f)) << 4);
      iVar1 = param_1[9] * 0x28;
      if (0 < param_1[10]) {
        pfVar11 = (float *)(iVar1 + 0x1011a1dc + param_3 * 8);
        puVar15 = (undefined4 *)(&DAT_1011a1d0 + iVar1);
        do {
          fVar6 = pfVar10[1];
          fVar7 = *pfVar10;
          pfVar10 = pfVar10 + 3;
          iVar12 = iVar12 + 1;
          pfVar11[-1] = ((8.0 - (float)iVar16) + fVar7) * fVar5;
          *pfVar11 = ((8.0 - (float)iVar2) + fVar6) * fVar5;
          *puVar15 = 0xffffffff;
          pfVar11 = pfVar11 + 10;
          puVar15 = puVar15 + 10;
        } while (iVar12 < param_1[10]);
        return 1;
      }
    }
  }
  else {
    if (param_2 != 3) {
      return 0;
    }
    iVar13 = 0;
    fVar5 = (float)param_1[3];
    fVar6 = (float)param_1[4];
    fVar7 = (float)param_1[5];
    fVar8 = (float)param_1[6];
    iVar12 = param_1[1];
    fVar9 = 1.0 / (float)(1 << (*(byte *)(*param_1 + 0x11) & 0x1f));
    iVar16 = *(int *)(iVar12 + 4);
    iVar2 = *(int *)(iVar12 + 8);
    iVar1 = param_1[9] * 0x28;
    fVar4 = 1.0 / (float)((1 << (*(byte *)(*(int *)(iVar12 + 0x18) + 0x11) & 0x1f)) << 4);
    if (0 < param_1[10]) {
      pfVar10 = (float *)(&DAT_101241c0 + param_1[9] * 0xc);
      pfVar11 = (float *)(iVar1 + 0x1011a1dc + param_3 * 8);
      pfVar14 = (float *)(iVar1 + 0x1011a1dc + param_4 * 8);
      pfVar17 = (float *)(&DAT_1011a1d0 + iVar1);
      do {
        fVar3 = pfVar10[1];
        iVar13 = iVar13 + 1;
        pfVar11[-1] = (fVar7 * *pfVar10 + fVar5) * fVar9;
        *pfVar11 = (fVar8 * fVar3 + fVar6) * fVar9;
        fVar3 = pfVar10[1];
        pfVar14[-1] = ((8.0 - (float)iVar16) + *pfVar10) * fVar4;
        *pfVar14 = fVar4 * ((8.0 - (float)iVar2) + fVar3);
        *pfVar17 = pfVar10[2];
        pfVar10 = pfVar10 + 3;
        pfVar11 = pfVar11 + 10;
        pfVar14 = pfVar14 + 10;
        pfVar17 = pfVar17 + 10;
      } while (iVar13 < param_1[10]);
      return 1;
    }
  }
  return 1;
}

