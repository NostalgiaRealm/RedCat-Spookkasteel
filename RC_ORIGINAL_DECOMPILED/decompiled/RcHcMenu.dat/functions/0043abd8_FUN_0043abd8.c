/*
 * FUN_0043abd8 at 0043abd8
 * undefined __register FUN_0043abd8(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 0043abd8-0043abee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043abd8(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 100);
  }
  FUN_0043ab9c(param_2,param_2,param_3,(int)&stack0xfffffffc);
  return;
}

