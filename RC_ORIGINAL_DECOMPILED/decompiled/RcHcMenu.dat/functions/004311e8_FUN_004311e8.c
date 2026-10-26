/*
 * FUN_004311e8 at 004311e8
 * undefined __register FUN_004311e8(int * param_1, int param_2)
 * Address ranges: 004311e8-00431206
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004311e8(int *param_1,int param_2)

{
  FUN_0041251c((int *)*param_1,param_2);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00403094((int *)*param_1);
    *param_1 = 0;
  }
  return;
}

