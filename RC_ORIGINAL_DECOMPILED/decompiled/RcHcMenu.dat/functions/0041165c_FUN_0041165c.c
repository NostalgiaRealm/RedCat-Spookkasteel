/*
 * FUN_0041165c at 0041165c
 * undefined4 __register FUN_0041165c(int param_1)
 * Address ranges: 0041165c-00411666
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041165c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + -0x38) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + -0x38) + 2);
  }
  return uVar1;
}

