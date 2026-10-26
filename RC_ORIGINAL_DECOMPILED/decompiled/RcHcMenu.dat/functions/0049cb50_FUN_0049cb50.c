/*
 * FUN_0049cb50 at 0049cb50
 * undefined __register FUN_0049cb50(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 0049cb50-0049cb7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049cb50(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 != *(int *)(param_1 + 0x28)) {
    *(int *)(param_1 + 0x28) = param_2;
    FUN_0049cac0(param_1,param_1,param_3);
  }
  return;
}

