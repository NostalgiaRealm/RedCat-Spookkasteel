/*
 * FUN_00432edc at 00432edc
 * undefined __register FUN_00432edc(int param_1, undefined4 param_2)
 * Address ranges: 00432edc-00432efa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432edc(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0xfa) != 0) {
    (**(code **)(param_1 + 0xf8))(*(undefined4 *)(param_1 + 0xfc),param_1,param_2);
  }
  return;
}

