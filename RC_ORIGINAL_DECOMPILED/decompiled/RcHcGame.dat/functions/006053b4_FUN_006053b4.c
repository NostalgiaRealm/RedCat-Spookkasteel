/*
 * FUN_006053b4 at 006053b4
 * undefined FUN_006053b4(void)
 * Address ranges: 006053b4-006053fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * __fastcall FUN_006053b4(int param_1)

{
  char *pcVar1;
  size_t sVar2;
  
  pcVar1 = (char *)FUN_0060bdaf();
  if (pcVar1 != (char *)0x0) {
    sVar2 = _strlen(pcVar1);
    FUN_004040f0(pcVar1,sVar2);
    FUN_0060b25d(pcVar1);
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    pcVar1 = 
    ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:Nov:November:Dec:December"
    ;
  }
  else {
    pcVar1 = *(char **)(param_1 + 0x14);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = "";
    }
  }
  return pcVar1;
}

