/*
 * FUN_0041bb48 at 0041bb48
 * undefined __register FUN_0041bb48(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 0041bb48-0041bb5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041bb48(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 != param_1[6]) {
    param_1[6] = param_2;
    FUN_00403270(param_1,param_2,param_3);
  }
  return;
}

