/*
 * FUN_00533c14 at 00533c14
 * undefined4 __register FUN_00533c14(int param_1)
 * Address ranges: 00533c14-00533c66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00533c14(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(*(int **)(param_1 + 0x238),(int)&PTR_FUN_00531970);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = FUN_00403224(*(int **)(param_1 + 0x238),(int)&PTR_FUN_00531970);
  return uVar1;
}

