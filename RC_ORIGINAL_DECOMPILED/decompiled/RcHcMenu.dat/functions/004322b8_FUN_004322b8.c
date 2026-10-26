/*
 * FUN_004322b8 at 004322b8
 * undefined __register FUN_004322b8(int * param_1, int * param_2, int * param_3)
 * Address ranges: 004322b8-004322e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004322b8(int *param_1,int *param_2,int *param_3)

{
  int iStack_14;
  int iStack_10;
  
  (**(code **)(*param_1 + 0x3c))(param_1,&iStack_14);
  *param_3 = *param_2 - iStack_14;
  param_3[1] = param_2[1] - iStack_10;
  return;
}

