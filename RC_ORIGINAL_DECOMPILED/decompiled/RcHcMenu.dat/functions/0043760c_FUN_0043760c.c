/*
 * FUN_0043760c at 0043760c
 * undefined __register FUN_0043760c(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0043760c-00437633
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043760c(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x1b2) != 0) {
    (**(code **)(param_1 + 0x1b0))(*(undefined4 *)(param_1 + 0x1b4),param_1,param_2,param_3);
  }
  return;
}

