/*
 * FUN_004337a4 at 004337a4
 * undefined __register FUN_004337a4(int param_1, int * param_2)
 * Address ranges: 004337a4-004337c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004337a4(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x30) = *param_2;
  *(int *)(param_1 + 0x34) = param_2[1];
  *(int *)(param_1 + 0x38) = param_2[2] - *param_2;
  *(int *)(param_1 + 0x3c) = param_2[3] - param_2[1];
  FUN_00431e58(param_1);
  return;
}

