/*
 * FUN_004f2480 at 004f2480
 * LONG __register FUN_004f2480(int param_1)
 * Address ranges: 004f2480-004f249e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LONG FUN_004f2480(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 4));
  return LVar1;
}

