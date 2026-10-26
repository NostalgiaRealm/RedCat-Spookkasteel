/*
 * FUN_00432efc at 00432efc
 * undefined __register FUN_00432efc(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 00432efc-00432f25
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432efc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0x102) != 0) {
    (**(code **)(param_1 + 0x100))(*(undefined4 *)(param_1 + 0x104),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}

