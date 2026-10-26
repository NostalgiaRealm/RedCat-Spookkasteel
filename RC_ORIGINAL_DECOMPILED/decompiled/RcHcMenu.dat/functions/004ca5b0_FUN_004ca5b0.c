/*
 * FUN_004ca5b0 at 004ca5b0
 * int * __register FUN_004ca5b0(int param_1, int param_2, int param_3)
 * Address ranges: 004ca5b0-004ca60c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004ca5b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8) + -1;
  if (-1 < iVar2) {
    do {
      piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 4),iVar2);
      if ((param_2 == piVar1[10]) && (param_3 == piVar1[9])) {
        return piVar1;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  piVar1 = FUN_004ca428((int *)&LAB_004ca308,'\x01',param_2,param_3);
  FUN_004121d8(*(int **)(param_1 + 4),(int)piVar1);
  return piVar1;
}

