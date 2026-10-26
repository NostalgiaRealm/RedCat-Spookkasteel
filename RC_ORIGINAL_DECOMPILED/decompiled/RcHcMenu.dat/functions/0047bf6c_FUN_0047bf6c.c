/*
 * FUN_0047bf6c at 0047bf6c
 * undefined __register FUN_0047bf6c(void)
 * Address ranges: 0047bf6c-0047bfc1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0047bf6c(void)

{
  int iVar1;
  char *pcVar2;
  char *in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_0000000c;
  
  pcVar2 = in_stack_0000000c;
  for (; *in_stack_00000008 != '\0'; in_stack_00000008 = in_stack_00000008 + 1) {
    *pcVar2 = *in_stack_00000008;
    pcVar2 = pcVar2 + 1;
  }
  if ((in_stack_0000000c != pcVar2) &&
     ((pcVar2[-1] != '\\' || (iVar1 = FUN_0047befa(), iVar1 == 2)))) {
    *pcVar2 = '\\';
    pcVar2 = pcVar2 + 1;
  }
  for (; *in_stack_00000004 != '\0'; in_stack_00000004 = in_stack_00000004 + 1) {
    *pcVar2 = *in_stack_00000004;
    pcVar2 = pcVar2 + 1;
  }
  *pcVar2 = '\0';
  return;
}

