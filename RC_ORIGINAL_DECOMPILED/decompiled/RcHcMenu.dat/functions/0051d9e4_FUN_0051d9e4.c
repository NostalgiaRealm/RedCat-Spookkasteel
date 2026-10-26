/*
 * FUN_0051d9e4 at 0051d9e4
 * undefined __register FUN_0051d9e4(int * param_1, int * param_2)
 * Address ranges: 0051d9e4-0051da14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051d9e4(int *param_1,int *param_2)

{
  FUN_004358f8(param_1,param_2);
  param_2[1] = param_2[1] & 0xbfffffffU | 0x80000000;
  return;
}

