/*
 * FUN_00438f64 at 00438f64
 * undefined __register FUN_00438f64(undefined4 param_1, int * param_2, int param_3)
 * Address ranges: 00438f64-00438fa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438f64(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0042ebec);
  if ((char)uVar1 != '\0') {
    FUN_00438670((int)param_2,param_3);
    return;
  }
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0042e674);
  if ((char)uVar1 != '\0') {
    FUN_00432978(param_2,param_3);
  }
  return;
}

