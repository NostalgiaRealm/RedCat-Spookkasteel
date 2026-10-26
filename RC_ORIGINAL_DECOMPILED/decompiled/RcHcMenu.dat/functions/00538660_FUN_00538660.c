/*
 * FUN_00538660 at 00538660
 * undefined4 __register FUN_00538660(void)
 * Address ranges: 00538660-0053868b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00538660(void)

{
  char cVar1;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  undefined4 local_8;
  
  cVar1 = FUN_00403128(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  if (cVar1 == '\0') {
    local_8 = 0x80004002;
  }
  else {
    local_8 = 0;
  }
  return local_8;
}

