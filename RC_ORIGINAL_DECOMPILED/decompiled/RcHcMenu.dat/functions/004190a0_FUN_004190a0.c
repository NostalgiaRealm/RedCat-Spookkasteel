/*
 * FUN_004190a0 at 004190a0
 * undefined __register FUN_004190a0(int param_1, int param_2)
 * Address ranges: 004190a0-004190c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004190a0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_0041251c(*(int **)(param_1 + 0x10),param_2);
  if ((*(int **)(param_1 + 0x10))[2] == 0) {
    FUN_00403094(*(int **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}

