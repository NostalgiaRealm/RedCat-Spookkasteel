/*
 * FUN_004a8fdc at 004a8fdc
 * undefined __register FUN_004a8fdc(int param_1, undefined4 param_2)
 * Address ranges: 004a8fdc-004a900f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a8fdc(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 0x152) != 0) {
    (**(code **)(param_1 + 0x150))(*(undefined4 *)(param_1 + 0x154),param_1,param_2);
  }
  return;
}

