/*
 * FUN_00614f76 at 00614f76
 * undefined FUN_00614f76(void)
 * Address ranges: 00614f76-00614fc5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00614f76(undefined4 *param_1,uint param_2)

{
  char *pcVar1;
  char local_7 [3];
  
  pcVar1 = local_7 + 1;
  *param_1 = 0;
  param_1[1] = param_1[1] & 0xffffff80;
  local_7[1] = 0;
  do {
    pcVar1 = pcVar1 + -1;
    *pcVar1 = (char)(param_2 % 10) + '0';
    param_2 = param_2 / 10;
  } while (param_2 != 0);
  FUN_00615599(pcVar1,local_7 + (1 - (int)pcVar1));
  return param_1;
}

