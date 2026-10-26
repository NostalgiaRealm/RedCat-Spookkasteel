/*
 * FUN_004ada30 at 004ada30
 * undefined __register FUN_004ada30(int param_1, char param_2)
 * Address ranges: 004ada30-004ada64
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ada30(int param_1,char param_2)

{
  if (*(char *)(param_1 + 0x54) != param_2) {
    *(char *)(param_1 + 0x54) = param_2;
    FUN_004ad80c(param_1,0x5400,0,0);
  }
  return;
}

