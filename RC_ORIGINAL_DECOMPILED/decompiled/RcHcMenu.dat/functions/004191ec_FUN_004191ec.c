/*
 * FUN_004191ec at 004191ec
 * undefined __register FUN_004191ec(int param_1, int param_2)
 * Address ranges: 004191ec-0041920f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004191ec(int param_1,int param_2)

{
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    FUN_0041251c(*(int **)(param_1 + 0x14),param_2);
    if ((*(int **)(param_1 + 0x14))[2] == 0) {
      FUN_00403094(*(int **)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

