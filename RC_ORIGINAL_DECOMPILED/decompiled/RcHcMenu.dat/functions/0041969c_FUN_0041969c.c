/*
 * FUN_0041969c at 0041969c
 * undefined4 __register FUN_0041969c(void)
 * Address ranges: 0041969c-004196db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0041969c(void)

{
  char cVar1;
  undefined4 uVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_0000000c;
  
  if (in_stack_00000004[7] == 0) {
    cVar1 = FUN_00403128(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    if (cVar1 == '\0') {
      uVar2 = 0x80004002;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*(code *)**(undefined4 **)in_stack_00000004[7])();
  }
  return uVar2;
}

