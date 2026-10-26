/*
 * FUN_004376dc at 004376dc
 * undefined __register FUN_004376dc(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004376dc-00437703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004376dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(short *)(param_1 + 0x1c2) != 0) {
    (**(code **)(param_1 + 0x1c0))(*(undefined4 *)(param_1 + 0x1c4),param_1,param_2,param_3);
  }
  return;
}

