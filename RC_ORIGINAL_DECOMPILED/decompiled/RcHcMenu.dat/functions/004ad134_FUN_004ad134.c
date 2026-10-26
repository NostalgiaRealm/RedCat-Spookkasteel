/*
 * FUN_004ad134 at 004ad134
 * undefined __register FUN_004ad134(int param_1, int param_2)
 * Address ranges: 004ad134-004ad162
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ad134(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1c) != param_2) {
    *(int *)(param_1 + 0x1c) = param_2;
    FUN_004ad164(param_1,param_1);
  }
  return;
}

