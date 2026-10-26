/*
 * FUN_0040b218 at 0040b218
 * undefined __register FUN_0040b218(void)
 * Address ranges: 0040b218-0040b241
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040b218(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;
  
  piVar2 = (int *)(in_stack_00000004 + -4);
  iVar1 = *piVar2;
  while (*(char *)*piVar2 == *(char *)(in_stack_00000004 + -5)) {
    *piVar2 = *piVar2 + 1;
  }
  *(int *)(in_stack_00000004 + -0xc) = (*piVar2 - iVar1) + 1;
  return;
}

