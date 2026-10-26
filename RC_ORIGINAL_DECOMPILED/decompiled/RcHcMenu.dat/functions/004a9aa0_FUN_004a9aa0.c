/*
 * FUN_004a9aa0 at 004a9aa0
 * undefined __register FUN_004a9aa0(int param_1)
 * Address ranges: 004a9aa0-004a9ab1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9aa0(int param_1)

{
  if (*(short *)(param_1 + 0x42) != 0) {
    (**(code **)(param_1 + 0x40))(*(undefined4 *)(param_1 + 0x44));
  }
  return;
}

