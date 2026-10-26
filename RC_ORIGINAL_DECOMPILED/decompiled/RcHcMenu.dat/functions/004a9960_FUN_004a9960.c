/*
 * FUN_004a9960 at 004a9960
 * undefined __register FUN_004a9960(int param_1)
 * Address ranges: 004a9960-004a9971
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9960(int param_1)

{
  if (*(short *)(param_1 + 0x32) != 0) {
    (**(code **)(param_1 + 0x30))(*(undefined4 *)(param_1 + 0x34));
  }
  return;
}

