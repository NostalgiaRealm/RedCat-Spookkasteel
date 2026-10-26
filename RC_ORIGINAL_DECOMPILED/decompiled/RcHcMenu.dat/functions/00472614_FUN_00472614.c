/*
 * FUN_00472614 at 00472614
 * undefined __register FUN_00472614(int * param_1, int param_2)
 * Address ranges: 00472614-00472637
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472614(int *param_1,int param_2)

{
  FUN_004121d8((int *)param_1[0xe],param_2);
  *(int **)(param_2 + 0x24) = param_1;
  FUN_00472c90(param_1);
  FUN_0046ec94(param_2);
  return;
}

