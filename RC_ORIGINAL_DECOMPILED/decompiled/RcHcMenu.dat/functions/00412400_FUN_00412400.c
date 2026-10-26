/*
 * FUN_00412400 at 00412400
 * undefined __register FUN_00412400(int * param_1, int param_2, int param_3)
 * Address ranges: 00412400-0041246a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412400(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[2] < param_2)) {
    FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  if (param_1[2] == param_1[3]) {
    (**(code **)*param_1)();
  }
  if (param_2 < param_1[2]) {
    FUN_00402944((undefined4 *)(param_1[1] + param_2 * 4),
                 (undefined4 *)(param_1[1] + 4 + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  *(int *)(param_1[1] + param_2 * 4) = param_3;
  param_1[2] = param_1[2] + 1;
  if (param_3 != 0) {
    (**(code **)(*param_1 + 4))(param_1,param_3,0);
  }
  return;
}

