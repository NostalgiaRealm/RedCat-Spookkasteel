/*
 * FUN_005a96d0 at 005a96d0
 * undefined FUN_005a96d0(void)
 * Address ranges: 005a96d0-005a96fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005a96d0(char *param_1,int param_2,int param_3,undefined4 *param_4)

{
  char *pcVar1;
  
  pcVar1 = _strchr(param_1,param_3);
  if (pcVar1 != (char *)0x0) {
    *param_4 = pcVar1 + (param_2 - (int)param_1);
    return CONCAT31((int3)((uint)(pcVar1 + (param_2 - (int)param_1)) >> 8),1);
  }
  return 0;
}

