/*
 * FUN_0051688c at 0051688c
 * undefined __register FUN_0051688c(int param_1, undefined4 param_2, undefined4 * param_3)
 * Address ranges: 0051688c-005168ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051688c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_00516830(param_1);
  *(undefined4 *)(param_1 + 4) = param_2;
  FUN_00403e04((int *)(param_1 + 0x10),param_3);
  return;
}

