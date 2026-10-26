/*
 * FUN_00448550 at 00448550
 * undefined __register FUN_00448550(int param_1)
 * Address ranges: 00448550-00448562
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00448550(int param_1)

{
  if (param_1 != 0) {
    *(int *)(param_1 + 5) = DAT_005737e4;
    DAT_005737e4 = param_1;
  }
  return;
}

