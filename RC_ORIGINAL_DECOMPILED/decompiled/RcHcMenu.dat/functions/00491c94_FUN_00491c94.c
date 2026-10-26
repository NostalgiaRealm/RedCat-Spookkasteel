/*
 * FUN_00491c94 at 00491c94
 * undefined4 __register FUN_00491c94(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00491c94-00491cc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00491c94(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    piVar1 = FUN_00491c68(param_1,param_2,param_3);
    *(int **)(param_1 + 0x14) = piVar1;
  }
  return *(undefined4 *)(param_1 + 0x14);
}

