/*
 * FUN_0052d62c at 0052d62c
 * undefined __register FUN_0052d62c(void)
 * Address ranges: 0052d62c-0052d6ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052d62c(void)

{
  int *piVar1;
  int *piVar2;
  int in_stack_00000004;
  undefined4 local_10;
  undefined1 local_c;
  undefined1 local_b;
  undefined4 local_8;
  
  if (*(char *)(in_stack_00000004 + -1) == '\0') {
    FUN_00403d94("Assertion failure");
  }
  if (*(char *)(*(int *)(in_stack_00000004 + -8) + 0x10) == '\x01') {
    local_10 = FUN_0049206c(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x1c));
    if (*(int *)(*(int *)(in_stack_00000004 + -8) + 0x88) == -0x80000000) {
      *(undefined4 *)(*(int *)(in_stack_00000004 + -8) + 0x88) = 0;
    }
    local_c = 3;
    local_b = 0;
    local_8 = local_10;
    FUN_004e27a4(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x80),
                 *(int *)(*(int *)(in_stack_00000004 + -8) + 0x88),&local_10);
  }
  piVar1 = (int *)FUN_004e25c4(*(int **)(*(int *)(in_stack_00000004 + -8) + 0x80),
                               *(int *)(*(int *)(in_stack_00000004 + -8) + 0x88));
  piVar2 = (int *)FUN_00549b80(*(int *)(in_stack_00000004 + -8));
  FUN_00493768(piVar1,piVar2);
  return;
}

