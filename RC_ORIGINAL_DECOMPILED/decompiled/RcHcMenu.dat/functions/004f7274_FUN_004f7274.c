/*
 * FUN_004f7274 at 004f7274
 * undefined __register FUN_004f7274(int param_1, undefined4 param_2, undefined4 param_3, undefined1 param_4)
 * Address ranges: 004f7274-004f729d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f7274(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x242) != 0) {
    (**(code **)(param_1 + 0x240))(*(undefined4 *)(param_1 + 0x244),param_1,param_2,param_4,param_3)
    ;
  }
  return;
}

