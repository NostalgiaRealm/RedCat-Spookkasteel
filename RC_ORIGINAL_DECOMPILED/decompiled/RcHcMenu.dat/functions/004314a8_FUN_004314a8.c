/*
 * FUN_004314a8 at 004314a8
 * undefined __register FUN_004314a8(int * param_1, int param_2)
 * Address ranges: 004314a8-004314bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004314a8(int *param_1,int param_2)

{
  if (param_2 != param_1[0x16]) {
    FUN_00431474(param_1);
    param_1[0x16] = param_2;
  }
  return;
}

