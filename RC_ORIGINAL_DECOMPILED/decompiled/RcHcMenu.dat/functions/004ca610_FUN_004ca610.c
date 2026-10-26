/*
 * FUN_004ca610 at 004ca610
 * undefined __register FUN_004ca610(int param_1, int * param_2)
 * Address ranges: 004ca610-004ca62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ca610(int param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (param_2[0x1f] == 0)) {
    FUN_0041251c(*(int **)(param_1 + 4),(int)param_2);
    FUN_00403094(param_2);
  }
  return;
}

