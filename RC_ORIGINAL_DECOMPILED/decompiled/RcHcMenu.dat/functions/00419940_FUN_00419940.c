/*
 * FUN_00419940 at 00419940
 * undefined __register FUN_00419940(int param_1, int param_2)
 * Address ranges: 00419940-0041994b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419940(int param_1,int param_2)

{
  *(int *)(param_2 + 0x10) = param_1;
  FUN_004121d8(*(int **)(param_1 + 0x40),param_2);
  return;
}

