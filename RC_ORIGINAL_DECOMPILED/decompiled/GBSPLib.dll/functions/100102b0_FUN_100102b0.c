/*
 * FUN_100102b0 at 100102b0
 * undefined FUN_100102b0(void)
 * Address ranges: 100102b0-10010312
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float10 FUN_100102b0(void)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  fVar5 = (float10)0.0;
  iVar4 = 0;
  if (0 < DAT_10313034) {
    while( true ) {
      iVar3 = 3;
      iVar1 = *(int *)(DAT_10313038 + iVar4 * 4);
      pfVar2 = (float *)(iVar1 + 0x60);
      do {
        iVar3 = iVar3 + -1;
        *pfVar2 = pfVar2[-3] / *(float *)(iVar1 + 0x18) + *pfVar2;
        pfVar2[-6] = (float)((float10)pfVar2[3] * (float10)pfVar2[-3]);
        fVar5 = (float10)pfVar2[3] * (float10)pfVar2[-3] + fVar5;
        pfVar2 = pfVar2 + 1;
      } while (iVar3 != 0);
      FUN_100145f0();
      iVar4 = iVar4 + 1;
      if (DAT_10313034 <= iVar4) break;
      fVar5 = (float10)(float)fVar5;
    }
    fVar5 = (float10)(float)fVar5;
  }
  return fVar5;
}

