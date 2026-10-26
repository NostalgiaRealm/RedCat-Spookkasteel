/*
 * FUN_004e5960 at 004e5960
 * undefined __register FUN_004e5960(int param_1, undefined4 param_2)
 * Address ranges: 004e5960-004e5993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e5960(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xa2) != 0) {
    (**(code **)(param_1 + 0xa0))(*(undefined4 *)(param_1 + 0xa4),param_1,param_2);
  }
  return;
}

