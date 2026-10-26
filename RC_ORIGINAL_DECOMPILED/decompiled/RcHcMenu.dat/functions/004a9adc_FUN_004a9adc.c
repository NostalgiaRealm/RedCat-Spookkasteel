/*
 * FUN_004a9adc at 004a9adc
 * undefined __register FUN_004a9adc(int param_1)
 * Address ranges: 004a9adc-004a9af6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9adc(int param_1)

{
  if (*(short *)(param_1 + 0x82) != 0) {
    (**(code **)(param_1 + 0x80))(*(undefined4 *)(param_1 + 0x84));
  }
  return;
}

