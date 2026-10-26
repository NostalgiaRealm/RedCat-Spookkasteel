/*
 * FUN_10030974 at 10030974
 * undefined FUN_10030974(void)
 * Address ranges: 10030974-1003098e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030974(int param_1,undefined4 *param_2)

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

