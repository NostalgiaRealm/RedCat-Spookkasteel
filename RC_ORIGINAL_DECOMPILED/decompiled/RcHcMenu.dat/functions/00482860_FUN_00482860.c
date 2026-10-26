/*
 * FUN_00482860 at 00482860
 * undefined __register FUN_00482860(int param_1)
 * Address ranges: 00482860-004828ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00482860(int param_1)

{
  int iVar1;
  VARIANTARG *pVVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x80) + 8);
    if (-1 < iVar4 + -1) {
      iVar3 = 0;
      do {
        iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x80),iVar3);
        thunk_FUN_00479a4d(iVar1 + 4);
        pVVar2 = (VARIANTARG *)FUN_00412384(*(undefined4 **)(param_1 + 0x80),iVar3);
        FUN_00404c88(pVVar2,"\x0e\tTStmtInfo\f");
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    (**(code **)(**(int **)(param_1 + 0x80) + 8))();
  }
  return;
}

