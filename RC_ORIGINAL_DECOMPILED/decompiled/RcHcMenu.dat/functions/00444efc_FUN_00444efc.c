/*
 * FUN_00444efc at 00444efc
 * undefined __register FUN_00444efc(int param_1, int param_2)
 * Address ranges: 00444efc-00444f16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444efc(int param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_00441558(*(int **)(param_1 + 0x28),*(int *)(param_2 + 0x28));
    return;
  }
  FUN_00441558(*(int **)(param_1 + 0x28),0);
  return;
}

