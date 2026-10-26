/*
 * FUN_004a2490 at 004a2490
 * undefined __register FUN_004a2490(int param_1, undefined4 param_2, undefined1 param_3, undefined1 param_4)
 * Address ranges: 004a2490-004a24c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a2490(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x6a) != 0) {
    (**(code **)(param_1 + 0x68))(*(undefined4 *)(param_1 + 0x6c),param_1,param_2,param_4,param_3);
  }
  return;
}

