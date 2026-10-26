/*
 * FUN_005375c0 at 005375c0
 * undefined4 __register FUN_005375c0(int * param_1, uint param_2)
 * Address ranges: 005375c0-005375eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005375c0(int *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_0051e404(param_1,param_2);
  uVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_005369bc);
  return uVar2;
}

