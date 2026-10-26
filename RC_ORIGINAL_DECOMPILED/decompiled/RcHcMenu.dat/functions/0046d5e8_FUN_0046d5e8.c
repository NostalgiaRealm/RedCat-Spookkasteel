/*
 * FUN_0046d5e8 at 0046d5e8
 * undefined __register FUN_0046d5e8(int param_1)
 * Address ranges: 0046d5e8-0046d640
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046d5e8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xd4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x28);
  iVar1 = FUN_004687b0(iVar1);
  if (-1 < iVar1 + -1) {
    iVar3 = 0;
    do {
      piVar2 = (int *)FUN_00468730(*(int *)(param_1 + 0xd4),iVar3);
      (**(code **)(*piVar2 + 0xa8))(piVar2,*(undefined4 *)(param_1 + 0x28));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  piVar2 = *(int **)(param_1 + 0x28);
  if ((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x99) == '\0')) {
    FUN_00471364(piVar2,1);
  }
  return;
}

