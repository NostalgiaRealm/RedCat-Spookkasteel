/*
 * FUN_00491d54 at 00491d54
 * undefined4 __register FUN_00491d54(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00491d54-00491d83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00491d54(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    piVar1 = FUN_00491d28(param_1,param_2,param_3);
    *(int **)(param_1 + 0x18) = piVar1;
  }
  return *(undefined4 *)(param_1 + 0x18);
}

