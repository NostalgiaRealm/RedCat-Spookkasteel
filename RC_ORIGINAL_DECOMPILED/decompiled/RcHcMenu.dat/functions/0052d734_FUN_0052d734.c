/*
 * FUN_0052d734 at 0052d734
 * undefined __register FUN_0052d734(void)
 * Address ranges: 0052d734-0052d772
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052d734(void)

{
  int *piVar1;
  int *piVar2;
  int in_stack_00000004;
  
  if (*(char *)(in_stack_00000004 + -1) != '\0') {
    piVar1 = (int *)FUN_004e25c4(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x80),
                                 *(int *)(*(int *)(in_stack_00000004 + -8) + 0x88));
    piVar2 = (int *)FUN_00549b80(*(int *)(in_stack_00000004 + -8));
    FUN_00493768(piVar1,piVar2);
  }
  return;
}

