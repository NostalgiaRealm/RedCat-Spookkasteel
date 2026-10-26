/*
 * FUN_00472660 at 00472660
 * undefined __register FUN_00472660(void)
 * Address ranges: 00472660-004726fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00472660(void)

{
  undefined4 uVar1;
  int in_stack_00000004;
  
  if (*(char *)(*(int *)(in_stack_00000004 + -4) + 0x8d) != '\x04') {
    if ((*(char *)(*(int *)(in_stack_00000004 + -4) + 0x94) == '\0') ||
       (*(char *)(*(int *)(in_stack_00000004 + -8) + 0x36) != '\0')) {
      if ((*(int *)(*(int *)(in_stack_00000004 + -4) + 0x5c) != 0) &&
         ((*(char *)(*(int *)(in_stack_00000004 + -4) + 0x97) != '\0' &&
          (*(char *)(*(int *)(in_stack_00000004 + -8) + 0x36) == '\0')))) {
        uVar1 = FUN_004730d8(*(int *)(in_stack_00000004 + -4));
        (**(code **)(**(int **)(in_stack_00000004 + -4) + 0x80))
                  (*(int **)(in_stack_00000004 + -4),uVar1);
      }
    }
    else {
      uVar1 = FUN_004730d8(*(int *)(in_stack_00000004 + -4));
      (**(code **)(**(int **)(in_stack_00000004 + -4) + 0x170))
                (*(int **)(in_stack_00000004 + -4),uVar1);
    }
    (**(code **)(**(int **)(in_stack_00000004 + -8) + 0x38))();
  }
  return;
}

