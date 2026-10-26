/*
 * FUN_00553fd0 at 00553fd0
 * undefined FUN_00553fd0(void)
 * Address ranges: 00553fd0-0055406a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __thiscall FUN_00553fd0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 8);
  piVar2 = param_2;
  while (piVar3 = piVar2, piVar2 = piVar3 + 1, piVar2 != piVar5) {
    iVar1 = *piVar3;
    if (iVar1 != *piVar2) {
      if ((iVar1 != 0) &&
         (iVar4 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar4, iVar4 == 0)) {
        FUN_005abfc0(0);
      }
      iVar1 = *piVar2;
      *piVar3 = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      }
    }
  }
  piVar2 = *(int **)(param_1 + 8);
  piVar5 = piVar2 + -1;
  if (piVar5 == piVar2) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    return param_2;
  }
  do {
    iVar1 = *piVar5;
    if (iVar1 != 0) {
      iVar4 = *(int *)(iVar1 + 0x14) + -1;
      *(int *)(iVar1 + 0x14) = iVar4;
      if (iVar4 == 0) {
        FUN_005abfc0(0);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
  } while (piVar5 != piVar2);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
  return param_2;
}

