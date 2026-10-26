/*
 * FUN_00418528 at 00418528
 * bool __register FUN_00418528(void)
 * Address ranges: 00418528-004185b6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00418528(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_stack_00000004;
  
  uVar2 = 0;
  uVar1 = FUN_00417f94();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_0040f9f8(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x20),
                         *(undefined4 **)(*(int *)(in_stack_00000004 + 8) + -0xc));
    if ((((uVar2 != 0) &&
         (*(int *)(uVar2 + 4) == *(int *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x28)))
        && (*(int *)(in_stack_00000004 + -4) != 0)) &&
       (*(int *)(*(int *)(in_stack_00000004 + -4) + 4) ==
        *(int *)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x18))) {
      uVar1 = FUN_004097ac(*(char **)(uVar2 + 8),*(char **)(*(int *)(in_stack_00000004 + -4) + 8));
      if ((char)uVar1 != '\0') {
        uVar2 = *(uint *)(in_stack_00000004 + -4);
      }
    }
  }
  return uVar2 == *(uint *)(in_stack_00000004 + -4);
}

