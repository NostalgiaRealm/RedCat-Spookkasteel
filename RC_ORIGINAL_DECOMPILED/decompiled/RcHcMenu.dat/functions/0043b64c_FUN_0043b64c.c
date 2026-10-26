/*
 * FUN_0043b64c at 0043b64c
 * undefined __register FUN_0043b64c(int param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 0043b64c-0043b6d2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043b64c(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  FUN_0041c034(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000014);
  FUN_0041cad0(*(int **)(param_5 + -4),param_3,param_2);
  FUN_0041ca70(*(int **)(param_5 + -4),param_1,param_2);
  FUN_0041ca70(*(int **)(param_5 + -4),param_1,param_4);
  FUN_0041c034(*(int **)(*(int *)(param_5 + -4) + 0x10),0x80000010);
  FUN_0041ca70(*(int **)(param_5 + -4),param_3,param_4);
  FUN_0041ca70(*(int **)(param_5 + -4),param_3,param_2 + -1);
  return;
}

