/*
 * FUN_0040301c at 0040301c
 * undefined4 __register FUN_0040301c(int param_1)
 * Address ranges: 0040301c-00403025
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040301c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + -0x24) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + -0x24);
  }
  return uVar1;
}

