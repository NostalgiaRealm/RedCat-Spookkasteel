/*
 * FUN_0060536e at 0060536e
 * undefined FUN_0060536e(void)
 * Address ranges: 0060536e-006053b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __fastcall FUN_0060536e(int param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)FUN_0060bd20();
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    FUN_004040f0(pcVar1,sVar2);
    FUN_0060b25d(pcVar1);
  }
  if (*(int *)(param_1 + 8) == 0) {
    pcVar1 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday"
    ;
  }
  else {
    pcVar1 = *(char **)(param_1 + 4);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
  }
  return pcVar1;
}

