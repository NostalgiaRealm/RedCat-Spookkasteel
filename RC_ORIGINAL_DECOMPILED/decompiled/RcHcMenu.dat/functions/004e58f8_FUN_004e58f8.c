/*
 * FUN_004e58f8 at 004e58f8
 * undefined __register FUN_004e58f8(int param_1, undefined4 param_2)
 * Address ranges: 004e58f8-004e592b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e58f8(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xb2) != 0) {
    (**(code **)(param_1 + 0xb0))(*(undefined4 *)(param_1 + 0xb4),param_1,param_2);
  }
  return;
}

