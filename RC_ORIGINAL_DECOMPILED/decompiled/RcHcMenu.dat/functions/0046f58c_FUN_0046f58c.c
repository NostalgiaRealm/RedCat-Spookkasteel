/*
 * FUN_0046f58c at 0046f58c
 * undefined __register FUN_0046f58c(void)
 * Address ranges: 0046f58c-0046f5f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046f58c(void)

{
  char cVar1;
  int iVar2;
  int in_stack_00000004;
  
  cVar1 = **(char **)(in_stack_00000004 + -4);
  if (((cVar1 == '\"') || (cVar1 == '\'')) || (cVar1 == '`')) {
    FUN_0040a134(*(undefined4 **)(in_stack_00000004 + -4),
                 (undefined4 *)(*(int *)(in_stack_00000004 + -4) + 1),
                 *(ushort *)(in_stack_00000004 + -6) - 1);
  }
  iVar2 = FUN_0040a108(*(char **)(in_stack_00000004 + -4));
  cVar1 = *(char *)(*(int *)(in_stack_00000004 + -4) + -1 + iVar2);
  if (((cVar1 == '\"') || (cVar1 == '\'')) || (cVar1 == '`')) {
    iVar2 = FUN_0040a108(*(char **)(in_stack_00000004 + -4));
    *(undefined1 *)(*(int *)(in_stack_00000004 + -4) + -1 + iVar2) = 0;
  }
  return;
}

