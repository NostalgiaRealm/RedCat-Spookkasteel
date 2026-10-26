/*
 * FUN_004689a4 at 004689a4
 * int * __register FUN_004689a4(int param_1, int param_2)
 * Address ranges: 004689a4-004689e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004689a4(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    do {
      piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 4),iVar4);
      iVar2 = (**(code **)(*piVar1 + 0x74))();
      if (iVar2 == param_2) {
        return piVar1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (int *)0x0;
}

