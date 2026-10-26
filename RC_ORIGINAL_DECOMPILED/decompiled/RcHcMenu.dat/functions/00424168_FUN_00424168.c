/*
 * FUN_00424168 at 00424168
 * int __register FUN_00424168(void)
 * Address ranges: 00424168-00424190
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00424168(void)

{
  int iVar1;
  float10 in_stack_00000004;
  
  iVar1 = FUN_00402b54();
  FUN_00402b2c();
  if (in_stack_00000004 < (float10)0.0) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

