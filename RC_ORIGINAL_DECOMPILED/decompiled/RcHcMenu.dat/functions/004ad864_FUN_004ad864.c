/*
 * FUN_004ad864 at 004ad864
 * undefined __register FUN_004ad864(int param_1, undefined4 param_2, undefined1 param_3, undefined1 param_4)
 * Address ranges: 004ad864-004ad89b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad864(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  if (*(short *)(param_1 + 0x62) != 0) {
    (**(code **)(param_1 + 0x60))(*(undefined4 *)(param_1 + 100),param_1,param_2,param_4,param_3);
  }
  return;
}

