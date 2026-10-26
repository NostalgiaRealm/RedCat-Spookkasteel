/*
 * FUN_0060a855 at 0060a855
 * undefined FUN_0060a855(void)
 * Address ranges: 0060a855-0060a86e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0060a855(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 - *(int *)(*(int *)(*param_1 + -4) + 4);
  iVar1 = *(int *)(*(int *)(*param_1 + -4) + 8);
  if (iVar1 != 0) {
    iVar2 = iVar2 + *(int *)((int)param_1 - iVar1);
  }
  return iVar2;
}

