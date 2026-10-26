/*
 * FUN_00414534 at 00414534
 * undefined __register FUN_00414534(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 00414534-00414578
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414534(int *param_1,int param_2,undefined4 *param_3)

{
  if ((char)param_1[6] != '\0') {
    FUN_00413734(param_1,(undefined4 *)PTR_PTR_005722ac,0);
  }
  if ((param_2 < 0) || (param_1[4] < param_2)) {
    FUN_00413734(param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  FUN_0041457c(param_1,param_2,param_3);
  return;
}

