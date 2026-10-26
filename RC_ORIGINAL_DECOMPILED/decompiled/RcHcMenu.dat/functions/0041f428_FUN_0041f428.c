/*
 * FUN_0041f428 at 0041f428
 * undefined4 __register FUN_0041f428(int param_1)
 * Address ranges: 0041f428-0041f43c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041f428(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  }
  return uVar1;
}

