/*
 * FUN_004f6b5c at 004f6b5c
 * undefined __register FUN_004f6b5c(int param_1, int param_2)
 * Address ranges: 004f6b5c-004f6b76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6b5c(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x18) < param_2) {
    param_2 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x14) = param_2;
  FUN_004f6bb0(param_1,*(int *)(param_1 + 0x10));
  return;
}

