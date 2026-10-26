/*
 * FUN_005d5bc0 at 005d5bc0
 * undefined FUN_005d5bc0(void)
 * Address ranges: 005d5bc0-005d5c03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005d5bc0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2[4];
  if (*(int **)(param_1 + iVar1 * 4) == param_2) {
    iVar2 = *param_2;
    *(int *)(param_1 + iVar1 * 4) = iVar2;
    if (*(int *)(iVar2 + 0x10) != iVar1) {
      *(undefined4 *)(param_1 + iVar1 * 4) = 0;
    }
  }
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  *param_2 = (int)param_2;
  param_2[1] = (int)param_2;
  FUN_005d98e0(DAT_006ceffc,param_2);
  return;
}

