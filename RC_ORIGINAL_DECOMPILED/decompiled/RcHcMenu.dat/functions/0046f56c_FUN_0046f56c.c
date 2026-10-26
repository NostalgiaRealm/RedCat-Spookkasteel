/*
 * FUN_0046f56c at 0046f56c
 * undefined4 __register FUN_0046f56c(void)
 * Address ranges: 0046f56c-0046f588
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046f56c(void)

{
  char cVar1;
  int in_stack_00000004;
  
  cVar1 = *(char *)(in_stack_00000004 + -1);
  if (((cVar1 != '\"') && (cVar1 != '\'')) && (cVar1 != '`')) {
    return 0;
  }
  return CONCAT31((int3)((uint)in_stack_00000004 >> 8),1);
}

