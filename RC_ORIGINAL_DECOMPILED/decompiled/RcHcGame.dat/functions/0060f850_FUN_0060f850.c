/*
 * FUN_0060f850 at 0060f850
 * undefined FUN_0060f850(void)
 * Address ranges: 0060f850-0060f87a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060f850(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}

