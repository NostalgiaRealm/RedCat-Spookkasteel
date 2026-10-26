/*
 * FUN_005653a0 at 005653a0
 * undefined FUN_005653a0(void)
 * Address ranges: 005653a0-005653f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005653a0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar2 = param_3[-1];
    piVar1 = param_2 + -1;
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    if (iVar2 != *piVar1) {
      if ((iVar2 != 0) &&
         (iVar3 = *(int *)(iVar2 + 0x14) + -1, *(int *)(iVar2 + 0x14) = iVar3, iVar3 == 0)) {
        FUN_005abfc0(0);
      }
      iVar2 = *param_2;
      *param_3 = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
      }
    }
  } while (param_2 != param_1);
  return param_3;
}

