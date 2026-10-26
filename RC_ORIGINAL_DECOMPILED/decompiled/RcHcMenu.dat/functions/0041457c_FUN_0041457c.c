/*
 * FUN_0041457c at 0041457c
 * undefined __register FUN_0041457c(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 0041457c-004145e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041457c(int *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0x74))();
  if (param_1[4] == param_1[5]) {
    FUN_004144c8(param_1);
  }
  if (param_2 < param_1[4]) {
    FUN_00402944((undefined4 *)(param_1[3] + param_2 * 8),
                 (undefined4 *)(param_1[3] + 8 + param_2 * 8),(param_1[4] - param_2) * 8);
  }
  piVar1 = (int *)(param_1[3] + param_2 * 8);
  *piVar1 = 0;
  piVar1[1] = 0;
  FUN_00403e04(piVar1,param_3);
  param_1[4] = param_1[4] + 1;
  (**(code **)(*param_1 + 0x70))();
  return;
}

