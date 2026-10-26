/*
 * FUN_004433f8 at 004433f8
 * undefined4 __register FUN_004433f8(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004433f8-0044341e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004433f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    piVar1 = FUN_00420f24((int *)&PTR_FUN_0041acd8,'\x01',param_3);
    *(int **)(param_1 + 0x40) = piVar1;
  }
  (**(code **)(**(int **)(param_1 + 0x40) + 0x3c))(*(int **)(param_1 + 0x40),1);
  return *(undefined4 *)(param_1 + 0x40);
}

