/*
 * FUN_0061d170 at 0061d170
 * undefined FUN_0061d170(void)
 * Address ranges: 0061d170-0061d18a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0061d170(int param_1,undefined4 *param_2)

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

