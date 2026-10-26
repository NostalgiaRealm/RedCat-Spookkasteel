/*
 * FUN_004a9988 at 004a9988
 * undefined __register FUN_004a9988(int param_1)
 * Address ranges: 004a9988-004a9999
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9988(int param_1)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100));
  }
  return;
}

