/*
 * FUN_00444f18 at 00444f18
 * undefined __register FUN_00444f18(int param_1, int param_2)
 * Address ranges: 00444f18-00444f31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444f18(int param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(*(int *)(param_1 + 0x28) + 0x5c) == *(int *)(param_2 + 0x28))) {
    FUN_00441558(*(int **)(param_1 + 0x28),0);
  }
  return;
}

