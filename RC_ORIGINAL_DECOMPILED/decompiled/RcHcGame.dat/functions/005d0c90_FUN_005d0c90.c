/*
 * FUN_005d0c90 at 005d0c90
 * undefined FUN_005d0c90(void)
 * Address ranges: 005d0c90-005d0d50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d0c90(int *param_1)

{
  int *piVar1;
  int *piVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = 0;
  piVar1 = param_1 + 0xa1;
  if (0 < *param_1) {
    piVar2 = param_1 + 0x161;
    pfVar3 = (float *)(param_1 + 2);
    do {
      if (0.0 <= pfVar3[-1]) {
        *piVar1 = 3;
        piVar1[3] = 0;
      }
      else {
        *piVar1 = 0;
        piVar1[3] = 3;
      }
      if (0.0 <= *pfVar3) {
        piVar1[1] = 4;
        piVar1[4] = 1;
      }
      else {
        piVar1[1] = 1;
        piVar1[4] = 4;
      }
      if (0.0 <= pfVar3[1]) {
        piVar1[2] = 5;
        piVar1[5] = 2;
      }
      else {
        piVar1[2] = 2;
        piVar1[5] = 5;
      }
      *piVar2 = (int)piVar1;
      piVar1 = piVar1 + 6;
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 1;
      pfVar3 = pfVar3 + 5;
    } while (iVar4 < *param_1);
  }
  return;
}

