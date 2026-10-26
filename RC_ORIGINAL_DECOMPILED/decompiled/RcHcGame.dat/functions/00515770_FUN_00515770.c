/*
 * FUN_00515770 at 00515770
 * undefined FUN_00515770(void)
 * Address ranges: 00515770-005157fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00515770(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    piVar3 = param_1 + 5;
    do {
      iVar1 = *param_1;
      if (iVar1 != *param_3) {
        if ((iVar1 != 0) &&
           (iVar2 = *(int *)(iVar1 + 0x14) + -1, *(int *)(iVar1 + 0x14) = iVar2, iVar2 == 0)) {
          FUN_005abfc0(0);
        }
        iVar1 = *param_3;
        *param_1 = iVar1;
        if (iVar1 != 0) {
          *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
        }
      }
      param_1 = param_1 + 9;
      piVar3[-4] = param_3[1];
      piVar3[-3] = param_3[2];
      piVar3[-2] = param_3[3];
      piVar3[-1] = param_3[4];
      *piVar3 = param_3[5];
      piVar3[1] = param_3[6];
      piVar3[2] = param_3[7];
      piVar3[3] = param_3[8];
      piVar3 = piVar3 + 9;
    } while (param_1 != param_2);
  }
  return;
}

