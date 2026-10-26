/*
 * FUN_00445770 at 00445770
 * undefined __register FUN_00445770(int param_1, int param_2)
 * Address ranges: 00445770-004457aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00445770(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar4 + -1) {
    iVar3 = 0;
    do {
      piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 4),iVar3);
      if (param_2 == *piVar1) {
        puVar2 = (undefined4 *)FUN_00412384(*(undefined4 **)(param_1 + 4),iVar3);
        *puVar2 = 0;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

