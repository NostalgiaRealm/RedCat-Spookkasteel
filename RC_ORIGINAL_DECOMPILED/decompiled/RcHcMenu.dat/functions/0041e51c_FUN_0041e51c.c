/*
 * FUN_0041e51c at 0041e51c
 * undefined __register FUN_0041e51c(int param_1)
 * Address ranges: 0041e51c-0041e533
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041e51c(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_1);
  }
  return;
}

