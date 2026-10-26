/*
 * FUN_1000f820 at 1000f820
 * undefined FUN_1000f820(void)
 * Address ranges: 1000f820-1000f95e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1000f820(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (DAT_10313034 < 0xfde6) {
    if (DAT_10037ad0 == 0) {
      iVar4 = 0;
      pfVar3 = (float *)(param_1 + 0x84);
      do {
        fVar1 = pfVar3[-3];
        fVar2 = *pfVar3;
        fVar5 = (float10)FUN_1002776f((double)((fVar1 + 1.0) / _DAT_10037ac8));
        fVar6 = (float10)FUN_1002776f((double)((fVar2 - 1.0) / _DAT_10037ac8));
        if ((float10)(double)fVar5 < fVar6) {
          FUN_100145f0();
          *(undefined4 *)(param_2 + iVar4 * 4) = 0x3f800000;
          fVar6 = (float10)FUN_1002776f((double)((fVar1 + 1.0) / _DAT_10037ac8));
          fVar5 = (float10)_DAT_10037ac8;
          *(undefined4 *)(param_2 + 0x10) = 6;
          *(float *)(param_2 + 0xc) = (float)((fVar6 + (float10)1.0) * fVar5);
          return 1;
        }
        iVar4 = iVar4 + 1;
        pfVar3 = pfVar3 + 1;
      } while (iVar4 < 3);
      return 0;
    }
    iVar4 = 0;
    pfVar3 = (float *)(param_1 + 0x78);
    do {
      if (_DAT_10037ac8 < pfVar3[3] - *pfVar3) {
        FUN_100145f0();
        *(undefined4 *)(param_2 + iVar4 * 4) = 0x3f800000;
        fVar1 = *(float *)(param_1 + 0x84 + iVar4 * 4);
        fVar2 = *(float *)(param_1 + 0x78 + iVar4 * 4);
        *(undefined4 *)(param_2 + 0x10) = 6;
        *(float *)(param_2 + 0xc) = (fVar1 + fVar2) * 0.5;
        return 1;
      }
      iVar4 = iVar4 + 1;
      pfVar3 = pfVar3 + 1;
    } while (iVar4 < 3);
  }
  return 0;
}

