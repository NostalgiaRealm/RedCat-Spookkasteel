/*
 * FUN_004807cc at 004807cc
 * undefined __register FUN_004807cc(int param_1, int param_2)
 * Address ranges: 004807cc-00480827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004807cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 8);
  if (-1 < iVar3 + -1) {
    iVar2 = 0;
    do {
      iVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x28),iVar2);
      if (((param_2 != iVar1) && (*(int *)(iVar1 + 0x70) != 0)) &&
         (iVar1 = FUN_00409870(*(undefined **)(iVar1 + 0x88),*(undefined **)(param_2 + 0x88)),
         iVar1 == 0)) {
        return;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  thunk_FUN_00479cca(param_2 + 0x70);
  return;
}

