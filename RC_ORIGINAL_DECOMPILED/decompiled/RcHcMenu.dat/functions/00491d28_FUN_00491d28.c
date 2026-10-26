/*
 * FUN_00491d28 at 00491d28
 * int * __register FUN_00491d28(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00491d28-00491d51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00491d28(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = FUN_00497218((int *)&PTR_FUN_0048e8f0,'\x01',param_3);
  FUN_00491f28(param_1,piVar1);
  return piVar1;
}

