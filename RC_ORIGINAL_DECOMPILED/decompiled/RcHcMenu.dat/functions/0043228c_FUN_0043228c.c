/*
 * FUN_0043228c at 0043228c
 * undefined __register FUN_0043228c(int * param_1, int * param_2, int * param_3)
 * Address ranges: 0043228c-004322b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043228c(int *param_1,int *param_2,int *param_3)

{
  int iStack_14;
  int iStack_10;
  
  (**(code **)(*param_1 + 0x3c))(param_1,&iStack_14);
  *param_3 = *param_2 + iStack_14;
  param_3[1] = param_2[1] + iStack_10;
  return;
}

