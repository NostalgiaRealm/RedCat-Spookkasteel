/*
 * FUN_00412224 at 00412224
 * undefined __register FUN_00412224(int * param_1, int param_2)
 * Address ranges: 00412224-00412283
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412224(int *param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (param_1[2] <= param_2)) {
    FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  iVar1 = FUN_00412384(param_1,param_2);
  param_1[2] = param_1[2] + -1;
  if (param_2 < param_1[2]) {
    FUN_00402944((undefined4 *)(param_1[1] + 4 + param_2 * 4),
                 (undefined4 *)(param_1[1] + param_2 * 4),(param_1[2] - param_2) * 4);
  }
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 4))(param_1,iVar1,2);
  }
  return;
}

