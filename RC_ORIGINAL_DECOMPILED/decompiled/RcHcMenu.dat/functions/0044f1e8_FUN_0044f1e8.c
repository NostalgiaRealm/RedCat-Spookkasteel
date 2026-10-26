/*
 * FUN_0044f1e8 at 0044f1e8
 * undefined __register FUN_0044f1e8(int param_1, int param_2)
 * Address ranges: 0044f1e8-0044f22f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044f1e8(int param_1,int param_2)

{
  FUN_0041251c(*(int **)(param_1 + 0x44),param_2);
  FUN_0041251c(*(int **)(param_1 + 0x40),param_2);
  FUN_00451c1c(DAT_005737d4);
  if ((*(int *)(*(int *)(param_1 + 0x44) + 8) == 0) && (*(int *)(DAT_005737d4 + 0x74) != 0)) {
    FUN_00439d98(*(int **)(DAT_005737d4 + 0x74));
  }
  return;
}

