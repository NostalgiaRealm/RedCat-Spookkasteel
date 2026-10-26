/*
 * FUN_0061591e at 0061591e
 * undefined FUN_0061591e(void)
 * Address ranges: 0061591e-0061592d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0061591e(char *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; *param_1 != '\0'; param_1 = param_1 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

