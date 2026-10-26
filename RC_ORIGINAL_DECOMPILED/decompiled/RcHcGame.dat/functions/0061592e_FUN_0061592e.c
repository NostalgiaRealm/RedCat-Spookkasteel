/*
 * FUN_0061592e at 0061592e
 * undefined FUN_0061592e(void)
 * Address ranges: 0061592e-00615950
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char * FUN_0061592e(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  for (; (param_3 != 0 && (cVar1 = *param_2, *pcVar2 = cVar1, cVar1 != '\0')); param_2 = param_2 + 1
      ) {
    pcVar2 = pcVar2 + 1;
    param_3 = param_3 + -1;
  }
  return param_1;
}

