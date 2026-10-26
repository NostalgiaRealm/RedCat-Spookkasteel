/*
 * FUN_00524f8c at 00524f8c
 * undefined __register FUN_00524f8c(int * param_1, int * param_2)
 * Address ranges: 00524f8c-00524fb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00524f8c(int *param_1,int *param_2)

{
  LONG local_1c [4];
  int *local_c;
  int *local_8;
  
  local_c = param_2;
  local_8 = param_1;
  FUN_00524ec4(param_1,param_2,local_1c);
  FUN_004ab7f0(local_8,local_1c,'\x01');
  return;
}

