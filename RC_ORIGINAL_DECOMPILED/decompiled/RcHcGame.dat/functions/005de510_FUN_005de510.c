/*
 * FUN_005de510 at 005de510
 * undefined FUN_005de510(void)
 * Address ranges: 005de510-005de569
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005de510(int *param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = *param_1 + -1;
  if (-1 < iVar3) {
    do {
      iVar2 = (iVar3 + iVar4) / 2;
      fVar1 = *(float *)(iVar2 * param_1[1] + 8 + (int)param_1);
      if (param_2 <= fVar1) {
        if (fVar1 <= param_2) {
          return iVar2;
        }
        iVar3 = iVar2 + -1;
      }
      else {
        iVar4 = iVar2 + 1;
      }
    } while (iVar4 <= iVar3);
  }
  return iVar3;
}

