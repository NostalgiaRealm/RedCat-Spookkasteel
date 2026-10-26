/*
 * FUN_0043c48c at 0043c48c
 * int __register FUN_0043c48c(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 0043c48c-0043c4cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_0043c48c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  int local_c;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    local_c = FUN_0043a50c(param_2);
    local_c = local_c + *(int *)(param_2 + 0x20);
    param_3 = extraout_ECX;
  }
  else {
    local_c = *(int *)(*(int *)(param_2 + 0xc) + 0x20);
  }
  FUN_0043c410(*(int *)(*(int *)(param_1 + 100) + 8),param_2,param_3,(int)&stack0xfffffffc);
  return local_c;
}

