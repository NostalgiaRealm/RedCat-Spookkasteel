/*
 * FUN_0041f440 at 0041f440
 * undefined4 __register FUN_0041f440(int param_1)
 * Address ranges: 0041f440-0041f454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041f440(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  }
  return uVar1;
}

