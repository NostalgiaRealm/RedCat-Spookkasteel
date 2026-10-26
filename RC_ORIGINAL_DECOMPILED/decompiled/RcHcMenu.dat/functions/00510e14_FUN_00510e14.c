/*
 * FUN_00510e14 at 00510e14
 * undefined4 __register FUN_00510e14(int param_1)
 * Address ranges: 00510e14-00510e66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00510e14(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(*(int **)(param_1 + 0x238),(int)&PTR_FUN_0050fcac);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = FUN_00403224(*(int **)(param_1 + 0x238),(int)&PTR_FUN_0050fcac);
  return uVar1;
}

