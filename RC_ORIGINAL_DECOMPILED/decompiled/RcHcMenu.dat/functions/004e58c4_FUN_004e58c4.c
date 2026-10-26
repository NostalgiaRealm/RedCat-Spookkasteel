/*
 * FUN_004e58c4 at 004e58c4
 * undefined __register FUN_004e58c4(int param_1, undefined4 param_2)
 * Address ranges: 004e58c4-004e58f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e58c4(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xaa) != 0) {
    (**(code **)(param_1 + 0xa8))(*(undefined4 *)(param_1 + 0xac),param_1,param_2);
  }
  return;
}

