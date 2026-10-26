/*
 * FUN_0044fd6c at 0044fd6c
 * LRESULT __register FUN_0044fd6c(void)
 * Address ranges: 0044fd6c-0044fdac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

LRESULT FUN_0044fd6c(void)

{
  LRESULT LVar1;
  int in_stack_00000004;
  WPARAM in_stack_00000008;
  LPARAM in_stack_0000000c;
  
  LVar1 = CallNextHookEx(DAT_005737f0,in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if ((-1 < in_stack_00000004) && (DAT_005737d4 != 0)) {
    FUN_004510ac(DAT_005737d4,in_stack_0000000c);
  }
  return LVar1;
}

