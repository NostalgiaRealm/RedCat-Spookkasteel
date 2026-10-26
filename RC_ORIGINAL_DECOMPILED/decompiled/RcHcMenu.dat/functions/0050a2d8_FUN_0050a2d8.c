/*
 * FUN_0050a2d8 at 0050a2d8
 * undefined4 __register FUN_0050a2d8(int param_1)
 * Address ranges: 0050a2d8-0050a32a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0050a2d8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(*(int **)(param_1 + 0x238),(int)&PTR_FUN_00509b58);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  uVar1 = FUN_00403224(*(int **)(param_1 + 0x238),(int)&PTR_FUN_00509b58);
  return uVar1;
}

