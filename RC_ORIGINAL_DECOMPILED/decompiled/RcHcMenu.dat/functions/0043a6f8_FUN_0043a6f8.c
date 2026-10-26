/*
 * FUN_0043a6f8 at 0043a6f8
 * undefined __register FUN_0043a6f8(int param_1, int * param_2)
 * Address ranges: 0043a6f8-0043a73a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043a6f8(int param_1,int *param_2)

{
  int *piVar1;
  
  FUN_00403db0(param_2);
  if (*(int *)(param_1 + 4) != 0) {
    if (*(int *)(*(int *)(param_1 + 4) + 8) == 0) {
      piVar1 = FUN_0040cfa8((int *)&DAT_00408ac4,'\x01',(undefined4 *)PTR_PTR_00572304);
      FUN_0040382c(piVar1);
    }
    FUN_00403e04(param_2,*(undefined4 **)(*(int *)(param_1 + 4) + 8));
  }
  return;
}

