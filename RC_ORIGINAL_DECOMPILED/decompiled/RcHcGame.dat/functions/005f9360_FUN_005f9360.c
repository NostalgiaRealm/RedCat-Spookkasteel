/*
 * FUN_005f9360 at 005f9360
 * undefined FUN_005f9360(void)
 * Address ranges: 005f9360-005f93a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005f9360(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_2 + 4);
  iVar1 = 0;
  for (iVar3 = *(int *)(param_1 + 8); iVar3 != *(int *)(param_1 + 0xc); iVar3 = iVar3 + 0x10) {
    if (*(char *)(iVar3 + 0xc) == '\0') {
      iVar2 = (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) + 1;
    }
    else {
      iVar2 = 0;
    }
    iVar1 = (iVar2 * iVar1 - *(int *)(iVar3 + 4)) + *piVar4;
    piVar4 = piVar4 + 1;
  }
  return iVar1;
}

