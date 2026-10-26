/*
 * FUN_0049cb7c at 0049cb7c
 * undefined __register FUN_0049cb7c(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0049cb7c-0049cb9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049cb7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x38) = param_4;
  *(undefined4 *)(param_1 + 0x3c) = param_5;
  FUN_0049cac0(param_1,param_5,param_3);
  return;
}

