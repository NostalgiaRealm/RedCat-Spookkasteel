/*
 * FUN_004170e8 at 004170e8
 * undefined __register FUN_004170e8(undefined4 param_1, undefined4 param_2, uint param_3, int param_4)
 * Address ranges: 004170e8-0041710e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004170e8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  uint local_8;
  
  local_8 = param_3;
  FUN_0041586c(*(int *)(param_4 + -4),&local_8,4);
  FUN_00417094(local_8,extraout_EDX,extraout_ECX,param_4);
  return;
}

