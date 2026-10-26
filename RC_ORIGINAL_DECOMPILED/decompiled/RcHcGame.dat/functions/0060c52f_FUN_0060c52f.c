/*
 * FUN_0060c52f at 0060c52f
 * undefined FUN_0060c52f(void)
 * Address ranges: 0060c52f-0060c555
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0060c52f(char *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  for (; (iVar1 != 0 && (*param_1 != '\0')); param_1 = param_1 + 1) {
    *(char *)*param_2 = *param_1;
    *param_2 = *param_2 + 1;
    *param_3 = *param_3 + -1;
    iVar1 = *param_3;
  }
  return;
}

