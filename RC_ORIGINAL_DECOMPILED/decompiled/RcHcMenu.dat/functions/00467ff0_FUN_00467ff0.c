/*
 * FUN_00467ff0 at 00467ff0
 * undefined __register FUN_00467ff0(int param_1)
 * Address ranges: 00467ff0-00468027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467ff0(int param_1)

{
  VARIANTARG *pVVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 8);
  if (-1 < iVar2 + -1) {
    iVar3 = 0;
    do {
      pVVar1 = (VARIANTARG *)FUN_00412384(*(undefined4 **)(param_1 + 4),iVar3);
      FUN_00404c88(pVVar1,"\x0e\x10TLookupListEntry ");
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  (**(code **)(**(int **)(param_1 + 4) + 8))();
  return;
}

