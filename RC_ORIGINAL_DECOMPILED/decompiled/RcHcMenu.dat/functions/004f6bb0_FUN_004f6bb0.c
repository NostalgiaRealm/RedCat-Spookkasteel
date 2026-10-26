/*
 * FUN_004f6bb0 at 004f6bb0
 * undefined __register FUN_004f6bb0(int param_1, int param_2)
 * Address ranges: 004f6bb0-004f6bf4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6bb0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < *(int *)(param_1 + 0x14)) {
    param_2 = *(int *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x18) < param_2) {
    param_2 = *(int *)(param_1 + 0x18);
  }
  if ((param_2 != *(int *)(param_1 + 0x10)) &&
     (*(int *)(param_1 + 0x10) = param_2, *(int *)(param_1 + 4) != 0)) {
    iVar1 = FUN_00412ca4(param_1);
    iVar2 = FUN_0041300c(*(int *)(param_1 + 4));
    FUN_00412c80(param_1,iVar1 < iVar2 + -1);
  }
  return;
}

