/*
 * FUN_0041f094 at 0041f094
 * undefined __register FUN_0041f094(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 0041f094-0041f0bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041f094(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x5c))(piVar1,param_2,param_3,param_4);
  }
  return;
}

