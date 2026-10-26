/*
 * FUN_0044d38c at 0044d38c
 * undefined __register FUN_0044d38c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0044d38c-0044d3aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044d38c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    FUN_00403270(param_1,param_2,param_3);
    return;
  }
  *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xdf;
  return;
}

