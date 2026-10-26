/*
 * FUN_004f71f8 at 004f71f8
 * undefined __register FUN_004f71f8(int param_1, undefined4 param_2, RECT * param_3, undefined1 param_4)
 * Address ranges: 004f71f8-004f7230
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f71f8(int param_1,undefined4 param_2,RECT *param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x22a) == 0) {
    FUN_0041c9f8(*(int **)(param_1 + 0x1fc),param_3);
  }
  else {
    (**(code **)(param_1 + 0x228))(*(undefined4 *)(param_1 + 0x22c),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}

