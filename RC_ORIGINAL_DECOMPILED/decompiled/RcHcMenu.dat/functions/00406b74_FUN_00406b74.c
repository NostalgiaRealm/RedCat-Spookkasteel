/*
 * FUN_00406b74 at 00406b74
 * LONG __register FUN_00406b74(void)
 * Address ranges: 00406b74-00406b9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LONG FUN_00406b74(void)

{
  LONG LVar1;
  int *in_stack_00000004;
  
  LVar1 = InterlockedDecrement(in_stack_00000004 + 1);
  if (LVar1 == 0) {
    (**(code **)(*in_stack_00000004 + -4))(in_stack_00000004,1);
  }
  return LVar1;
}

