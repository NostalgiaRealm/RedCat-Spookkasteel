/*
 * FUN_004551f8 at 004551f8
 * undefined __register FUN_004551f8(undefined4 param_1, int param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 004551f8-00455236
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004551f8(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_6 + -4) + 0x120);
  FUN_0041c034((int *)piVar1[4],param_1);
  FUN_0041cad0(piVar1,param_2,param_3);
  FUN_0041ca70(piVar1,param_5,param_4);
  return;
}

