/*
 * FUN_1001d285 at 1001d285
 * undefined FUN_1001d285(void)
 * Address ranges: 1001d285-1001d29f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001d285(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  param_1 = param_1 - (int)param_2;
  iVar1 = 3;
  do {
    *(undefined4 *)(param_1 + (int)param_2) = *param_2;
    param_2 = param_2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

