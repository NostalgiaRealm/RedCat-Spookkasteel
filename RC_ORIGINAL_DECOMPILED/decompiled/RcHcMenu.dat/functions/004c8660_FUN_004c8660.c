/*
 * FUN_004c8660 at 004c8660
 * undefined __register FUN_004c8660(int param_1)
 * Address ranges: 004c8660-004c868a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004c8660(int param_1)

{
  if (*(short *)(param_1 + 0x15a) != 0) {
    (**(code **)(param_1 + 0x158))(*(undefined4 *)(param_1 + 0x15c),param_1);
  }
  return;
}

