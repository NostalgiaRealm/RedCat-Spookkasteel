/*
 * FUN_00413364 at 00413364
 * undefined __register FUN_00413364(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 00413364-0041338d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413364(int *param_1,int param_2,undefined4 param_3)

{
  FUN_004132a4(param_1,param_2,CONCAT31((int3)((uint)param_3 >> 8),1));
  FUN_0041251c((int *)param_1[2],param_2);
  *(undefined4 *)(param_2 + 4) = 0;
  FUN_00412f28(param_1);
  return;
}

