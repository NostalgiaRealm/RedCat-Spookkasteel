/*
 * FUN_004f2460 at 004f2460
 * LONG __register FUN_004f2460(int param_1)
 * Address ranges: 004f2460-004f247e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LONG FUN_004f2460(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedIncrement((LONG *)(param_1 + 4));
  return LVar1;
}

