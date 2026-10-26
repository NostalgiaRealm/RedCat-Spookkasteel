/*
 * FUN_00437120 at 00437120
 * undefined __register FUN_00437120(int param_1)
 * Address ranges: 00437120-0043713c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437120(int param_1)

{
  if (*(short *)(param_1 + 0x1a2) != 0) {
    (**(code **)(param_1 + 0x1a0))(*(undefined4 *)(param_1 + 0x1a4),param_1);
  }
  return;
}

