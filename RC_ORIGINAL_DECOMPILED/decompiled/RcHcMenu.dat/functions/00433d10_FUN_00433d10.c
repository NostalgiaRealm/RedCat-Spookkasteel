/*
 * FUN_00433d10 at 00433d10
 * undefined __register FUN_00433d10(int param_1, undefined1 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 00433d10-00433d3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00433d10(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0xc2) != 0) {
    (**(code **)(param_1 + 0xc0))(*(undefined4 *)(param_1 + 0xc4),param_1,param_2,param_4,param_3);
  }
  return;
}

