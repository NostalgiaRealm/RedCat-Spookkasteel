/*
 * FUN_005e9a70 at 005e9a70
 * undefined FUN_005e9a70(void)
 * Address ranges: 005e9a70-005e9aad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_005e9a70(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3;
  *(int *)param_3[1] = *param_3;
  *(int *)(*param_3 + 4) = param_3[1];
  FUN_00505360();
  FUN_005fe5f0(param_3);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  *param_2 = iVar1;
  return;
}

