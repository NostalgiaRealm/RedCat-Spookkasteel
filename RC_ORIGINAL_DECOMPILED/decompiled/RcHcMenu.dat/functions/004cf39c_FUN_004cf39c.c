/*
 * FUN_004cf39c at 004cf39c
 * int * __register FUN_004cf39c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004cf39c-004cf3c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_004cf39c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = FUN_004b321c((int *)&DAT_004b2a4c,'\x01',param_3);
  (**(code **)(*param_1 + 4))(param_1,piVar1);
  return piVar1;
}

