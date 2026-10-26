/*
 * FUN_00527084 at 00527084
 * undefined4 __register FUN_00527084(int param_1, undefined4 param_2)
 * Address ranges: 00527084-005270af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00527084(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_0051e184(param_1,param_2);
  uVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_00525a70);
  return uVar2;
}

