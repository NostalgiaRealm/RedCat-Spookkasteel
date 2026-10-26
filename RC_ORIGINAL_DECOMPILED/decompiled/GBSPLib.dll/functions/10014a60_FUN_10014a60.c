/*
 * FUN_10014a60 at 10014a60
 * undefined FUN_10014a60(void)
 * Address ranges: 10014a60-10014ab6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014a60(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_00001fa4;
  
  FUN_10027d90();
  FUN_10028db1();
  iVar2 = -1;
  pcVar3 = (char *)register0x00000010;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  (**(code **)(*(int *)(in_stack_00001fa4 + 4) + 0x38))();
  return;
}

