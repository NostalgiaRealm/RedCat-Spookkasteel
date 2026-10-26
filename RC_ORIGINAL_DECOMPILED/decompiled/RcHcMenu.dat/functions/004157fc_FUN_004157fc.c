/*
 * FUN_004157fc at 004157fc
 * undefined __register FUN_004157fc(int param_1)
 * Address ranges: 004157fc-00415836
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004157fc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 8);
    if (-1 < iVar2 + -1) {
      iVar3 = 0;
      do {
        piVar1 = (int *)FUN_00412384(*(undefined4 **)(param_1 + 0x30),iVar3);
        FUN_00403094(piVar1);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_00403094(*(int **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  return;
}

