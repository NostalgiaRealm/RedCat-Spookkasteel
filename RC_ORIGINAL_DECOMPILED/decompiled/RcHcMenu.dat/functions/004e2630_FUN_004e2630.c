/*
 * FUN_004e2630 at 004e2630
 * undefined __register FUN_004e2630(int * param_1, int param_2, undefined1 param_3)
 * Address ranges: 004e2630-004e2653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e2630(int *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004e24f8(param_1,param_2);
  *(undefined1 *)(iVar1 + 5) = param_3;
  return;
}

