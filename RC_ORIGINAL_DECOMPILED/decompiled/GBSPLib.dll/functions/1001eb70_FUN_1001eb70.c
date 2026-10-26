/*
 * FUN_1001eb70 at 1001eb70
 * undefined FUN_1001eb70(void)
 * Address ranges: 1001eb70-1001ec0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001eb70(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar2 = param_1;
  if (0 < param_1[10]) {
    param_1 = (int *)0x8;
    piVar4 = piVar2;
    do {
      iVar5 = *piVar4;
      if (iVar5 != 0) {
        if ((*(int *)(iVar5 + 0x24) < 2) || (*(uint *)(iVar5 + 0x38) < 2)) {
          *piVar4 = 0;
          piVar2[10] = piVar2[10] + -1;
        }
        else {
          FUN_1001eb70(iVar5,param_2);
          piVar1 = (int *)*piVar4;
          if (piVar1[10] == 1) {
            iVar5 = 8;
            piVar3 = piVar1;
            do {
              if (*piVar3 != 0) {
                *piVar4 = *piVar3;
              }
              piVar3 = piVar3 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            *(int *)(*piVar4 + 0x38) = piVar1[0xe];
            *(int **)(*piVar4 + 0x20) = piVar2;
          }
        }
      }
      piVar4 = piVar4 + 1;
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  if (piVar2[10] == 0) {
    *(int **)*param_2 = piVar2;
    *param_2 = *param_2 + 4;
  }
  return;
}

