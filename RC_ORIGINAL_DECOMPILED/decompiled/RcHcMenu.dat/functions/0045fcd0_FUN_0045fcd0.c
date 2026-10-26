/*
 * FUN_0045fcd0 at 0045fcd0
 * undefined __register FUN_0045fcd0(int param_1, int param_2, undefined4 param_3, int param_4, int param_5)
 * Address ranges: 0045fcd0-0045fd0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fcd0(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar1 = FUN_0045e580((int *)&PTR_FUN_0045dfd0,'\x01',param_1);
    *(int **)(param_1 + 4) = piVar1;
    param_3 = extraout_ECX;
    param_2 = param_1;
  }
  FUN_0045e19c(*(int *)(param_1 + 4),param_2,param_3,param_4,param_5);
  return;
}

