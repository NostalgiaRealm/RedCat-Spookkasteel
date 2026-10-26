/*
 * FUN_0046ed88 at 0046ed88
 * undefined __register FUN_0046ed88(int param_1, int * param_2)
 * Address ranges: 0046ed88-0046edb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046ed88(int param_1,int *param_2)

{
  FUN_004121d8(*(int **)(param_1 + 0x28),(int)param_2);
  param_2[1] = param_1;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    FUN_00472c90(*(int **)(param_1 + 0x24));
  }
  FUN_0046e8d4(param_2);
  return;
}

