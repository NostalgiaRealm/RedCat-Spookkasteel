/*
 * FUN_0043f2b4 at 0043f2b4
 * undefined __register FUN_0043f2b4(int param_1, int param_2)
 * Address ranges: 0043f2b4-0043f2c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043f2b4(int param_1,int param_2)

{
  *(int *)(param_2 + 4) = param_1;
  if (*(int **)(param_1 + 0x40) != (int *)0x0) {
    FUN_004121d8(*(int **)(param_1 + 0x40),param_2);
  }
  return;
}

