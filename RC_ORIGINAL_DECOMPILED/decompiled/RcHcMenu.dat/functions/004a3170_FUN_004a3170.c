/*
 * FUN_004a3170 at 004a3170
 * undefined __register FUN_004a3170(int param_1, undefined4 param_2)
 * Address ranges: 004a3170-004a31c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a3170(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_004a25a8(*(int *)(param_1 + 0x208),param_1);
  }
  *(undefined4 *)(param_1 + 0x208) = param_2;
  if (*(int *)(param_1 + 0x208) != 0) {
    FUN_004a2554(*(int *)(param_1 + 0x208),param_1);
  }
  return;
}

