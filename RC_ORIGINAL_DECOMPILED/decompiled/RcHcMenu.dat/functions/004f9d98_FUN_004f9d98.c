/*
 * FUN_004f9d98 at 004f9d98
 * undefined __register FUN_004f9d98(int param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004f9d98-004f9df1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f9d98(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_004f9d34(param_1,param_2);
  if (iVar1 == -1) {
    *(undefined1 *)param_3 = 0;
    *(undefined1 *)((int)param_3 + 1) = 0;
    param_3[1] = param_2;
  }
  else {
    puVar2 = (undefined4 *)FUN_0045d430(*(int **)(param_1 + 8),iVar1);
    *param_3 = *puVar2;
    param_3[1] = puVar2[1];
  }
  return;
}

