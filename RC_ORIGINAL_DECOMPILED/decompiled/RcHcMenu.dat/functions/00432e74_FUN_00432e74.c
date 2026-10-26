/*
 * FUN_00432e74 at 00432e74
 * undefined __register FUN_00432e74(int param_1, undefined4 param_2, undefined4 param_3, undefined1 * param_4, undefined1 param_5, undefined4 param_6)
 * Address ranges: 00432e74-00432ead
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432e74(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 undefined1 param_5,undefined4 param_6)

{
  *param_4 = 0;
  if (*(short *)(param_1 + 0xda) != 0) {
    *param_4 = 1;
    (**(code **)(param_1 + 0xd8))
              (*(undefined4 *)(param_1 + 0xdc),param_1,param_2,param_4,param_5,param_6,param_3);
  }
  return;
}

