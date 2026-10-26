/*
 * FUN_00414380 at 00414380
 * undefined __register FUN_00414380(int * param_1, int param_2, int param_3)
 * Address ranges: 00414380-004143d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414380(int *param_1,int param_2,int param_3)

{
  if ((param_2 < 0) || (param_1[4] <= param_2)) {
    FUN_00413734(param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  if ((param_3 < 0) || (param_1[4] <= param_3)) {
    FUN_00413734(param_1,(undefined4 *)PTR_PTR_005724ac,param_3);
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_004143d8((int)param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x70))();
  return;
}

