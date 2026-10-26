/*
 * FUN_1000f6f0 at 1000f6f0
 * undefined FUN_1000f6f0(void)
 * Address ranges: 1000f6f0-1000f78c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000f6f0(int param_1)

{
  float *pfVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  
  pfVar1 = (float *)(param_1 + 0x84);
  FUN_1000c010(param_1 + 0x78,pfVar1);
  piVar2 = *(int **)(param_1 + 4);
  iVar4 = 0;
  if (piVar2 != (int *)0x0) {
    param_1 = 0;
    if (0 < *piVar2) {
      do {
        iVar5 = 3;
        pfVar3 = pfVar1;
        do {
          if (*(float *)(iVar4 + piVar2[1]) < pfVar3[-3]) {
            pfVar3[-3] = *(float *)(iVar4 + piVar2[1]);
          }
          if (*pfVar3 < *(float *)(iVar4 + piVar2[1])) {
            *pfVar3 = *(float *)(iVar4 + piVar2[1]);
          }
          iVar4 = iVar4 + 4;
          pfVar3 = pfVar3 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        param_1 = param_1 + 1;
      } while (param_1 < *piVar2);
    }
    return 1;
  }
  (*DAT_1014e358)(s_CalcPatchInfo__No_Poly__10039474);
  return 0;
}

