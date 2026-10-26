/*
 * FUN_00401cf8 at 00401cf8
 * undefined __register FUN_00401cf8(int * param_1)
 * Address ranges: 00401cf8-00401d58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00401cf8(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 == DAT_00573484) {
    DAT_00573484 = (int *)param_1[1];
  }
  piVar1 = (int *)param_1[1];
  iVar2 = param_1[2];
  if (iVar2 < 0x1001) {
    if (param_1 != piVar1) {
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      *(int **)(DAT_00573490 + -0xc + (iVar2 >> 2) * 4) = piVar1;
      iVar2 = *param_1;
      *piVar1 = iVar2;
      *(int **)(iVar2 + 4) = piVar1;
      return;
    }
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    *(undefined4 *)(DAT_00573490 + -0xc + (iVar2 >> 2) * 4) = 0;
  }
  else {
    iVar2 = *param_1;
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
  }
  return;
}

