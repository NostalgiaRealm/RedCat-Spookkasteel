/*
 * FUN_00491c68 at 00491c68
 * int * __register FUN_00491c68(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00491c68-00491c91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00491c68(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = FUN_00497218((int *)&PTR_FUN_0048e8f0,'\x01',param_3);
  FUN_00491cc4(param_1,piVar1);
  return piVar1;
}

