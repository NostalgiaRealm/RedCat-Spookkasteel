/*
 * FUN_004687b0 at 004687b0
 * int __register FUN_004687b0(int param_1)
 * Address ranges: 004687b0-004687c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004687b0(int param_1)

{
  if ((0 < *(int *)(param_1 + 0xc)) && (0 < *(int *)(*(int *)(param_1 + 4) + 8))) {
    return *(int *)(param_1 + 0xc);
  }
  return *(int *)(*(int *)(param_1 + 4) + 8);
}

