/*
 * FUN_0050423c at 0050423c
 * undefined4 __register FUN_0050423c(int param_1)
 * Address ranges: 0050423c-0050428e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050423c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(*(int **)(param_1 + 0x238),(int)&PTR_FUN_00503914);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = FUN_00403224(*(int **)(param_1 + 0x238),(int)&PTR_FUN_00503914);
  return uVar1;
}

