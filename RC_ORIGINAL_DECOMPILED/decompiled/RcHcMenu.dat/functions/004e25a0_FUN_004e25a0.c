/*
 * FUN_004e25a0 at 004e25a0
 * undefined __register FUN_004e25a0(int * param_1, int param_2, undefined1 param_3)
 * Address ranges: 004e25a0-004e25c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e25a0(int *param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004e24f8(param_1,param_2);
  *(undefined1 *)(iVar1 + 4) = param_3;
  return;
}

