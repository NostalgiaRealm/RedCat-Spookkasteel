/*
 * FUN_005d3b40 at 005d3b40
 * undefined FUN_005d3b40(void)
 * Address ranges: 005d3b40-005d3d53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005d3b40(short *param_1,undefined4 param_2,float *param_3)

{
  byte *pbVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (((*(byte *)(param_1 + 0x42) & 4) != 0) && (iVar4 = *(int *)(param_1 + 6), iVar4 != 0)) {
    fVar8 = (float10)FUN_005b2e40();
    fVar2 = *(float *)(*(int *)(param_1 + 0x2e) * 0x40 + 0x18 + *(int *)(DAT_006cefcc + 0x88));
    fVar9 = (float10)FUN_005b2e40();
    fVar5 = (float)(fVar8 + (float10)fVar2) - (float)*(int *)(param_1 + 2);
    fVar2 = (float)((fVar9 + (float10)*(float *)(*(int *)(param_1 + 0x2e) * 0x40 + 0x1c +
                                                *(int *)(DAT_006cefcc + 0x88))) -
                   (float10)*(int *)(param_1 + 4));
    if ((0.0 <= fVar5) &&
       (((0.0 <= fVar2 && (sVar3 = *param_1, fVar5 <= (float)((int)sVar3 << 4))) &&
        (fVar2 <= (float)((int)param_1[1] << 4))))) {
      iVar6 = __ftol();
      iVar7 = __ftol();
      pbVar1 = (byte *)(iVar4 + (iVar6 * sVar3 + iVar7) * 3);
      *param_3 = (float)*pbVar1;
      param_3[1] = (float)pbVar1[1];
      param_3[2] = (float)pbVar1[2];
      return 1;
    }
  }
  return 0;
}

