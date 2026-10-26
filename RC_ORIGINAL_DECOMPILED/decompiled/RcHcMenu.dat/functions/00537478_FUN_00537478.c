/*
 * FUN_00537478 at 00537478
 * undefined4 __register FUN_00537478(int param_1, undefined4 param_2)
 * Address ranges: 00537478-005374a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00537478(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00527084(param_1,param_2);
  uVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_005369bc);
  return uVar2;
}

