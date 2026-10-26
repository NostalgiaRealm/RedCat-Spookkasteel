/*
 * FUN_0041c848 at 0041c848
 * undefined __register FUN_0041c848(int * param_1, int * param_2, int * param_3, int * param_4)
 * Address ranges: 0041c848-0041c8c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041c848(int *param_1,int *param_2,int *param_3,int *param_4)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xb);
  FUN_0041d040(param_3,9);
  StretchBlt((HDC)param_1[1],*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],
             (HDC)param_3[1],*param_4,param_4[1],param_4[2] - *param_4,param_4[3] - param_4[1],
             param_1[8]);
  (**(code **)(*param_1 + 0xc))();
  return;
}

