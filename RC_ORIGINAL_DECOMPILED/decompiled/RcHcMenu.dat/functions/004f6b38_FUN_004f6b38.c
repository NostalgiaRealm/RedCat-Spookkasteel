/*
 * FUN_004f6b38 at 004f6b38
 * undefined __register FUN_004f6b38(int param_1, int param_2)
 * Address ranges: 004f6b38-004f6b59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6b38(int param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x14)) {
    param_2 = *(int *)(param_1 + 0x14);
  }
  if (10000 < param_2) {
    param_2 = 10000;
  }
  *(int *)(param_1 + 0x18) = param_2;
  FUN_004f6bb0(param_1,*(int *)(param_1 + 0x10));
  return;
}

