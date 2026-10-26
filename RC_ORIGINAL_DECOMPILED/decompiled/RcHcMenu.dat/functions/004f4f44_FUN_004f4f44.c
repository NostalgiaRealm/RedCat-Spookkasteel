/*
 * FUN_004f4f44 at 004f4f44
 * undefined __register FUN_004f4f44(int param_1, undefined4 param_2, RECT * param_3, undefined1 param_4)
 * Address ranges: 004f4f44-004f4f7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f4f44(int param_1,undefined4 param_2,RECT *param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x232) == 0) {
    FUN_0041c9f8(*(int **)(param_1 + 0x1f0),param_3);
  }
  else {
    (**(code **)(param_1 + 0x230))(*(undefined4 *)(param_1 + 0x234),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}

