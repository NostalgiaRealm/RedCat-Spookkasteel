/*
 * FUN_00499f30 at 00499f30
 * undefined FUN_00499f30(void)
 * Address ranges: 00499f30-00499f63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00499f30(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  FUN_005fe5f0(param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *param_2 = iVar1;
  return;
}

