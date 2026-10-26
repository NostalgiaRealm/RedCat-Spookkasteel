/*
 * FUN_004c6e8c at 004c6e8c
 * undefined __register FUN_004c6e8c(int param_1, int * param_2)
 * Address ranges: 004c6e8c-004c6ec0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c6e8c(int param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (param_2[0x1f] == 0)) {
    FUN_0041251c(*(int **)(param_1 + 4),(int)param_2);
    FUN_00403094(param_2);
  }
  return;
}

