/*
 * FUN_004e585c at 004e585c
 * undefined __register FUN_004e585c(int param_1, undefined4 param_2)
 * Address ranges: 004e585c-004e588f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e585c(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xba) != 0) {
    (**(code **)(param_1 + 0xb8))(*(undefined4 *)(param_1 + 0xbc),param_1,param_2);
  }
  return;
}

