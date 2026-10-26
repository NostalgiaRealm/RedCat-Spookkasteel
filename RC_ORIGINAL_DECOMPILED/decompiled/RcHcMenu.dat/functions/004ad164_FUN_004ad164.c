/*
 * FUN_004ad164 at 004ad164
 * undefined __register FUN_004ad164(int param_1, undefined4 param_2)
 * Address ranges: 004ad164-004ad18b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad164(int param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 10) != 0) {
    (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),param_2);
  }
  return;
}

