/*
 * FUN_00490590 at 00490590
 * undefined4 __register FUN_00490590(int param_1, undefined4 param_2)
 * Address ranges: 00490590-004905be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00490590(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),param_2);
  uVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_0048e794);
  return uVar2;
}

