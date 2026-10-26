/*
 * FUN_00471d58 at 00471d58
 * undefined __register FUN_00471d58(int param_1)
 * Address ranges: 00471d58-00471d85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00471d58(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_004687b0(*(int *)(param_1 + 0x24));
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00468730(*(int *)(param_1 + 0x24),iVar3);
      (**(code **)(*piVar2 + 0x3c))();
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

