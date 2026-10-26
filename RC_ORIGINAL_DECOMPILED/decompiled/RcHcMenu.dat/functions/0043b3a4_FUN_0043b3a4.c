/*
 * FUN_0043b3a4 at 0043b3a4
 * undefined __register FUN_0043b3a4(int * param_1, undefined4 param_2, uint param_3, int param_4)
 * Address ranges: 0043b3a4-0043b3ea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043b3a4(int *param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint local_8;
  
  local_8 = param_3;
  FUN_00403db0(param_1);
  (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),&local_8,4);
  if (0 < (int)local_8) {
    FUN_00404364(param_1,local_8);
    (**(code **)(**(int **)(param_4 + -4) + 4))(*(int **)(param_4 + -4),*param_1,local_8);
  }
  return;
}

