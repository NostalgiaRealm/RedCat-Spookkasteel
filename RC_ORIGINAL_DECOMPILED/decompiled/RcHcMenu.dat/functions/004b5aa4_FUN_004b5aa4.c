/*
 * FUN_004b5aa4 at 004b5aa4
 * undefined4 __register FUN_004b5aa4(int param_1, undefined4 param_2)
 * Address ranges: 004b5aa4-004b5ad1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004b5aa4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)**(undefined4 **)(param_1 + 4))(*(undefined4 **)(param_1 + 4),param_2)
  ;
  uVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_004b28fc);
  return uVar2;
}

