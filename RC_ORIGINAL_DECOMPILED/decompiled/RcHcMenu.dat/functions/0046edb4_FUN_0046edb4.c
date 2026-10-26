/*
 * FUN_0046edb4 at 0046edb4
 * undefined __register FUN_0046edb4(int param_1, int * param_2)
 * Address ranges: 0046edb4-0046edde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046edb4(int param_1,int *param_2)

{
  param_2[1] = 0;
  FUN_0041251c(*(int **)(param_1 + 0x28),(int)param_2);
  FUN_0046e8d4(param_2);
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    FUN_00472c90(*(int **)(param_1 + 0x24));
  }
  return;
}

