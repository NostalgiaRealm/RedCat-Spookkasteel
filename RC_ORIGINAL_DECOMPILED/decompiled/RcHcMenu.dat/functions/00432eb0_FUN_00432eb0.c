/*
 * FUN_00432eb0 at 00432eb0
 * undefined __register FUN_00432eb0(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 00432eb0-00432ed9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00432eb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(short *)(param_1 + 0xd2) != 0) {
    (**(code **)(param_1 + 0xd0))(*(undefined4 *)(param_1 + 0xd4),param_1,param_2,param_4,param_3);
  }
  return;
}

