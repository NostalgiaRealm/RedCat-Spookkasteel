/*
 * FUN_004a9af8 at 004a9af8
 * undefined __register FUN_004a9af8(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 004a9af8-004a9b1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9af8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x8a) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined4 *)(param_1 + 0x8c),param_2,param_3,param_4);
  }
  return;
}

