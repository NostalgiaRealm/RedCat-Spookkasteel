/*
 * FUN_0041bde8 at 0041bde8
 * undefined __register FUN_0041bde8(int * param_1, int param_2)
 * Address ranges: 0041bde8-0041be07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041bde8(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = MulDiv(param_2,param_1[7],0x48);
  FUN_0041bd30(param_1,-iVar1);
  return;
}

