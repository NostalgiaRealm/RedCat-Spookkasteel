/*
 * FUN_1000fa90 at 1000fa90
 * undefined FUN_1000fa90(void)
 * Address ranges: 1000fa90-1000fbf0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000fa90(int param_1,int param_2)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  
  piVar2 = *(int **)(param_2 + 4);
  if (piVar2 != (int *)0x0) {
    pfVar1 = (float *)(param_2 + 8);
    FUN_100145f0();
    iVar5 = 0;
    if (0 < *piVar2) {
      do {
        FUN_10014580(pfVar1);
        iVar5 = iVar5 + 1;
      } while (iVar5 < *piVar2);
    }
    iVar5 = 3;
    pfVar3 = pfVar1;
    do {
      iVar5 = iVar5 + -1;
      *pfVar3 = *pfVar3 / (float)*piVar2;
      pfVar3 = pfVar3 + 1;
    } while (iVar5 != 0);
    param_1 = param_1 * 0x24;
    *(undefined4 *)(param_2 + 0x1c) =
         *(undefined4 *)(DAT_1014e2e8 + *(int *)(param_1 + 8 + DAT_1014e288) * 0x14);
    *(undefined4 *)(param_2 + 0x20) =
         *(undefined4 *)(DAT_1014e2e8 + 4 + *(int *)(param_1 + 8 + DAT_1014e288) * 0x14);
    *(undefined4 *)(param_2 + 0x24) =
         *(undefined4 *)(DAT_1014e2e8 + 8 + *(int *)(param_1 + 8 + DAT_1014e288) * 0x14);
    uVar4 = *(undefined4 *)(DAT_1014e2e8 + 0xc + *(int *)(param_1 + 8 + DAT_1014e288) * 0x14);
    *(undefined4 *)(param_2 + 0x2c) = 6;
    *(undefined4 *)(param_2 + 0x28) = uVar4;
    if (*(int *)(param_1 + 0xc + DAT_1014e288) != 0) {
      FUN_10014600();
      *(float *)(param_2 + 0x28) = -*(float *)(param_2 + 0x28);
    }
    FUN_100145a0(0x40000000,pfVar1);
    uVar4 = FUN_1000a690(0,pfVar1);
    *(undefined4 *)(param_2 + 0x14) = uVar4;
    fVar6 = (float10)FUN_1000d610(*(undefined4 *)(param_2 + 4));
    *(float *)(param_2 + 0x18) = (float)fVar6;
    if (fVar6 < (float10)1.0) {
      *(undefined4 *)(param_2 + 0x18) = 0x3f800000;
    }
    FUN_1000c2e0(*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(param_2 + 4) = 0;
    return 1;
  }
  (*DAT_1014e358)(s_FinalizePatchInfo__No_Poly__10039530);
  return 0;
}

