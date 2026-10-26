/*
 * FUN_004a9010 at 004a9010
 * undefined __register FUN_004a9010(int param_1, undefined4 param_2, undefined1 param_3)
 * Address ranges: 004a9010-004a904a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9010(int param_1,undefined4 param_2,undefined1 param_3)

{
  if (*(short *)(param_1 + 0x15a) != 0) {
    (**(code **)(param_1 + 0x158))(*(undefined4 *)(param_1 + 0x15c),param_1,param_2,param_3);
  }
  return;
}

