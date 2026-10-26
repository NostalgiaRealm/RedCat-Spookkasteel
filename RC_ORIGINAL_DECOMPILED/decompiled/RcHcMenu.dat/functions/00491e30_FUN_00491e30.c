/*
 * FUN_00491e30 at 00491e30
 * undefined4 __register FUN_00491e30(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00491e30-00491e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00491e30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    piVar1 = FUN_00491d84(param_1,param_2,param_3);
    *(int **)(param_1 + 0x10) = piVar1;
  }
  return *(undefined4 *)(param_1 + 0x10);
}

