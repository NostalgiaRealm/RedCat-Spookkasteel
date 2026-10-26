/*
 * FUN_004e251c at 004e251c
 * undefined __register FUN_004e251c(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004e251c-004e2546
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e251c(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0045d430(param_1,param_2);
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  return;
}

