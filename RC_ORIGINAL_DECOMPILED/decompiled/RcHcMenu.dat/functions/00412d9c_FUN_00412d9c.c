/*
 * FUN_00412d9c at 00412d9c
 * undefined __register FUN_00412d9c(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00412d9c-00412dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412d9c(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  if (param_2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      FUN_00413364(piVar1,(int)param_1,param_3);
    }
    if (param_2 != (int *)0x0) {
      FUN_00413308(param_2,param_1);
    }
  }
  return;
}

