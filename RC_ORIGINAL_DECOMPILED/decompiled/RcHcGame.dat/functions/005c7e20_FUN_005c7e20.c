/*
 * FUN_005c7e20 at 005c7e20
 * undefined FUN_005c7e20(void)
 * Address ranges: 005c7e20-005c7e2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_005c7e20(void)

{
  char *pcVar1;
  
  pcVar1 = DAT_006cc498;
  if (DAT_006cc498 == (char *)0x0) {
    pcVar1 = s_Soundsystem_not_yet_initialized__006a9a04;
  }
  return pcVar1;
}

