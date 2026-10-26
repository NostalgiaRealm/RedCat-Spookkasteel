/*
 * FUN_0046e79c at 0046e79c
 * undefined __register FUN_0046e79c(int param_1)
 * Address ranges: 0046e79c-0046e80f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e79c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0046e810(param_1);
  iVar1 = (*(int *)(iVar1 + 0x48) - *(int *)(param_1 + 0xc)) + 1;
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iVar2 = FUN_0046e810(param_1);
  iVar2 = *(int *)(iVar2 + 0x40) - *(int *)(param_1 + 0xc);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  iVar3 = FUN_0046e810(param_1);
  if (*(int *)(iVar3 + 0x48) < iVar2) {
    iVar2 = FUN_0046e810(param_1);
    iVar2 = *(int *)(iVar2 + 0x48);
  }
  if (*(int *)(param_1 + 0x10) < iVar1) {
    *(int *)(param_1 + 0x10) = iVar1;
  }
  if (iVar2 < *(int *)(param_1 + 0x10)) {
    *(int *)(param_1 + 0x10) = iVar2;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_0046e810(param_1);
    if (*(int *)(iVar1 + 0x48) - *(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc) + -1) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    }
  }
  return;
}

