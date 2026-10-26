/*
 * FUN_00412478 at 00412478
 * undefined __register FUN_00412478(int * param_1, int param_2, int param_3)
 * Address ranges: 00412478-004124cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412478(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 != param_2) {
    if ((param_3 < 0) || (param_1[2] <= param_3)) {
      FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_005724ac,param_3);
    }
    uVar1 = FUN_00412384(param_1,param_2);
    *(undefined4 *)(param_1[1] + param_2 * 4) = 0;
    FUN_00412224(param_1,param_2);
    FUN_00412400(param_1,param_3,0);
    *(undefined4 *)(param_1[1] + param_3 * 4) = uVar1;
  }
  return;
}

