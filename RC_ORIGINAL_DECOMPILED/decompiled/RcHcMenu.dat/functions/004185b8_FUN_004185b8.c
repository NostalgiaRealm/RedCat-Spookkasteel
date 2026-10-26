/*
 * FUN_004185b8 at 004185b8
 * undefined __register FUN_004185b8(int param_1, int * param_2, undefined4 param_3, int param_4)
 * Address ranges: 004185b8-00418645
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004185b8(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_4 + 8) + -4) + 0x1c);
  if (iVar1 == *(int *)(param_1 + 4)) {
    FUN_00403e04(param_2,*(undefined4 **)(param_1 + 8));
  }
  else if (iVar1 == param_1) {
    FUN_00403e04(param_2,(undefined4 *)"Owner");
  }
  else if (((*(int *)(param_1 + 4) == 0) || (*(int *)(*(int *)(param_1 + 4) + 8) == 0)) ||
          (*(int *)(param_1 + 8) == 0)) {
    if (*(int *)(param_1 + 8) == 0) {
      FUN_00403db0(param_2);
    }
    else {
      FUN_0040407c(param_2,*(undefined4 **)(param_1 + 8),(undefined4 *)".Owner");
    }
  }
  else {
    FUN_004040f0(param_2,3);
  }
  return;
}

