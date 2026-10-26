/*
 * FUN_004f62b8 at 004f62b8
 * undefined __register FUN_004f62b8(int param_1, int param_2)
 * Address ranges: 004f62b8-004f62da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f62b8(int param_1,int param_2)

{
  FUN_004121d8(*(int **)(param_1 + 0x240),param_2);
  *(int *)(param_2 + 500) = param_1;
  FUN_004f5c40(param_2);
  return;
}

