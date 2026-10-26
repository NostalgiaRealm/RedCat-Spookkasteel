/*
 * thunk_FUN_004032a4 at 004032a0
 * undefined4 __register thunk_FUN_004032a4(int param_1, int param_2)
 * Address ranges: 004032a0-004032a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Thunk: forwards to FUN_004032a4
 */

undefined4 thunk_FUN_004032a4(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)((uint)param_1 >> 8),1);
    }
    if (*(int **)(param_1 + -0x24) == (int *)0x0) break;
    param_1 = **(int **)(param_1 + -0x24);
  }
  return 0;
}

