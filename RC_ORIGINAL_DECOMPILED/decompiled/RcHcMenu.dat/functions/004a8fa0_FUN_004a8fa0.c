/*
 * FUN_004a8fa0 at 004a8fa0
 * undefined __register FUN_004a8fa0(int param_1, undefined4 param_2, undefined1 param_3)
 * Address ranges: 004a8fa0-004a8fda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a8fa0(int param_1,undefined4 param_2,undefined1 param_3)

{
  if (*(short *)(param_1 + 0x14a) != 0) {
    (**(code **)(param_1 + 0x148))(*(undefined4 *)(param_1 + 0x14c),param_1,param_2,param_3);
  }
  return;
}

