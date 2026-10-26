/*
 * FUN_004150b4 at 004150b4
 * undefined __register FUN_004150b4(int param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004150b4-004150f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004150b4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004123e0(*(int *)(param_4 + -4),param_1);
  if (iVar1 != -1) {
    FUN_00412224(*(int **)(param_4 + -4),iVar1);
  }
  iVar1 = FUN_004123e0(*(int *)(param_4 + -8),param_1);
  if (iVar1 < 0) {
    FUN_004121d8(*(int **)(param_4 + -8),param_1);
  }
  return;
}

