/*
 * FUN_00412fac at 00412fac
 * int __register FUN_00412fac(int param_1, int param_2)
 * Address ranges: 00412fac-00412fdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00412fac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 8),iVar3);
      if (param_2 == *(int *)(iVar1 + 8)) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

