/*
 * FUN_004ad104 at 004ad104
 * undefined __register FUN_004ad104(int param_1, int param_2)
 * Address ranges: 004ad104-004ad132
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad104(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x14) != param_2) {
    *(int *)(param_1 + 0x14) = param_2;
    FUN_004ad164(param_1,param_1);
  }
  return;
}

