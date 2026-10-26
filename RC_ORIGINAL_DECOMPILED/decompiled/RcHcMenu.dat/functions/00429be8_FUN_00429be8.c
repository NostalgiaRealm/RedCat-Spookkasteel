/*
 * FUN_00429be8 at 00429be8
 * undefined __register FUN_00429be8(int param_1)
 * Address ranges: 00429be8-00429c0b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00429be8(int param_1)

{
  FUN_00432380(param_1);
  if (*(short *)(param_1 + 0x202) != 0) {
    (**(code **)(param_1 + 0x200))(*(undefined4 *)(param_1 + 0x204),param_1);
  }
  return;
}

