/*
 * FUN_00485760 at 00485760
 * char __register FUN_00485760(void)
 * Address ranges: 00485760-004857c4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_00485760(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int in_stack_00000004;
  
  if ((*(int *)(*(int *)(in_stack_00000004 + -4) + 0x40) < 2) &&
     (*(int *)(*(int *)(in_stack_00000004 + -4) + 0x78) == 0)) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  if ((cVar3 != '\0') && (iVar1 = FUN_00471d88(*(int *)(in_stack_00000004 + -4)), -1 < iVar1 + -1))
  {
    iVar4 = 0;
    do {
      iVar2 = FUN_00468730(*(int *)(*(int *)(in_stack_00000004 + -4) + 0x24),iVar4);
      if ((byte)(*(char *)(iVar2 + 0x34) - 0x1cU) < 2) {
        return '\0';
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return cVar3;
}

