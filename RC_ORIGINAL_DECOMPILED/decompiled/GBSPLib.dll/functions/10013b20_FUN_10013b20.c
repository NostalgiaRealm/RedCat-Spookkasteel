/*
 * FUN_10013b20 at 10013b20
 * undefined FUN_10013b20(void)
 * Address ranges: 10013b20-10013bac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10013b20(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  
  iVar3 = 0;
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = piVar1[1];
  if (0 < *piVar1) {
    do {
      fVar4 = (float10)FUN_10013b00(iVar2,param_2 + 8);
      if (fVar4 < (float10)-0.1) break;
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  if (iVar3 == *piVar1) {
    return false;
  }
  iVar3 = 0;
  piVar1 = *(int **)(param_2 + 4);
  iVar2 = piVar1[1];
  if (0 < *piVar1) {
    do {
      fVar4 = (float10)FUN_10013b00(iVar2,param_1 + 8);
      if ((float10)0.1 < fVar4) break;
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  return iVar3 != *piVar1;
}

