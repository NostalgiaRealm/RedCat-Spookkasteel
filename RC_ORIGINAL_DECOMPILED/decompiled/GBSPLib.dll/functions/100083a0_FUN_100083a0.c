/*
 * FUN_100083a0 at 100083a0
 * undefined FUN_100083a0(void)
 * Address ranges: 100083a0-100084c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100083a0(int param_1)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  float *pfVar5;
  int *piVar6;
  
  if ((*(int *)(param_1 * 0x60 + DAT_10260e74) != 0) &&
     (piVar6 = *(int **)(DAT_1031303c + param_1 * 4), piVar6 != (int *)0x0)) {
    iVar4 = param_1 * 0x54;
    do {
      pfVar3 = *(float **)(iVar4 + 0x3c + DAT_10260e78);
      piVar6[0xe] = 0;
      param_1 = 0;
      if (0 < *(int *)(iVar4 + 0x40 + DAT_10260e78)) {
        do {
          iVar1 = 0;
          pfVar2 = (float *)(piVar6 + 0x21);
          pfVar5 = pfVar3;
          do {
            if ((*pfVar5 + 16.0 < pfVar2[-3]) || (*pfVar2 < *pfVar5 - 16.0)) break;
            iVar1 = iVar1 + 1;
            pfVar2 = pfVar2 + 1;
            pfVar5 = pfVar5 + 1;
          } while (iVar1 < 3);
          if (iVar1 == 3) {
            piVar6[0xe] = piVar6[0xe] + 1;
            FUN_10014580(piVar6 + 0xf);
          }
          pfVar3 = pfVar3 + 3;
          param_1 = param_1 + 1;
        } while (param_1 < *(int *)(iVar4 + 0x40 + DAT_10260e78));
      }
      if (piVar6[0xe] != 0) {
        FUN_10014530(1.0 / (float)piVar6[0xe]);
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)0x0);
  }
  return;
}

