/*
 * FUN_00480a24 at 00480a24
 * undefined __register FUN_00480a24(int param_1)
 * Address ranges: 00480a24-00480a3e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480a24(int param_1)

{
  if (*(short *)(param_1 + 0xca) != 0) {
    (**(code **)(param_1 + 200))(*(undefined4 *)(param_1 + 0xcc));
  }
  return;
}

