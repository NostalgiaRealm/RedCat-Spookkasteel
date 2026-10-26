/*
 * FUN_004e592c at 004e592c
 * undefined __register FUN_004e592c(int param_1, undefined4 param_2)
 * Address ranges: 004e592c-004e595f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e592c(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x9a) != 0) {
    (**(code **)(param_1 + 0x98))(*(undefined4 *)(param_1 + 0x9c),param_1,param_2);
  }
  return;
}

