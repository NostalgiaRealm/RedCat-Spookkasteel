/*
 * FUN_00513f3c at 00513f3c
 * undefined4 __register FUN_00513f3c(int param_1)
 * Address ranges: 00513f3c-00513f8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00513f3c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(*(int **)(param_1 + 0x238),(int)&PTR_FUN_00512dd8);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = FUN_00403224(*(int **)(param_1 + 0x238),(int)&PTR_FUN_00512dd8);
  return uVar1;
}

